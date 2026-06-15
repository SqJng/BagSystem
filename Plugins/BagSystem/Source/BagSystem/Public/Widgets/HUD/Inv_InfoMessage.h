// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_InfoMessage.generated.h"

class UTextBlock;
/**
 * HUD 上的临时提示消息控件，例如“空间不足”。
 *
 * 目前已经做了：
 * 绑定 Text_Message 文本控件
 * SetMessage 会设置显示文本
 * MessageShow / MessageHide 交给蓝图实现动画或显隐效果
 * 使用定时器自动隐藏消息
 * 新消息出现时会重置计时器
 *
 * 还没有负责：
 * 决定具体显示什么内容
 * 排队显示多条消息
 * 区分错误/成功/警告等样式
 * 背包格子或物品 UI 的任何逻辑
 */
UCLASS()
class BAGSYSTEM_API UInv_InfoMessage : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void MessageShow();

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void MessageHide();

	void SetMessage(const FText& Message);//设置消息文本

private:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Message;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float MessageLifetime{1.2f};//持续时间

	FTimerHandle MessageTimer;
	bool bIsMessageActive{false};//ui上正在显示就是true
};
