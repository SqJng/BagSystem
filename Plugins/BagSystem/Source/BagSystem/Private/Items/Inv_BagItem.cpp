// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Inv_BagItem.h"

#include "Items/Fragments/Inv_ItemFragment.h"
#include "Net/UnrealNetwork.h"

void UInv_BagItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
//Object本身不自动复制，但如果以后这个对象参与复制时，请把 ItemManifest 纳入复制检查。
	DOREPLIFETIME(ThisClass, ItemManifest);//ThisClass里的 ItemManifest 属性要跟着复制
	DOREPLIFETIME(ThisClass, TotalStackCount);
}

void UInv_BagItem::SetItemManifest(const FInv_ItemManifest& Manifest)//在ItemManifest里调用初始化
{
	ItemManifest = FInstancedStruct::Make<FInv_ItemManifest>(Manifest);
	
}

bool UInv_BagItem::IsStackable() const
{
	const FInv_StackableFragment* Stackable = GetItemManifest().GetFragmentOfType<FInv_StackableFragment>();
	return Stackable != nullptr;
}

bool UInv_BagItem::IsConsumable() const
{
	return GetItemManifest().GetItemCategory() == EInv_ItemCategory::Consumable;
}
