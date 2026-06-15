 // Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_SpatialBag.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/Bag/Spatial/Inv_BagGrid.h"

 void UInv_SpatialBag::NativeOnInitialized()
 {
 	Super::NativeOnInitialized();
	//绑定按钮事件
 	Button_Equippables->OnClicked.AddDynamic(this, &ThisClass::ShowEquippables);
 	Button_Consumables->OnClicked.AddDynamic(this, &ThisClass::ShowConsumables);
 	Button_Craftables->OnClicked.AddDynamic(this, &ThisClass::ShowCraftables);

 	ShowEquippables();
 }

 FInv_SlotAvailabilityResult UInv_SpatialBag::HasRoomForItem(UInv_ItemComponent* ItemComponent) const
 {
 	FInv_SlotAvailabilityResult Result;
 	Result.TotalRoomToFill = 1;
 	return Result;
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
 	DisableButton(Button);
 	Switcher->SetActiveWidget(Grid);
 }
