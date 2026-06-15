// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_GridSlot.generated.h"

class UImage;
/**
 * 背包里的单个格子控件。
 *
 * 目前已经做了：
 * 保存 TileIndex
 * 提供 SetTileIndex / GetTileIndex
 * 绑定 Image_GridSlot 显示格子背景
 *
 * 还没有负责：
 * 保存 UInv_BagItem
 * 显示物品图标
 * 显示数量和品质边框
 * 点击、拖拽、悬停提示
 * 判断格子是否被占用
 */
UCLASS()
class BAGSYSTEM_API UInv_GridSlot : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetTileIndex(int32 Index) { TileIndex = Index; }
	int32 GetTileIndex() const { return TileIndex; }
	
private:
	int32 TileIndex;//格子号，0开始
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_GridSlot;
};
