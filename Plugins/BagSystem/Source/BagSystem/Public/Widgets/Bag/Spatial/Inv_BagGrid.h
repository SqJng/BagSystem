// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/Inv_GridTypes.h"

#include "Inv_BagGrid.generated.h"


// 这里只需要把枚举作为函数参数使用，前向声明可避免在头文件中额外包含 GridSlot 头文件。
enum class EInv_GridSlotState : uint8;
class UInv_HoverItem;
struct FGameplayTag;
struct FInv_ImageFragment;
class UInv_SlottedItem;
struct FInv_GridFragment;
class UInv_ItemComponent;
struct FInv_ItemManifest;
class UInv_BagComponent;
class UCanvasPanel;
class UInv_GridSlot;
/**
 * 单个分类页里的格子网格，例如装备页、消耗品页或材料页里的格子集合。它负责根据行列数创建格子，判断物品能否放进这些格子，以及把物品显示在格子里。
 *
 * 目前已经做了：
 * 保存 ItemCategory，说明这个网格负责哪个分类
 * 通过 Rows / Columns / TileSize 控制格子数量和尺寸
 * ConstructGrid 根据行列创建 UInv_GridSlot
 * 给每个格子设置 TileIndex
 * 把格子添加到 CanvasPanel 并设置大小/位置
 * 把生成出的格子保存到 GridSlots，方便后续查询
 *
 * 还没有负责：
 * 判断某个物品能否放进这些格子
 * 保存格子占用状态
 * 把 UInv_BagItem 显示成物品图标
 * 显示数量、品质边框、悬停提示
 * 拖拽、放置、交换、堆叠
 */
UCLASS()
class BAGSYSTEM_API UInv_BagGrid : public UUserWidget
{
	GENERATED_BODY()
public:
	// UUserWidget 初始化回调。这里用于在控件创建后生成网格。
	virtual void NativeOnInitialized() override;//特殊的初始化函数
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	// 返回该网格负责显示的物品分类，例如装备、消耗品或材料。
	EInv_ItemCategory GetItemCategory() const { return ItemCategory; }
	FInv_SlotAvailabilityResult HasRoomForItem(const UInv_ItemComponent* ItemComponent);
	void ShowCursor();
	void HideCursor();


	UFUNCTION()
	void AddItem(UInv_BagItem* Item);
	
private:
	TWeakObjectPtr<UInv_BagComponent> BagComponent;

	// 按 Rows * Columns 创建所有格子，并把它们摆放到 CanvasPanel 上。
	void ConstructGrid();
	FInv_SlotAvailabilityResult HasRoomForItem(const UInv_BagItem* Item);
	FInv_SlotAvailabilityResult HasRoomForItem(const FInv_ItemManifest& Manifest);

	//喜欢封装哈哈，AddItem里层层封装的函数，把物品添加到对应格子里
	void AddItemToIndices(const FInv_SlotAvailabilityResult& Result, UInv_BagItem* NewItem);
	void AddItemAtIndex(UInv_BagItem* Item, const int32 Index, const bool bStackable, const int32 StackAmount);
	FVector2D GetDrawSize(const FInv_GridFragment* GridFragment) const;
	void SetSlottedItemImage(const UInv_SlottedItem* SlottedItem, const FInv_GridFragment* GridFragment, const FInv_ImageFragment* ImageFragment) const;
	UInv_SlottedItem* CreateSlottedItem(UInv_BagItem* Item,
		const bool bStackable,
		const int32 StackAmount,
		const FInv_GridFragment* GridFragment,
		const FInv_ImageFragment* ImageFragment,
		const int32 Index);
	void AddSlottedItemToCanvas(const int32 Index, const FInv_GridFragment* GridFragment, UInv_SlottedItem* SlottedItem) const;
	

