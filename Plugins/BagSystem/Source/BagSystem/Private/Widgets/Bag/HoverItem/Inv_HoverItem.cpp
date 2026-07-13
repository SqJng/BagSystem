// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/HoverItem/Inv_HoverItem.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Items/Inv_BagItem.h"

void UInv_HoverItem::SetImageBrush(const FSlateBrush& Brush) const
{
	Image_Icon->SetBrush(Brush);
}

void UInv_HoverItem::UpdateStackCount(const int32 Count) const
{
	if (Count > 0)
	{
		Text_StackCount->SetText(FText::AsNumber(Count));
		Text_StackCount->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		Text_StackCount->SetVisibility(ESlateVisibility::Collapsed);
	}
}

FGameplayTag UInv_HoverItem::GetItemType() const
{
	if (BagItem.IsValid())
	{
		return BagItem->GetItemManifest().GetItemType();
	}
	return FGameplayTag();
}

void UInv_HoverItem::SetIsStackable(bool bStacks)
{
	bIsStackable = bStacks;
	if (!bStacks)
	{
		Text_StackCount->SetVisibility(ESlateVisibility::Collapsed);
	}
}

UInv_BagItem* UInv_HoverItem::GetBagItem() const
{
	return BagItem.Get();
}

void UInv_HoverItem::SetBagItem(UInv_BagItem* Item)
{
	BagItem = Item;
}