// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_BagGrid.h"

#include "BagSystem.h"
#include "BagManagement/Components/Inv_BagComponent.h"
#include "BagManagement/Utils/Inv_BagStatics.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Items/Inv_BagItem.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Items/Fragments/Inv_FragmentTags.h"
#include "Items/Fragments/Inv_ItemFragment.h"
#include "Widgets/Bag//GridSlots/Inv_GridSlot.h"
#include "Widgets/Utils/Inv_WidgetUtils.h"
#include "Widgets/Bag/SlottedItems/Inv_SlottedItem.h"
#include "Widgets/Bag/HoverItem/Inv_HoverItem.h"

void UInv_BagGrid::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ConstructGrid();
	BagComponent = UInv_BagStatics::GetBagComponent(GetOwningPlayer());
	BagComponent->OnItemAdded.AddDynamic(this, &ThisClass::AddItem);
	BagComponent->OnStackChange.AddDynamic(this, &ThisClass::AddStacks);//触发BagGrid的AddStacks()
}
//每帧更新鼠标坐标
void UInv_BagGrid::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	const FVector2D CanvasPosition = UInv_WidgetUtils::GetWidgetPosition(CanvasPanel);
	const FVector2D MousePosition = UWidgetLayoutLibrary::GetMousePositionOnViewport(GetOwningPlayer());

	// 判断鼠标是否刚刚从 Canvas 内移动到 Canvas 外，如果是，则不再更新格子参数。
	if (CursorExitedCanvas(CanvasPosition, UInv_WidgetUtils::GetWidgetSize(CanvasPanel), MousePosition))
	{
		return;
	}
	else if (bMouseWithinCanvas)UpdateTileParameters(CanvasPosition, MousePosition);//实时更新鼠标位置的格子
}

bool UInv_BagGrid::CursorExitedCanvas(const FVector2D& CanvasPosition, const FVector2D& WidgetSize, const FVector2D& MousePos)
{
	// 先保存上一帧状态，再更新当前帧是否仍位于 Canvas 内。
	bLastMouseWithinCanvas = bMouseWithinCanvas;
	bMouseWithinCanvas = UInv_WidgetUtils::IsWithinBounds(CanvasPosition, WidgetSize, MousePos);

	// 只有“上一帧在内、这一帧在外”才表示刚刚退出；持续停在外面不会重复触发。
	if (!bMouseWithinCanvas && bLastMouseWithinCanvas)
	{
		// TODO: 在这里取消鼠标离开前高亮的格子。
		UnHighlightSlots(LastHighlightedIndex, LastHighlightedDimensions);
		return true;
	}
	return false;
}

void UInv_BagGrid::UpdateTileParameters(const FVector2D& CanvasPosition, const FVector2D& MousePosition)
{
	const FIntPoint HoveredTileCoordinates = CalculateHoveredCoordinates(CanvasPosition, MousePosition);//计算鼠标在画布上的相对坐标
	//计算鼠标位置结构体
	LastTileParameters = TileParameters;
	TileParameters.TileCoordinats = HoveredTileCoordinates;
	TileParameters.TileIndex = UInv_WidgetUtils::GetIndexFromPosition(HoveredTileCoordinates, Columns);
	TileParameters.TileQuadrant = CalculateTileQuadrant(CanvasPosition, MousePosition);//象限
	OnTileParametersUpdated(TileParameters);
}

