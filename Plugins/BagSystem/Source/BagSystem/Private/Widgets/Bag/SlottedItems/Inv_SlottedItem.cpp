// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/SlottedItems/Inv_SlottedItem.h"
#include "Items/Inv_BagItem.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"

void UInv_SlottedItem::SetBagItem(UInv_BagItem* Item)
{
	BagItem = Item;
}

void UInv_SlottedItem::SetImageBrush(const FSlateBrush& Brush) const
{
	Image_Icon->SetBrush(Brush);
}
//如果数量StackCount不等于0，就显示数量，否则隐藏数量文本框
void UInv_SlottedItem::UpdateStackCount(int32 StackCount)
{
	if (StackCount > 0)
	{
		Text_StackCount->SetVisibility(ESlateVisibility::Visible);
		Text_StackCount->SetText(FText::AsNumber(StackCount));
	}
	else
	{
		Text_StackCount->SetVisibility(ESlateVisibility::Collapsed);
	}
}