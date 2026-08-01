// Fill out your copyright notice in the Description page of Project Settings.


#include "BagManagement/Utils/Inv_BagStatics.h"

#include "BagManagement/Components/Inv_BagComponent.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Types/Inv_GridTypes.h"
#include "Widgets/Bag/BagBase/Inv_BagBase.h"

UInv_BagComponent* UInv_BagStatics::GetBagComponent(const APlayerController* PlayerController)
{
	if (!IsValid(PlayerController)) return nullptr;
	UInv_BagComponent* BagComponent = PlayerController->FindComponentByClass<UInv_BagComponent>();
	return BagComponent;
}
//返回物品分类
EInv_ItemCategory UInv_BagStatics::GetItemCategoryFromItemComp(UInv_ItemComponent* ItemComp)
{
	if (!IsValid(ItemComp)) return EInv_ItemCategory::None;
	return ItemComp->GetItemManifest().GetItemCategory();
}

void UInv_BagStatics::ItemHovered(APlayerController* PC, UInv_BagItem* Item)
{
	UInv_BagComponent* BC = GetBagComponent(PC);
	if (!IsValid(BC)) return;

	UInv_BagBase* BagBase = BC->GetBagMenu();
	if (!IsValid(BagBase)) return;

	if (BagBase->HasHoverItem()) return;

	BagBase->OnItemHovered(Item);
}

void UInv_BagStatics::ItemUnhovered(APlayerController* PC)
{
	UInv_BagComponent* BC = GetBagComponent(PC);
	if (!IsValid(BC)) return;

	UInv_BagBase* BagBase = BC->GetBagMenu();
	if (!IsValid(BagBase)) return;

	BagBase->OnItemUnHovered();
}