void UInv_BagGrid::OnTileParametersUpdated(const FInv_TileParameters& Parameters)
{
	// 获取悬停元素的尺寸
	// 计算高亮起始坐标
	// 检查悬停位置
	// 是否在网格范围内？
	// 是否有其他元素阻挡？
	// 若有阻挡，是否仅有单个阻挡元素？（是否可执行交换？）
	if (!IsValid(HoverItem)) return;
	const FIntPoint Dimensions = HoverItem->GetGridDimensions();//FIntPoint是{X，Y}
	const FIntPoint StartingCoordinate = CalculateStartingCoordinate(Parameters.TileCoordinats, Dimensions, Parameters.TileQuadrant);
	ItemDropIndex = UInv_WidgetUtils::GetIndexFromPosition(StartingCoordinate, Columns);

	CurrentQueryResult = CheckHoverPosition(StartingCoordinate, Dimensions);

	if (CurrentQueryResult.bHasSpace)
	{
		HighlightSlots(ItemDropIndex, Dimensions);
		return;
	}
	UnHighlightSlots(LastHighlightedIndex, LastHighlightedDimensions);

	// 当前摆放区域放不下，但只与一个已有物品重叠时，将那个物品占用的整块区域标成灰色。
	// UpperLeftIndex 是已有物品的左上角格子，先验证下标，避免从无效位置开始遍历 GridSlots。
	if (CurrentQueryResult.ValidItem.IsValid() && GridSlots.IsValidIndex(CurrentQueryResult.UpperLeftIndex))
	{
		// 查询结果只记录了重叠物品；它实际占用多少格，需要从该物品的 GridFragment 中读取。
		const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(CurrentQueryResult.ValidItem.Get(), FragmentTags::GridFragment);
		if (!GridFragment) return;

		// 从已有物品左上角开始，把它覆盖的全部格子状态设为禁用，提示当前发生单物品冲突。
		ChangeHoverType(CurrentQueryResult.UpperLeftIndex, GridFragment->GetGridSize(), EInv_GridSlotState::GrayedOut);
	}
}
//找HoverItem左上角格子坐标
FIntPoint UInv_BagGrid::CalculateStartingCoordinate(const FIntPoint& Coordinate, const FIntPoint& Dimensions, const EInv_TileQuadrant Quadrant) const
{
	const int32 HasEvenWidth = Dimensions.X % 2 == 0 ? 1 : 0;
	const int32 HasEvenHeight = Dimensions.Y % 2 == 0 ? 1 : 0;

	FIntPoint StartingCoord;
	/* 起始位置=鼠标xy坐标-物品宽高的一半
	 * 对于行方向，偶数时，位于格子左半边时，起始坐标不变；位于格子右半边时，起始坐标右移。
	 *			 奇数时，不变
	 * 对于列方向，偶数时，位于格子上半边时，起始坐标不变；位于格子下半边时，起始坐标下移。
	 *			 奇数时，不变
	 */
	switch (Quadrant)
	{
		case EInv_TileQuadrant::TopLeft:
			StartingCoord.X = Coordinate.X - FMath::FloorToInt(0.5f * Dimensions.X);
			StartingCoord.Y = Coordinate.Y - FMath::FloorToInt(0.5f * Dimensions.Y);
			break;
		case EInv_TileQuadrant::TopRight:
			StartingCoord.X = Coordinate.X - FMath::FloorToInt(0.5f * Dimensions.X) + HasEvenWidth;
			StartingCoord.Y = Coordinate.Y - FMath::FloorToInt(0.5f * Dimensions.Y);
			break;
		case EInv_TileQuadrant::BottomLeft:
			StartingCoord.X = Coordinate.X - FMath::FloorToInt(0.5f * Dimensions.X);
			StartingCoord.Y = Coordinate.Y - FMath::FloorToInt(0.5f * Dimensions.Y) + HasEvenHeight;
			break;
		case EInv_TileQuadrant::BottomRight:
			StartingCoord.X = Coordinate.X - FMath::FloorToInt(0.5f * Dimensions.X) + HasEvenWidth;
			StartingCoord.Y = Coordinate.Y - FMath::FloorToInt(0.5f * Dimensions.Y) + HasEvenHeight;
			break;
		default:
			UE_LOG(BagSystem, Warning, TEXT("UInv_BagGrid::CalculateStartingCoordinate: Invalid quadrant."));
		return FIntPoint(-1, -1);
	}
	return StartingCoord;
}
//Result里有是否有空间、格子里有啥物品（只能记一个）、物品左上角格子号
FInv_SpaceQueryResult UInv_BagGrid::CheckHoverPosition(const FIntPoint& Position, const FIntPoint& Dimensions) 
{
	FInv_SpaceQueryResult Result;//
	
	if (!IsInGridBounds(UInv_WidgetUtils::GetIndexFromPosition(Position, Columns), Dimensions)) return Result;

	Result.bHasSpace = true;
	
	// 遍历高亮范围，任意格子被占用就标记为没有空间
	TSet<int32> OccupiedUpperLeftIndices;
	UInv_BagStatics::ForEach2D(GridSlots, UInv_WidgetUtils::GetIndexFromPosition(Position, Columns), Dimensions, Columns, [&](const UInv_GridSlot* GridSlot)
	{
		if (GridSlot->GetBagItem().IsValid())
		{
			OccupiedUpperLeftIndices.Add(GridSlot->GetUpperLeftIndex());//把格子里有物品的左上角格子号都记下来
			Result.bHasSpace = false;
		}
	});
	
	// 范围内只有一个物品，记下他的信息，后续可以尝试交换/合并
	if (OccupiedUpperLeftIndices.Num() == 1) // single item at position - it's valid for swapping/combining
	{
		const int32 Index = *OccupiedUpperLeftIndices.CreateConstIterator();
		Result.ValidItem = GridSlots[Index]->GetBagItem();
		Result.UpperLeftIndex = GridSlots[Index]->GetUpperLeftIndex();
	}

	return Result;
}

