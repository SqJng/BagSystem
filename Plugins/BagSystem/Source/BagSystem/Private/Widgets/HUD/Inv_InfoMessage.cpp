// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/HUD/Inv_InfoMessage.h"

#include "Components/TextBlock.h"

void UInv_InfoMessage::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	Text_Message->SetText(FText::GetEmpty());//代码里默认空，蓝图里设置
	MessageHide();
}

void UInv_InfoMessage::SetMessage(const FText& Message)
{
	Text_Message->SetText(Message);

	if (!bIsMessageActive)
	{
		MessageShow();
	}
	bIsMessageActive = true;
	//如果之前的消息还在显示，因为计时器同名，所以会被覆盖掉，新的消息会重新计时
	GetWorld()->GetTimerManager().SetTimer(MessageTimer, [this]()
	{
		MessageHide();
		bIsMessageActive = false;
	}, MessageLifetime, false);//false是不循环
}