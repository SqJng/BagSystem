// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Components/Inv_ItemComponent.h"


UInv_ItemComponent::UInv_ItemComponent() 
{
	PrimaryComponentTick.bCanEverTick = false;
	PickupMessage = FString("E - ItemComponent的默认拾取提示");
}

void UInv_ItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