//根据行列创建格子，设置格子号，把格子添加到画布并设置位置和大小
void UInv_BagGrid::ConstructGrid()
{
	GridSlots.Reserve(Rows * Columns);// 预先分配数组容量，避免逐个添加格子时频繁重新分配内存。

	for (int32 j = 0; j < Rows; ++j)
	{
		for (int32 i = 0; i < Columns; ++i)
		{// 创建一个格子控件，并把它添加到 画布中，格子就是画布的子控件，设置每个格子的大小，会在画布中自动绘制
			UInv_GridSlot* GridSlot = CreateWidget<UInv_GridSlot>(this, GridSlotClass);

			const FIntPoint TilePosition(i, j);// i j存进去{i，j}，没必要这样写
			GridSlot->SetTileIndex(UInv_WidgetUtils::GetIndexFromPosition(TilePosition, Columns));//给当前格子设置格子号
			GridSlots.Add(GridSlot);//以后去GridSlots里查询格子

			CanvasPanel->AddChild(GridSlot);
			// 画布格子需要用UCanvasPanelSlot来设置位置和大小
			UCanvasPanelSlot* GridCPS = UWidgetLayoutLibrary::SlotAsCanvasSlot(GridSlot);
			GridCPS->SetSize(FVector2D(TileSize));
			GridCPS->SetPosition(TilePosition * TileSize);
		}
	}
}

