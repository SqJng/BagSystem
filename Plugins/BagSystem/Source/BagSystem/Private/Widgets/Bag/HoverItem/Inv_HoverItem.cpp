// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/HoverItem/Inv_HoverItem.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Items/Inv_BagItem.h"

void UInv_HoverItem::SetImageBrush(const FSlateBrush& Brush) const
{
	Image_Icon->SetBrush(Brush);
}

void UInv_HoverItem::UpdateStackCount(const int32 Count)
{//创建、销毁光标时调用
	// 同时保存数据和刷新界面；后续 PutDownOnIndex 会从这里读取最终堆叠数量。
	StackCount = Count;
	if (Count > 0)
	{
		// 数量大于 0 才显示右下角数字，不可堆叠物品会隐藏该文本。
		Text_StackCount->SetText(FText::AsNumber(Count));
		Text_StackCount->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		// 清零时折叠文本，避免空的数量标签占用视觉空间。
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
