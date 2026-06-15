// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/Inv_GridTypes.h"

#include "Inv_BagGrid.generated.h"


class UInv_BagComponent;
class UCanvasPanel;
class UInv_GridSlot;
/**
 * 单个分类页里的格子网格，例如装备页、消耗品页或材料页。
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


	UFUNCTION()
	void AddItem(UInv_BagItem* Item);
	
private:
	TWeakObjectPtr<UInv_BagComponent> BagComponent;

	// 按 Rows * Columns 创建所有格子，并把它们摆放到 CanvasPanel 上。
	void ConstructGrid();

	// 当前网格对应的物品分类，可在蓝图里配置和读取。
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"),  Category = "Inventory")
	EInv_ItemCategory ItemCategory;

	// 保存所有生成出来的格子控件，数组下标就是格子的 TileIndex。
	UPROPERTY()
	TArray<TObjectPtr<UInv_GridSlot>> GridSlots;

	// 单个格子的控件类。编辑器中需要指定一个继承自 UInv_GridSlot 的 Widget Blueprint。
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UInv_GridSlot> GridSlotClass;

	// 绑定 UMG 蓝图中的 CanvasPanel，所有格子都会作为它的子控件添加进去。
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCanvasPanel> CanvasPanel;

	UPROPERTY(EditAnywhere, Category = "Inventory")int32 Rows;
	UPROPERTY(EditAnywhere, Category = "Inventory")int32 Columns;
	UPROPERTY(EditAnywhere, Category = "Inventory")float TileSize;

	bool MatchesCategory(const UInv_BagItem* Item) const;
};