//子背包判断有空
FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const UInv_ItemComponent* ItemComponent)
{
	return HasRoomForItem(ItemComponent->GetItemManifest());
}
//自己的AddItem时判断有空，为什么要多一个
FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const UInv_BagItem* Item)
{
	return HasRoomForItem(Item->GetItemManifest());
}
//真正的判断有空在这
FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const FInv_ItemManifest& Manifest)
{
	FInv_SlotAvailabilityResult Result;
		
	const FInv_StackableFragment* StackableFragment = Manifest.GetFragmentOfType<FInv_StackableFragment>();
	Result.bStackable = StackableFragment != nullptr;
	
	const int32 MaxStackSize = StackableFragment ? StackableFragment->GetMaxStackSize() : 1;
	int32 AmountToFill = StackableFragment ? StackableFragment->GetStackCount() : 1;//这是要放的数量，默认1

	TSet<int32> CheckedIndices;// 下标数组，记录已检查过的格子
	
	for (const auto& GridSlot : GridSlots)// 遍历每一个背包槽位 
	{
		if (AmountToFill == 0) break;//任务完成
		if (IsIndexClaimed(CheckedIndices, GridSlot->GetIndex())) continue;// 检查过就跳，记录可用格子
		
		if (!IsInGridBounds(GridSlot->GetIndex(), GetItemDimensions(Manifest))) continue;// 物品尺寸超出网格边界，跳过
		
		TSet<int32> lsCheckedIndices;//ls下标数组
		if (!HasRoomAtIndex(GridSlot, GetItemDimensions(Manifest), CheckedIndices, lsCheckedIndices, Manifest.GetItemType(), MaxStackSize))
		{
			continue;//放不了
		}
		//此处重复，因为HasRoomAtIndex里已经排除了放满的格子，标记了的就是可以放的格子
		const int32 AmountToFillInSlot = DetermineFillAmountForSlot(Result.bStackable, MaxStackSize, AmountToFill, GridSlot);//当前格子还能放多少个这个物品
		if (AmountToFillInSlot == 0) continue;
		
		CheckedIndices.Append(lsCheckedIndices);//能放下，全部标记
		
		// 记录总可用空间
		Result.TotalRoomToFill += AmountToFillInSlot;
		//数组末尾构造一个新元素
		Result.SlotAvailabilities.Emplace(
			FInv_SlotAvailability{
				HasValidItem(GridSlot) ? GridSlot->GetUpperLeftIndex() : GridSlot->GetIndex(),
				Result.bStackable ? AmountToFillInSlot : 0,
				HasValidItem(GridSlot)
			}
		);

		AmountToFill -= AmountToFillInSlot;
		// 记录还剩多少要放
		Result.Remainder = AmountToFill;

		if (AmountToFill == 0) return Result;
	}
	
	return Result;
}
// 检查以当前格子为左上角的区域是否有足够的空间来放置物品。检查每个格子是否符合条件，如果符合就标记到lsCheckedIndices里
bool UInv_BagGrid::HasRoomAtIndex(const UInv_GridSlot* GridSlot, const FIntPoint& Dimensions,const TSet<int32>& CheckedIndices,	TSet<int32>& lsCheckedIndices,const FGameplayTag& ItemType,const int32 MaxStackSize)
{
	bool bHasRoomAtIndex = true;//flag
//把符合条件的格子都用ls下标数组标记
	UInv_BagStatics::ForEach2D(GridSlots, GridSlot->GetIndex(), Dimensions, Columns,
		[&](const UInv_GridSlot* SubGridSlot)
		{
			//此处应先判断是否放了相应BagItem且可堆叠，若是直接全部标记；否则再判断是否有足够的空格子
			if (CheckSlotConstraints(GridSlot, SubGridSlot, CheckedIndices, lsCheckedIndices, ItemType, MaxStackSize))
			{
				lsCheckedIndices.Add(SubGridSlot->GetIndex());
			}
			else
			{
				bHasRoomAtIndex = false;
			}
		}
	);

	return bHasRoomAtIndex;
}
//检查格子约束条件，格子里有物品吗？索引查过没？是不是左上角格子？//GridSlot是左上角格子，SubGridSlot是正在检查的格子
bool UInv_BagGrid::CheckSlotConstraints(const UInv_GridSlot* GridSlot,
												const UInv_GridSlot* SubGridSlot,
												const TSet<int32>& CheckedIndices,
												TSet<int32>& lsCheckedIndices,
												const FGameplayTag& ItemType,
												const int32 MaxStackSize) const
{
	if (IsIndexClaimed(CheckedIndices, SubGridSlot->GetIndex())) return false;// 格子已被占用？
	
	if (!HasValidItem(SubGridSlot))
	{
		lsCheckedIndices.Add(SubGridSlot->GetIndex());// 没东西就标记，重复的
		return true;
	}
	//以下是格子里有物品的情况
	if (!IsUpperLeftSlot(GridSlot, SubGridSlot)) return false;// 不是左上角格子就不行，等同于格子被占用
	//以下对比格子里放物品是否匹配和是否还可堆叠
	const UInv_BagItem* SubItem = SubGridSlot->GetBagItem().Get();
	
	if (!DoesItemTypeMatch(SubItem, ItemType)) return false;// 物品子Tag不匹配不要
	if (!SubItem->IsStackable()) return false;// 物品不可堆叠不要？
	if (GridSlot->GetStackCount() >= MaxStackSize) return false;// 左上角格子显示的数量已经达到最大堆叠数了不要
	
	return true;
}
//从物品清单里拿到格子片段，获取物品占几乘几格子
FIntPoint UInv_BagGrid::GetItemDimensions(const FInv_ItemManifest& Manifest) const
{
	const FInv_GridFragment* GridFragment = Manifest.GetFragmentOfType<FInv_GridFragment>();
	return GridFragment ? GridFragment->GetGridSize() : FIntPoint(1, 1);
}


