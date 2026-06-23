// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_BagGrid.h"

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

void UInv_BagGrid::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ConstructGrid();
	BagComponent = UInv_BagStatics::GetBagComponent(GetOwningPlayer());
	BagComponent->OnItemAdded.AddDynamic(this, &ThisClass::AddItem);
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

FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const UInv_ItemComponent* ItemComponent)
{//子背包判断有空
	return HasRoomForItem(ItemComponent->GetItemManifest());
}

FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const UInv_BagItem* Item)
{//自己的AddItem时判断有空，为什么要多一个
	return HasRoomForItem(Item->GetItemManifest());
}

FInv_SlotAvailabilityResult UInv_BagGrid::HasRoomForItem(const FInv_ItemManifest& Manifest)
{//真正的判断有空在这
	FInv_SlotAvailabilityResult Result;
	
	Result.TotalRoomToFill = 7;
	Result.bStackable = true;
	FInv_SlotAvailability SlotAvailability;
	SlotAvailability.AmountToFill = 2;
	SlotAvailability.Index = 0;
	
	Result.SlotAvailabilities.Add(MoveTemp(SlotAvailability));

	FInv_SlotAvailability SlotAvailability2;
	SlotAvailability2.AmountToFill = 5;
	SlotAvailability2.Index = 1;
	Result.SlotAvailabilities.Add(MoveTemp(SlotAvailability2));
	
	return Result;
}
//动态多播，外界更新ui的入口
void UInv_BagGrid::AddItem(UInv_BagItem* Item)
{
	if (!MatchesCategory(Item)) return;//不是这个仓库的不要

	FInv_SlotAvailabilityResult Result = HasRoomForItem(Item);
	AddItemToIndices(Result, Item);	
}
//
void UInv_BagGrid::AddSlottedItemToCanvas(const int32 Index, const FInv_GridFragment* GridFragment, UInv_SlottedItem* SlottedItem) const
{
	CanvasPanel->AddChild(SlottedItem);
	//GridSlot也是通过这个类设置位置和大小的
	UCanvasPanelSlot* CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(SlottedItem);
	const FVector2D DrawPos = UInv_WidgetUtils::GetPositionFromIndex(Index, Columns) * TileSize;
	const FVector2D DrawPosWithPadding = DrawPos + FVector2D(GridFragment->GetGridPadding());
	CanvasSlot->SetSize(GetDrawSize(GridFragment));
	CanvasSlot->SetPosition(DrawPosWithPadding);
}
//AddItem里的封装1
void UInv_BagGrid::AddItemToIndices(const FInv_SlotAvailabilityResult& Result, UInv_BagItem* NewItem)
{
	for (const auto& Availability : Result.SlotAvailabilities)
	{
		AddItemAtIndex(NewItem, Availability.Index, Result.bStackable, Availability.AmountToFill);
		UpdateGridSlots(NewItem, Availability.Index, Result.bStackable, Availability.AmountToFill);
	}
}
//渲染物品图标到格子里，占几行几列都给渲染好，信息保存到SlottedItems里。。。AddItem里的封装2。
void UInv_BagGrid::AddItemAtIndex(UInv_BagItem* Item, const int32 Index, const bool bStackable, const int32 StackAmount)
{//BagItem里并不持有SlottedItem，图标等信息在持有的清单里有片段
	const FInv_GridFragment* GridFragment = GetFragment<FInv_GridFragment>(Item, FragmentTags::GridFragment);
	const FInv_ImageFragment* ImageFragment = GetFragment<FInv_ImageFragment>(Item, FragmentTags::IconFragment);
	if (!GridFragment || !ImageFragment) return;

	UInv_SlottedItem* SlottedItem = CreateSlottedItem(Item, bStackable, StackAmount, GridFragment, ImageFragment, Index);//SlottedItem首次使用

	// 把图标控件添加到画布里对应的格子上
	AddSlottedItemToCanvas(Index, GridFragment, SlottedItem);
	
	// 把格子里放的物品保存到 SlottedItems 里，方便后续查询
	SlottedItems.Add(Index, SlottedItem);
}
//AddItem里的封装3
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

	return SlottedItem;
}

//AddItem里的封装4。渲染图标控件函数。从片段里拿到图标，渲染到图标控件SlottedItem里
void UInv_BagGrid::SetSlottedItemImage(const UInv_SlottedItem* SlottedItem, const FInv_GridFragment* GridFragment, const FInv_ImageFragment* ImageFragment) const
{
	FSlateBrush Brush;
	Brush.SetResourceObject(ImageFragment->GetIcon());
	Brush.DrawAs = ESlateBrushDrawType::Image;
	Brush.ImageSize = GetDrawSize(GridFragment);
	SlottedItem->SetImageBrush(Brush);
}
//AddItem里的封装5。计算去掉格子padding后图标size，用来渲染图标控件
FVector2D UInv_BagGrid::GetDrawSize(const FInv_GridFragment* GridFragment) const
{
	const float IconTileWidth = TileSize - GridFragment->GetGridPadding() * 2;
	return GridFragment->GetGridSize() * IconTileWidth;//几乘几格 * 去掉padding后的格子size
}

//更新格子状态为占用。从Item的格子片段里拿到占几个格子的信息，遍历更新每个格子状态
void UInv_BagGrid::UpdateGridSlots(UInv_BagItem* NewItem, const int32 Index, bool bStackableItem, const int32 StackAmount)
{
	check(GridSlots.IsValidIndex(Index));

	if (bStackableItem)
	{
		GridSlots[Index]->SetStackCount(StackAmount);
	}

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