	void UpdateGridSlots(UInv_BagItem* NewItem, const int32 Index, bool bStackableItem, const int32 StackAmount);
	bool IsIndexClaimed(const TSet<int32>& CheckedIndices, const int32 Index) const;
	bool HasRoomAtIndex(const UInv_GridSlot* GridSlot,
		const FIntPoint& Dimensions,
		const TSet<int32>& CheckedIndices,
		TSet<int32>& OutTentativelyClaimed,
		const FGameplayTag& ItemType,
		const int32 MaxStackSize);
	bool CheckSlotConstraints(const UInv_GridSlot* GridSlot,
		const UInv_GridSlot* SubGridSlot,
		const TSet<int32>& CheckedIndices,
		TSet<int32>& OutTentativelyClaimed,
		const FGameplayTag& ItemType,
		const int32 MaxStackSize) const;
	FIntPoint GetItemDimensions(const FInv_ItemManifest& Manifest) const;


	
	// 这个背包是装备还是消耗品还是材料背包
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"),  Category = "Inventory")
	EInv_ItemCategory ItemCategory;
	bool MatchesCategory(const UInv_BagItem* Item) const;
	bool HasValidItem(const UInv_GridSlot* GridSlot) const;
	bool IsUpperLeftSlot(const UInv_GridSlot* GridSlot, const UInv_GridSlot* SubGridSlot) const;
	bool DoesItemTypeMatch(const UInv_BagItem* SubItem, const FGameplayTag& ItemType) const;
	bool IsInGridBounds(const int32 StartIndex, const FIntPoint& ItemDimensions) const;
	int32 DetermineFillAmountForSlot(const bool bStackable, const int32 MaxStackSize, const int32 AmountToFill, const UInv_GridSlot* GridSlot) const;
	int32 GetStackAmount(const UInv_GridSlot* GridSlot) const;

	UFUNCTION()
	void AddStacks(const FInv_SlotAvailabilityResult& Result);

	// SlottedItem 点击事件：处理已经放入背包的物品。
	UFUNCTION()
	void OnSlottedItemClicked_ThenDoSomethingInBagGrid(int32 GridIndex, const FPointerEvent& MouseEvent);// 图标被点 处理数据
	bool IsSameStackable(const UInv_BagItem* ClickedBagItem) const;
	void SwapWithHoverItem(UInv_BagItem* ClickedBagItem, const int32 GridIndex);
	bool ShouldSwapStackCounts(const int32 RoomInClickedSlot, const int32 HoveredStackCount, const int32 MaxStackSize) const;// 点击处已满的情况
	void SwapStackCounts(const int32 ClickedStackCount, const int32 HoveredStackCount, const int32 Index);
	bool ShouldConsumeHoverItemStacks(const int32 HoveredStackCount, const int32 RoomInClickedSlot) const;// 点击处能全放下的情况
	void ConsumeHoverItemStacks(const int32 ClickedStackCount, const int32 HoveredStackCount, const int32 Index);
	bool ShouldFillInStack(const int32 RoomInClickedSlot, const int32 HoveredStackCount) const;// 点击处放不下的情况
	void FillInStack(const int32 FillAmount, const int32 Remainder, const int32 Index);

	
	void PutDownOnIndex(const int32 Index);// 将当前 HoverItem 放到指定左上角格子，并结束拖拽状态。
	
	void ClearHoverItem();// 清理鼠标上的临时物品图标及其缓存数据。
	//==========================显示隐藏背包专有鼠标=====================
	UUserWidget* GetVisibleCursorWidget();
	UUserWidget* GetHiddenCursorWidget();
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UUserWidget> VisibleCursorWidgetClass;
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UUserWidget> HiddenCursorWidgetClass;
	UPROPERTY()
	TObjectPtr<UUserWidget> VisibleCursorWidget;
	UPROPERTY()
	TObjectPtr<UUserWidget> HiddenCursorWidget;
	
	// ======================GridSlot 的三个鼠标委托的监听事件：空格子也能通过这些入口参与点击和悬停交互。======================
	UFUNCTION()
	void OnGridSlotClicked(int32 GridIndex, const FPointerEvent& MouseEvent);

	UFUNCTION()
	void OnGridSlotHovered(int32 GridIndex, const FPointerEvent& MouseEvent);

	UFUNCTION()
	void OnGridSlotUnhovered(int32 GridIndex, const FPointerEvent& MouseEvent);
	// =====================================================================================================
	bool IsRightClick(const FPointerEvent& MouseEvent) const;
	bool IsLeftClick(const FPointerEvent& MouseEvent) const;
	// =====================================================================================================
	