//动态多播，TryAddItem()里查询Result的入口
void UInv_BagGrid::AddItem(UInv_BagItem* Item)
{
	if (!MatchesCategory(Item)) return;//不是这个仓库的不要

	FInv_SlotAvailabilityResult Result = HasRoomForItem(Item);
	AddItemToIndices(Result, Item);	
}
//AddItem里的封装1
void UInv_BagGrid::AddItemToIndices(const FInv_SlotAvailabilityResult& Result, UInv_BagItem* NewItem)
{
	for (const auto& Availability : Result.SlotAvailabilities)//遍历每个格子，拿到格子下标和这个格子还能放多少个当前物品的信息
	{
		AddItemAtIndex(NewItem, Availability.Index, Result.bStackable, Availability.AmountToFill);
		UpdateGridSlots(NewItem, Availability.Index, Result.bStackable, Availability.AmountToFill);
	}
}
//渲染物品图标到格子里，占几行几列都给渲染好，信息保存到SlottedItems里
void UInv_BagGrid::AddItemAtIndex(UInv_BagItem* Item, const int32 Index, const bool bStackable, const int32 StackAmount)
{//BagItem里并不持有SlottedItem，取到Item的Manifest，遍历清单里每个片段，找到需要的片段
	const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(Item, FragmentTags::GridFragment);
	const FInv_ImageFragment* ImageFragment = GetFragment<FInv_ImageFragment>(Item, FragmentTags::IconFragment);
	if (!GridFragment || !ImageFragment) return;

	UInv_SlottedItem* SlottedItem = CreateSlottedItem(Item, bStackable, StackAmount, GridFragment, ImageFragment, Index);//SlottedItem首次使用

	// 把物品图标添加到画布里对应的格子上
	AddSlottedItemToCanvas(Index, GridFragment, SlottedItem);
	
	// 把格子里放的物品保存到 SlottedItems 里，方便后续查询
	SlottedItems.Add(Index, SlottedItem);
}
// 创建一个物品图标，绑定弱指针Item，及其片段里的图标大小
UInv_SlottedItem* UInv_BagGrid::CreateSlottedItem(UInv_BagItem* Item, const bool bStackable, const int32 StackAmount, const FInv_GridFragment* GridFragment, const FInv_ImageFragment* ImageFragment, const int32 Index)
{
	UInv_SlottedItem* SlottedItem = CreateWidget<UInv_SlottedItem>(GetOwningPlayer(), SlottedItemClass);
//设置物品图标
	SlottedItem->SetBagItem(Item);
	SetSlottedItemImage(SlottedItem, GridFragment, ImageFragment);
	SlottedItem->SetGridIndex(Index);
//设置图标右下角的数量
	SlottedItem->SetIsStackable(bStackable);
	const int32 StackUpdateAmount = bStackable ? StackAmount : 0;
	SlottedItem->UpdateStackCount(StackUpdateAmount);
//绑定委托	
	SlottedItem->OnSlottedItemClicked.AddDynamic(this, &ThisClass::OnSlottedItemClicked_ThenDoSomethingInBagGrid);//SlottedItem有名为OnSlottedItemClicked的委托，这里把OnSlottedItemClicked_ThenDoSomethingInBagGrid和它绑定起来
	return SlottedItem;
}

//点击物品图标时触发的委托函数
void UInv_BagGrid::OnSlottedItemClicked_ThenDoSomethingInBagGrid(int32 GridIndex, const FPointerEvent& MouseEvent)
{
	check(GridSlots.IsValidIndex(GridIndex));
	UInv_BagItem* ClickedBagItem = GridSlots[GridIndex]->GetBagItem().Get();

	if (!IsValid(HoverItem) && IsLeftClick(MouseEvent))
	{
		PickUpBagItem(ClickedBagItem, GridIndex);
	}
}

void UInv_BagGrid::PickUpBagItem(UInv_BagItem* ClickedBagItem, const int32 GridIndex)
{
	AssignHoverItem(ClickedBagItem, GridIndex, GridIndex);
	
	// 清空格子
	RemoveItemFromGrid(ClickedBagItem, GridIndex);
}


void UInv_BagGrid::AssignHoverItem(UInv_BagItem* BagItem, const int32 GridIndex, const int32 PreviousGridIndex)
{
	AssignHoverItem(BagItem);

	HoverItem->SetPreviousGridIndex(PreviousGridIndex);// 记下原来的格子索引，方便后续放回去
	HoverItem->UpdateStackCount(BagItem->IsStackable() ? GridSlots[GridIndex]->GetStackCount() : 0);// 更新悬停物品图标的数量显示
}
/**
 * 逻辑是：当鼠标点击物品图标时，创建一个悬停物品图标（HoverItem），并将其与被点击的物品（BagItem）关联起来。悬停物品图标会显示在鼠标指针附近，提供视觉反馈，表示玩家正在拖动该物品。
 * 具体步骤如下：
 * 1. 检查鼠标上是不是已经有悬停物品了。
 * 2. 从 BagItem 中获取 FInv_GridFragment 和 FInv_ImageFragment 片段，这些片段包含了物品在网格中的尺寸信息和图标资源。给悬停图标赋值
 * 3. 设置悬停物品图标在鼠标指针附近显示，使用 GetOwningPlayer()->SetMouseCursorWidget() 方法将悬停物品图标绑定到鼠标光标上，使其在拖动过程中跟随鼠标移动。
 * @param BagItem 
 */
void UInv_BagGrid::AssignHoverItem(UInv_BagItem* BagItem)
{
	if (!IsValid(HoverItem))
	{
		HoverItem = CreateWidget<UInv_HoverItem>(GetOwningPlayer(), HoverItemClass);  // 悬停物品在鼠标点击后创建
	}

	const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(BagItem, FragmentTags::GridFragment);
	const FInv_ImageFragment* ImageFragment = GetFragment<FInv_ImageFragment>(BagItem, FragmentTags::IconFragment);
	if (!GridFragment || !ImageFragment) return;

	const FVector2D DrawSize = GetDrawSize(GridFragment);

	FSlateBrush IconBrush;
	IconBrush.SetResourceObject(ImageFragment->GetIcon());
	IconBrush.DrawAs = ESlateBrushDrawType::Image;
	IconBrush.ImageSize = DrawSize * UWidgetLayoutLibrary::GetViewportScale(this);

	HoverItem->SetImageBrush(IconBrush);
	HoverItem->SetGridDimensions(GridFragment->GetGridSize());
	HoverItem->SetBagItem(BagItem);
	HoverItem->SetIsStackable(BagItem->IsStackable());

	GetOwningPlayer()->SetMouseCursorWidget(EMouseCursor::Default, HoverItem);
}

