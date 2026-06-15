// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_BagGrid.h"

#include "BagManagement/Components/Inv_BagComponent.h"
#include "BagManagement/Utils/Inv_BagStatics.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Items/Inv_BagItem.h"
#include "Widgets/Bag//GridSlots/Inv_GridSlot.h"
#include "Widgets/Utils/Inv_WidgetUtils.h"

void UInv_BagGrid::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	ConstructGrid();
	BagComponent = UInv_BagStatics::GetBagComponent(GetOwningPlayer());
	BagComponent->OnItemAdded.AddDynamic(this, &ThisClass::AddItem);
}

void UInv_BagGrid::AddItem(UInv_BagItem* Item)
{
	if (!MatchesCategory(Item)) return;//不是这个仓库的不要

	UE_LOG(LogTemp, Warning, TEXT("====================InventoryGrid::AddItem"));
}

void UInv_BagGrid::ConstructGrid()
{
	GridSlots.Reserve(Rows * Columns);// 预先分配数组容量，避免逐个添加格子时频繁重新分配内存。

	for (int32 j = 0; j < Rows; ++j)
	{
		for (int32 i = 0; i < Columns; ++i)
		{// 创建一个格子控件，并把它添加到 画布中，格子就是画布的子控件，设置每个格子的大小，会在画布中自动绘制
			UInv_GridSlot* GridSlot = CreateWidget<UInv_GridSlot>(this, GridSlotClass);

			const FIntPoint TilePosition(i, j);// i j存进去{i，j}，没必要这样写
			GridSlot->SetTileIndex(UInv_WidgetUtils::GetIndexFromPosition(TilePosition, Columns));//给当前格子设置格子号
			GridSlots.Add(GridSlot);//以后去GridSlots里查询格子

			// 画布格子需要用UCanvasPanelSlot来设置位置和大小
			CanvasPanel->AddChild(GridSlot);
			UCanvasPanelSlot* GridCPS = UWidgetLayoutLibrary::SlotAsCanvasSlot(GridSlot);
			GridCPS->SetSize(FVector2D(TileSize));
			GridCPS->SetPosition(TilePosition * TileSize);
		}
	}
}

bool UInv_BagGrid::MatchesCategory(const UInv_BagItem* Item) const
{
	return Item->GetItemManifest().GetItemCategory() == ItemCategory;
}
