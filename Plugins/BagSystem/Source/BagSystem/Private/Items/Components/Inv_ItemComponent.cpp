// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Components/Inv_ItemComponent.h"
#include "Net/UnrealNetwork.h"


UInv_ItemComponent::UInv_ItemComponent() 
{
	PrimaryComponentTick.bCanEverTick = false;
	PickupMessage = FString("E - ItemComponent的默认拾取提示");
	SetIsReplicatedByDefault(true);//开启复制，不然丢出去多个物品再捡起数量会变为1
}

void UInv_ItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ItemManifest)
}

void UInv_ItemComponent::InitItemManifest(const FInv_ItemManifest& CopyOfManifest)
{
	ItemManifest = CopyOfManifest;
}

void UInv_ItemComponent::PickedUp()
{
	OnPickedUp();
	GetOwner()->Destroy();
}