void UInv_BagGrid::RemoveItemFromGrid(UInv_BagItem* BagItem, const int32 GridIndex)
{
	const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(BagItem, FragmentTags::GridFragment);
	if (!GridFragment) return;

	UInv_BagStatics::ForEach2D(GridSlots, GridIndex, GridFragment->GetGridSize(), Columns, [&](UInv_GridSlot* GridSlot)
	{	//把物品所占的NxM个格子重置格子内容、格子归属、占用、可用性、堆叠数
		GridSlot->SetBagItem(nullptr);
		GridSlot->SetUpperLeftIndex(INDEX_NONE);
		GridSlot->SetUnoccupiedTexture();
		GridSlot->SetAvailable(true);
		GridSlot->SetStackCount(0);
	});

	if (SlottedItems.Contains(GridIndex))// 移除下标和对应的物品图标的Map
	{
		TObjectPtr<UInv_SlottedItem> FoundSlottedItem;
		SlottedItems.RemoveAndCopyValue(GridIndex, FoundSlottedItem);//第二个参数是接收被移除的元素图标，
		FoundSlottedItem->RemoveFromParent();
	}
}

//把物品图标添加到画布里对应的格子上，设置位置和大小
void UInv_BagGrid::AddSlottedItemToCanvas(const int32 Index, const FInv_GridFragment* GridFragment, UInv_SlottedItem* SlottedItem) const
{
	CanvasPanel->AddChild(SlottedItem);
	//GridSlot也是通过这个类设置位置和大小的
	UCanvasPanelSlot* CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(SlottedItem);
	const FVector2D DrawPos = UInv_WidgetUtils::GetPositionFromIndex(Index, Columns) * TileSize;//格子位置*格子尺寸=图标位置。图标位置还要加上格子padding，才能得到最终的图标绘制位置
	const FVector2D DrawPosWithPadding = DrawPos + FVector2D(GridFragment->GetGridPadding());
	CanvasSlot->SetSize(GetDrawSize(GridFragment));//找到左上角，按照
	CanvasSlot->SetPosition(DrawPosWithPadding);
}

//渲染图标控件函数。从片段里拿到图标，渲染到图标控件SlottedItem里
void UInv_BagGrid::SetSlottedItemImage(const UInv_SlottedItem* SlottedItem, const FInv_GridFragment* GridFragment, const FInv_ImageFragment* ImageFragment) const
{
	FSlateBrush Brush;
	Brush.SetResourceObject(ImageFragment->GetIcon());
	Brush.DrawAs = ESlateBrushDrawType::Image;
	Brush.ImageSize = GetDrawSize(GridFragment);
	SlottedItem->SetImageBrush(Brush);
}
//计算物品图标的绘制尺寸
FVector2D UInv_BagGrid::GetDrawSize(const FInv_GridFragment* GridFragment) const
{// 1. 先计算没有 Padding 时的绝对总格子大小 (例如 2格 * 100 = 200)
	const FVector2D TotalFullSize = GridFragment->GetGridSize() * TileSize;
    
	// 2. 无论物品多大，都只减去最外圈的 2 个 Padding (例如 200 - 20 = 180)
	return TotalFullSize - FVector2D(GridFragment->GetGridPadding() * 2.0f);
}

