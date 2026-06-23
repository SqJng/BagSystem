// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Inv_WidgetUtils.generated.h"

/**
 * 背包 UI 的小工具函数库。
 *
 * 目前已经做了：
 * GetIndexFromPosition
 * 把二维格子坐标 Position(X, Y) 转成一维数组下标
 * 当前公式是 X + Y * Columns
 *
 * 还没有负责：
 * 把下标转回二维坐标
 * 拖拽时的格子换算
 * 格子范围判断
 * 格子碰撞/占用检测
 */
UCLASS()
class BAGSYSTEM_API UInv_WidgetUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	static int32 GetIndexFromPosition(const FIntPoint& Position, const int32 Columns);
	//01在右，10在下，返回格子坐标
	static FIntPoint GetPositionFromIndex(const int32 Index, const int32 Columns);
};
