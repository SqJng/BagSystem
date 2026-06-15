// Fill out your copyright notice in the Description page of Project Settings.


#include "BagManagement/Utils/Inv_BagStatics.h"

#include "BagManagement/Components/Inv_BagComponent.h"

UInv_BagComponent* UInv_BagStatics::GetBagComponent(const APlayerController* PlayerController)
{
	if (!IsValid(PlayerController)) return nullptr;
	UInv_BagComponent* BagComponent = PlayerController->FindComponentByClass<UInv_BagComponent>();
	return BagComponent;
}