//更新格子状态为占用。从Item的格子片段里拿到占几个格子的信息，遍历更新每个格子状态
void UInv_BagGrid::UpdateGridSlots(UInv_BagItem* NewItem, const int32 Index, bool bStackableItem, const int32 StackAmount)
{
	check(GridSlots.IsValidIndex(Index));

	if (bStackableItem)
	{
		GridSlots[Index]->SetStackCount(StackAmount);
	}
//取格子片段看看这个Item占几格，遍历设为占用
	const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(NewItem, FragmentTags::GridFragment);
	const FIntPoint Dimensions = GridFragment ? GridFragment->GetGridSize() : FIntPoint(1, 1);

	UInv_BagStatics::ForEach2D(GridSlots, Index, Dimensions, Columns, [&](UInv_GridSlot* GridSlot)
	{
		GridSlot->SetBagItem(NewItem);
		GridSlot->SetUpperLeftIndex(Index);
		GridSlot->SetOccupiedTexture();
		GridSlot->SetAvailable(false);
	});
}
//是放这个背包里吗？
bool UInv_BagGrid::MatchesCategory(const UInv_BagItem* Item) const
{
	return Item->GetItemManifest().GetItemCategory() == ItemCategory;
}
//格子里有物品吗？查它的BagItem弱指针是否有效
bool UInv_BagGrid::HasValidItem(const UInv_GridSlot* GridSlot) const
{
	return GridSlot->GetBagItem().IsValid();
}
//这个格子是物品的左上角格子吗？
bool UInv_BagGrid::IsUpperLeftSlot(const UInv_GridSlot* GridSlot, const UInv_GridSlot* SubGridSlot) const
{
	return SubGridSlot->GetUpperLeftIndex() == GridSlot->GetIndex();
}
//物品子Tag匹配吗
bool UInv_BagGrid::DoesItemTypeMatch(const UInv_BagItem* SubItem, const FGameplayTag& ItemType) const
{
	return SubItem->GetItemManifest().GetItemType().MatchesTagExact(ItemType);
}
// 检查时，背包剩余行数列数不足以放置物品时，就不必再检查了，直接返回false
bool UInv_BagGrid::IsInGridBounds(const int32 StartIndex, const FIntPoint& ItemDimensions) const
{
	if (StartIndex < 0 || StartIndex >= GridSlots.Num()) return false;
	const int32 EndColumn = (StartIndex % Columns) + ItemDimensions.X;
	const int32 EndRow = (StartIndex / Columns) + ItemDimensions.Y;
	return EndColumn <= Columns && EndRow <= Rows;
}
//当前格子还能放多少个物品，单格可放上限-当前已堆叠数
int32 UInv_BagGrid::DetermineFillAmountForSlot(const bool bStackable, const int32 MaxStackSize,
	const int32 AmountToFill, const UInv_GridSlot* GridSlot) const
{
	const int32 RoomInSlot = MaxStackSize - GetStackAmount(GridSlot);
	return bStackable ? FMath::Min(AmountToFill, RoomInSlot) : 1;
}
//获取左上角格子记录的数量
int32 UInv_BagGrid::GetStackAmount(const UInv_GridSlot* GridSlot) const
{
	int32 CurrentSlotStackCount = GridSlot->GetStackCount();
	// 如果当前槽位未存储栈计数，我们就必须获取实际栈计数。
	if (const int32 UpperLeftIndex = GridSlot->GetUpperLeftIndex(); UpperLeftIndex != INDEX_NONE)
	{
		UInv_GridSlot* UpperLeftGridSlot = GridSlots[UpperLeftIndex];
		CurrentSlotStackCount = UpperLeftGridSlot->GetStackCount();
	}
	return CurrentSlotStackCount;
}
//当服务器添加了堆叠物品后，会广播给客户端，客户端收到广播后会调用这个函数来更新UI。它会遍历每个格子，如果格子里已经有这个物品，就更新堆叠数；如果格子里没有这个物品，就创建一个新的SlottedItem并添加到画布上，同时更新格子状态。
void UInv_BagGrid::AddStacks(const FInv_SlotAvailabilityResult& Result)
{
	if (!MatchesCategory(Result.Item.Get())) return;//检查这个物品的分类是否与当前的背包网格面板相匹配

	for (const auto& Availability : Result.SlotAvailabilities)// 每个格子该放多少已经在 HasRoomForItem() 里计算好了
	{
		if (Availability.bItemAtIndex)
		{
			const auto& GridSlot = GridSlots[Availability.Index];
			const auto& SlottedItem = SlottedItems.FindChecked(Availability.Index);
			SlottedItem->UpdateStackCount(GridSlot->GetStackCount() + Availability.AmountToFill);//更新ui
			GridSlot->SetStackCount(GridSlot->GetStackCount() + Availability.AmountToFill);//更新格子状态
		}
		else
		{
			AddItemAtIndex(Result.Item.Get(), Availability.Index, Result.bStackable, Availability.AmountToFill);
			UpdateGridSlots(Result.Item.Get(), Availability.Index, Result.bStackable, Availability.AmountToFill);
		}
	}
}

//这个下标查过没？ 就是看CheckedIndices里有没有这个Index
bool UInv_BagGrid::IsIndexClaimed(const TSet<int32>& CheckedIndices, const int32 Index) const
{
	return CheckedIndices.Contains(Index);
}



