// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/Inv_GridTypes.h"

#include "Inv_BagGrid.generated.h"


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
	
	// 返回该网格负责显示的物品分类，例如装备、消耗品或材料。
	EInv_ItemCategory GetItemCategory() const { return ItemCategory; }
	FInv_SlotAvailabilityResult HasRoomForItem(const UInv_ItemComponent* ItemComponent);


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
	// 这个背包是装备还是消耗品还是材料背包
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"),  Category = "Inventory")
	EInv_ItemCategory ItemCategory;
	bool MatchesCategory(const UInv_BagItem* Item) const;


	
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
