// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/HUD/Inv_HUDWidget.h"

#include "BagManagement/Components/Inv_BagComponent.h"
#include "BagManagement/Utils/Inv_BagStatics.h"
#include "Widgets/HUD/Inv_InfoMessage.h"

void UInv_HUDWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	//userwidget库里有获取PC的方法，从PC里获取背包组件，绑定事件
	UInv_BagComponent* BagComponent = UInv_BagStatics::GetBagComponent(GetOwningPlayer());
	if (IsValid(BagComponent))
	{
		BagComponent->NoRoomInBag.AddDynamic(this, &UInv_HUDWidget::OnNoRoom);
	}
}

void UInv_HUDWidget::OnNoRoom()
{
	if (!IsValid(InfoMessage)) return;
	InfoMessage->SetMessage(FText::FromString(TEXT("No Room In Bag 空间不足")));
}
