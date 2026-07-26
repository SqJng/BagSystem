// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Bag/BagBase/Inv_BagBase.h"
#include "Inv_SpatialBag.generated.h"

class UCanvasPanel;
class UInv_BagGrid;
class UWidgetSwitcher;
class UButton;
/**
 * 有分类页签的空间背包菜单。
 *
 * 目前已经做了：
 * 继承 UInv_BagBase
 * 绑定背包的按键，BagSystem访问背包的接口HasRoomForItem
 * 绑定三个 UInv_BagGrid
 * 点击按钮切换对应分类页
 * 禁用当前分类按钮，避免重复点击当前页
 *
 * 还没有负责：
 * 真正计算某个 ItemComponent 能否放入对应分类网格
 * 保存真实物品数据
 * 根据 FastArray 新增/删除刷新格子
 * 创建物品 UI
 * 拖拽、使用、丢弃、堆叠物品
 */
UCLASS()
class BAGSYSTEM_API UInv_SpatialBag : public UInv_BagBase
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized() override;//绑定按钮事件
	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	
	virtual FInv_SlotAvailabilityResult HasRoomForItem(UInv_ItemComponent* ItemComponent) const override;
private:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCanvasPanel> CanvasPanel;//每个背包得有个画布

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> Switcher;//切换器

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UInv_BagGrid> Grid_Equippables;//装备

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UInv_BagGrid> Grid_Consumables;//消耗物

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UInv_BagGrid> Grid_Craftables;//材料
	
// 切换背包类型按钮
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Equippables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Consumables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Craftables;
//三种分类按钮
	UFUNCTION()
	void ShowEquippables();

	UFUNCTION()
	void ShowConsumables();

	UFUNCTION()
	void ShowCraftables();
	//禁用按钮和切换页面的函数
	void DisableButton(UButton* Button);
	void SetActiveGrid(UInv_BagGrid* Grid, UButton* Button);
	TWeakObjectPtr<UInv_BagGrid> ActiveGrid;
};
