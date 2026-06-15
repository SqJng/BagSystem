// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_HUDWidget.generated.h"

class UInv_InfoMessage;
/**
 * 玩家 HUD 根控件，负责把背包系统的提示显示到屏幕上。
 *
 * 目前已经做了：
 * 提供 ShowPickupMessage / HidePickupMessage 蓝图事件，用于显示拾取提示
 * 绑定 InfoMessage 子控件，用于显示临时文字消息
 * NativeOnInitialized 中通过 UInv_BagStatics 获取 BagComponent
 * 监听 BagComponent->NoRoomInBag
 * 没空间时调用 InfoMessage->SetMessage 显示“空间不足”
 *
 * 还没有负责：
 * 自己创建背包菜单
 * 自己生成背包格子
 * 自己显示物品图标/数量
 * 自己判断背包是否有空间
 */
UCLASS()
class BAGSYSTEM_API UInv_HUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeOnInitialized() override;
	//蓝图实现类，拾取提示
	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void ShowPickupMessage(const FString& Message);

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void HidePickupMessage();

private:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UInv_InfoMessage> InfoMessage;

	UFUNCTION()
	void OnNoRoom();//触发没空间的事件
};
