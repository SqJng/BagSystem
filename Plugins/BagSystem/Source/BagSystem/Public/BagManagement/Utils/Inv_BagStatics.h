// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/Inv_GridTypes.h"
#include "Widgets/Utils/Inv_WidgetUtils.h"
#include "Inv_BagStatics.generated.h"


/**
 * 背包系统的静态工具函数库。
 *
 * 目前已经做了：
 * 提供 GetBagComponent
 * 从 PlayerController 身上查找 UInv_BagComponent
 * 方便 HUD、蓝图或其他 UI 代码不用重复写 FindComponentByClass
 *
 * 还没有负责：
 * 创建 BagComponent
 * 保存全局背包状态
 * 查找物品、格子、分类
 * 任何网络同步逻辑
 */
UCLASS()
class BAGSYSTEM_API UInv_BagStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	static UInv_BagComponent* GetBagComponent(const APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	static EInv_ItemCategory GetItemCategoryFromItemComp(UInv_ItemComponent* ItemComp);

	template<typename T, typename FuncT>
	static void ForEach2D(TArray<T>& Array, int32 Index, const FIntPoint& Range2D, int32 GridColumns, const FuncT& Function);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	static void ItemHovered(APlayerController* PC, UInv_BagItem* Item);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	static void ItemUnhovered(APlayerController* PC);
};
/**
 *传入函数指针Function，遍历以Index为起点，Range2D为范围的格子，执行Function函数。Array是格子数组，GridColumns是网格列数，用来计算格子坐标和格子号
 *
 * 把BagItem的物品图标占用的格子都设置已占用
 */
template<typename T, typename FuncT>
void UInv_BagStatics::ForEach2D(TArray<T>& Array, int32 Index, const FIntPoint& Range2D, int32 GridColumns, const FuncT& Function)
{
	for (int32 j = 0; j < Range2D.Y; ++j)
	{
		for (int32 i = 0; i < Range2D.X; ++i)
		{//起始下标转二维坐标+j,i，再转回下标，拿到格子对象Array[TileIndex]，执行Function函数
			const FIntPoint Coordinates = UInv_WidgetUtils::GetPositionFromIndex(Index, GridColumns) + FIntPoint(i, j);
			const int32 TileIndex = UInv_WidgetUtils::GetIndexFromPosition(Coordinates, GridColumns);
			if (Array.IsValidIndex(TileIndex))
			{
				Function(Array[TileIndex]);//Array[TileIndex]是格子对象
			}
		}
	}
}
