// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inv_Highlightable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UInv_Highlightable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 可高亮物体接口。
 *
 * 目前已经做了：
 * 声明 Highlight
 * 声明 UnHighlight
 * 让 PlayerController 不需要知道具体组件类型，也能调用高亮/取消高亮
 *
 * 还没有负责：
 * 保存高亮材质
 * 决定具体高亮效果
 * 拾取物品
 * 背包数据
 * UI 提示
 */
class BAGSYSTEM_API IInv_Highlightable
{
	GENERATED_BODY()

public:
	//蓝图原生事件，C++和蓝图都可以实现，蓝图优先
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void Highlight();

	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void UnHighlight();
};
