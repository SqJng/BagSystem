// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Inv_BagStatics.generated.h"

class UInv_BagComponent;
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
};