	void PickUpBagItem(UInv_BagItem* ClickedBagItem, const int32 GridIndex);
	void AssignHoverItem(UInv_BagItem* BagItem);										//创建悬停物品图标并绑定 BagItem
	void AssignHoverItem(UInv_BagItem* BagItem, const int32 GridIndex, const int32 PreviousGridIndex);
	void RemoveItemFromGrid(UInv_BagItem* InventoryItem, const int32 GridIndex);
	void UpdateTileParameters(const FVector2D& CanvasPosition, const FVector2D& MousePosition);//更新格子参数，主要是格子坐标和格子下标
	FIntPoint CalculateHoveredCoordinates(const FVector2D& CanvasPosition, const FVector2D& MousePosition) const;
	EInv_TileQuadrant CalculateTileQuadrant(const FVector2D& CanvasPosition, const FVector2D& MousePosition) const;
	void OnTileParametersUpdated(const FInv_TileParameters& Parameters);
	FIntPoint CalculateStartingCoordinate(const FIntPoint& Coordinate, const FIntPoint& Dimensions, const EInv_TileQuadrant Quadrant) const;
	FInv_SpaceQueryResult CheckHoverPosition(const FIntPoint& Position, const FIntPoint& Dimensions);
	// 检测鼠标是否在这一帧刚从 Canvas 内移动到 Canvas 外。
	bool CursorExitedCanvas(const FVector2D& BoundaryPos, const FVector2D& BoundarySize, const FVector2D& Location);
	void HighlightSlots(const int32 Index, const FIntPoint& Dimensions);
	void UnHighlightSlots(const int32 Index, const FIntPoint& Dimensions);
	// 将指定矩形区域根据格子状态GridSlotState切换为对应高亮状态，并记录为最新高亮区域。
	void ChangeHoverType(const int32 Index, const FIntPoint& Dimensions, EInv_GridSlotState GridSlotState);

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UInv_HoverItem> HoverItemClass;

	UPROPERTY()
	TObjectPtr<UInv_HoverItem> HoverItem;

	FInv_TileParameters TileParameters;//当前格子参数
	FInv_TileParameters LastTileParameters;//上个格子参数
	
	int32 ItemDropIndex{INDEX_NONE};//鼠标放置物品的落点（左上角下标），鼠标拖动物品时算高亮格子时记下的
	FInv_SpaceQueryResult CurrentQueryResult;//当前鼠标悬停的格子查询结果
	bool bMouseWithinCanvas;     // 鼠标这一帧是否位于 Canvas 内
	bool bLastMouseWithinCanvas; // 鼠标上一帧是否位于 Canvas 内，用于识别退出瞬间
	int32 LastHighlightedIndex;
	FIntPoint LastHighlightedDimensions;
	/*  */
	// 画布，主要是渲染格子GridSlot以及物品图标SlottedItem
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCanvasPanel> CanvasPanel;

	// 格子数组
	UPROPERTY()
	TArray<TObjectPtr<UInv_GridSlot>> GridSlots;

	// 格子模板，仅初始化格子时使用。 
	UPROPERTY(EditAnywhere, Category = "Inventory")// 编辑器中需要指定一个继承自 UInv_GridSlot 的 Widget Blueprint。
	TSubclassOf<UInv_GridSlot> GridSlotClass;
	
	//物品图标模板，决定新加入物品图标的样式。
	UPROPERTY(EditAnywhere, Category = "Inventory")//编辑器中需要指定一个继承自 UInv_SlottedItem 的 Widget Blueprint。
	TSubclassOf<UInv_SlottedItem> SlottedItemClass;
	
	UPROPERTY()
	TMap<int32, TObjectPtr<UInv_SlottedItem>> SlottedItems;//<格子号, 物品图标>。以后查询格子里是什么物品就看这个数组。

	UPROPERTY(EditAnywhere, Category = "Inventory")int32 Rows;//行数
	UPROPERTY(EditAnywhere, Category = "Inventory")int32 Columns;//列数
	UPROPERTY(EditAnywhere, Category = "Inventory")float TileSize;//格子尺寸，单位是像素

};
