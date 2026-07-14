// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Inv_WidgetUtils.generated.h"

/**
 * 背包 UI 的小工具函数库。
 *
 * 负责控件的位置、尺寸和矩形边界判断，以及格子坐标与一维下标之间的转换。
 * 不负责格子的占用、碰撞和物品放置规则。
 */
UCLASS()
class BAGSYSTEM_API UInv_WidgetUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	// 返回控件左上角在视口中的位置，供鼠标坐标与控件边界进行比较。
	static FVector2D GetWidgetPosition(UWidget* Widget);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	// 返回Widget的本地尺寸。
	static FVector2D GetWidgetSize(UWidget* Widget);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	// 判断 MousePos 是否位于以 BoundaryPos 为左上角、WidgetSize 为尺寸的矩形内。
	static bool IsWithinBounds(const FVector2D& BoundaryPos, const FVector2D& WidgetSize, const FVector2D& MousePos);

	static int32 GetIndexFromPosition(const FIntPoint& Position, const int32 Columns);
	//01在右，10在下，返回格子坐标
	static FIntPoint GetPositionFromIndex(const int32 Index, const int32 Columns);
};