bool UInv_BagGrid::IsRightClick(const FPointerEvent& MouseEvent) const
{
	return MouseEvent.GetEffectingButton() == EKeys::RightMouseButton;
}

bool UInv_BagGrid::IsLeftClick(const FPointerEvent& MouseEvent) const
{
	return MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton;
}


FIntPoint UInv_BagGrid::CalculateHoveredCoordinates(const FVector2D& CanvasPosition, const FVector2D& MousePosition) const
{
	return FIntPoint{
		static_cast<int32>(FMath::FloorToInt((MousePosition.X - CanvasPosition.X) / TileSize)),
		static_cast<int32>(FMath::FloorToInt((MousePosition.Y - CanvasPosition.Y) / TileSize))
	};
}
//鼠标在格子的哪一象限，边界处理成左上角象限
EInv_TileQuadrant UInv_BagGrid::CalculateTileQuadrant(const FVector2D& CanvasPosition, const FVector2D& MousePosition) const
{//相对坐标%格子大小=>浮点数=>判断象限
	const float TileLocalX = FMath::Fmod(MousePosition.X - CanvasPosition.X, TileSize);
	const float TileLocalY = FMath::Fmod(MousePosition.Y - CanvasPosition.Y, TileSize);

	// Determine which quadrant the mouse is in
	const bool bIsTop = TileLocalY < TileSize / 2.f; // Top if Y is in the upper half
	const bool bIsLeft = TileLocalX < TileSize / 2.f; // Left if X is in the left half

	EInv_TileQuadrant HoveredTileQuadrant{EInv_TileQuadrant::None};
	if (bIsTop && bIsLeft) HoveredTileQuadrant = EInv_TileQuadrant::TopLeft;
	else if (bIsTop && !bIsLeft) HoveredTileQuadrant = EInv_TileQuadrant::TopRight;
	else if (!bIsTop && bIsLeft) HoveredTileQuadrant = EInv_TileQuadrant::BottomLeft;
	else if (!bIsTop && !bIsLeft) HoveredTileQuadrant = EInv_TileQuadrant::BottomRight;

	return HoveredTileQuadrant;
}


void UInv_BagGrid::HighlightSlots(const int32 Index, const FIntPoint& Dimensions)
{
	if (!bMouseWithinCanvas) return;
	UnHighlightSlots(LastHighlightedIndex, LastHighlightedDimensions);
	UInv_BagStatics::ForEach2D(GridSlots, Index, Dimensions, Columns, [&](UInv_GridSlot* GridSlot)
	{
		GridSlot->SetOccupiedTexture();
	});
	LastHighlightedDimensions = Dimensions;
	LastHighlightedIndex = Index;
}

void UInv_BagGrid::UnHighlightSlots(const int32 Index, const FIntPoint& Dimensions)
{
	UInv_BagStatics::ForEach2D(GridSlots, Index, Dimensions, Columns, [&](UInv_GridSlot* GridSlot)
	{
		if (GridSlot->IsAvailable())
		{
			GridSlot->SetUnoccupiedTexture();
		}
		else
		{
			GridSlot->SetOccupiedTexture();
		}
	});
}

void UInv_BagGrid::ChangeHoverType(const int32 Index, const FIntPoint& Dimensions, EInv_GridSlotState GridSlotState)
{
	// 先取消旧的高亮区域，再应用新的高亮区域
	UnHighlightSlots(LastHighlightedIndex, LastHighlightedDimensions);

	// Index 是区域左上角的一维下标，Dimensions 是宽高；ForEach2D 会遍历该矩形内的全部格子。
	UInv_BagStatics::ForEach2D(GridSlots, Index, Dimensions, Columns, [State = GridSlotState](UInv_GridSlot* GridSlot)
	{
		// 同一个入口支持四种悬停显示状态，调用方只需要指定目标状态。
		switch (State)
		{
		case EInv_GridSlotState::Occupied:
			GridSlot->SetOccupiedTexture();
			break;
		case EInv_GridSlotState::Unoccupied:
			GridSlot->SetUnoccupiedTexture();
			break;
		case EInv_GridSlotState::GrayedOut:
			GridSlot->SetGrayedOutTexture();
			break;
		case EInv_GridSlotState::Selected:
			GridSlot->SetSelectedTexture();
			break;
		}
	});

	// 记住本次改变的区域，下次切换悬停目标时可以先将它恢复。
	LastHighlightedIndex = Index;
	LastHighlightedDimensions = Dimensions;
}
