 // Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_SpatialBag.h"

#include "BagManagement/Utils/Inv_BagStatics.h"
#include "Components/Button.h"
#include "BagSystem.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/Bag/Spatial/Inv_BagGrid.h"


 void UInv_SpatialBag::NativeOnInitialized()
 {
 	Super::NativeOnInitialized();
	//绑定按钮事件
 	Button_Equippables->OnClicked.AddDynamic(this, &ThisClass::ShowEquippables);
 	Button_Consumables->OnClicked.AddDynamic(this, &ThisClass::ShowConsumables);
 	Button_Craftables->OnClicked.AddDynamic(this, &ThisClass::ShowCraftables);

 	Grid_Equippables->SetOwningCanvas(CanvasPanel);
 	Grid_Consumables->SetOwningCanvas(CanvasPanel);
 	Grid_Craftables->SetOwningCanvas(CanvasPanel);

 	ShowConsumables();
 }

 FReply UInv_SpatialBag::NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
 {
 	ActiveGrid->DropItem();
 	return FReply::Handled();//返回鼠标事件已结束
 }

 FInv_SlotAvailabilityResult UInv_SpatialBag::HasRoomForItem(UInv_ItemComponent* ItemComponent) const
 {
 	switch (UInv_BagStatics::GetItemCategoryFromItemComp(ItemComponent))
 	{
 	case EInv_ItemCategory::Equippable:
 		return Grid_Equippables->HasRoomForItem(ItemComponent);
 	case EInv_ItemCategory::Consumable:
 		return Grid_Consumables->HasRoomForItem(ItemComponent);
 	case EInv_ItemCategory::Craftable:
 		return Grid_Craftables->HasRoomForItem(ItemComponent);
 	default:
 		UE_LOG(BagSystem, Error, TEXT("物品没有匹配的类别."))
 		return FInv_SlotAvailabilityResult();
 	}
 }

 void UInv_SpatialBag::ShowEquippables()
 {
	SetActiveGrid(Grid_Equippables, Button_Equippables);//传入要显示的格子和对应的按钮
 }

 void UInv_SpatialBag::ShowConsumables()
 {
	SetActiveGrid(Grid_Consumables, Button_Consumables);
 }

 void UInv_SpatialBag::ShowCraftables()
 {
	SetActiveGrid(Grid_Craftables, Button_Craftables);
 }

 void UInv_SpatialBag::DisableButton(UButton* Button)//禁用选中的按钮
 {
 	Button_Equippables->SetIsEnabled(true);
 	Button_Consumables->SetIsEnabled(true);
 	Button_Craftables->SetIsEnabled(true);
 	Button->SetIsEnabled(false);
 }

 void UInv_SpatialBag::SetActiveGrid(UInv_BagGrid* Grid, UButton* Button)
 {
 	//if (ActiveGrid.IsValid()) ActiveGrid->HideCursor();
 	ActiveGrid = Grid;
 	if (ActiveGrid.IsValid()) ActiveGrid->ShowCursor();
 	DisableButton(Button);
 	Switcher->SetActiveWidget(Grid);
 }
