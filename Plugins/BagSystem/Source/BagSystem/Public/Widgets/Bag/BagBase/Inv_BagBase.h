// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/Inv_GridTypes.h"
#include "Inv_BagBase.generated.h"

class UInv_ItemComponent;
class UInv_BagItem;
/**
 * 背包菜单 UI 的基类，给 BagComponent 持有一个统一类型。
 *
 * 目前已经做了：
 * 继承 UUserWidget
 * 作为不同背包菜单的共同父类
 * 提供虚函数 HasRoomForItem
 * 默认 HasRoomForItem 返回空结果，表示“基类自己不计算空间”
 *
 * 还没有负责：
 * 生成格子
 * 保存物品
 * 分类切换
 * 具体空间计算
 * 拖拽、使用、丢弃、刷新 UI
 */
UCLASS()
class BAGSYSTEM_API UInv_BagBase : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual FInv_SlotAvailabilityResult HasRoomForItem(UInv_ItemComponent* ItemComponent) const { return FInv_SlotAvailabilityResult(); }
	virtual void OnItemHovered(UInv_BagItem* Item) {}
	virtual void OnItemUnHovered() {}
	virtual bool HasHoverItem() const { return false; }
};
