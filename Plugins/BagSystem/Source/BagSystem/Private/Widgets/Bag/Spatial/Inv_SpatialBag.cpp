 // Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Bag/Spatial/Inv_SpatialBag.h"

#include "BagManagement/Utils/Inv_BagStatics.h"
#include "Components/Button.h"
#include "BagSystem.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/Bag/Spatial/Inv_BagGrid.h"
#include "Components/CanvasPanel.h"
#include "Widgets/ItemDescription/Inv_ItemDescription.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanelSlot.h"

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

 void UInv_SpatialBag::OnItemHovered(UInv_BagItem* Item)
 {
 	UInv_ItemDescription* DescriptionWidget = GetItemDescription();
 	DescriptionWidget->SetVisibility(ESlateVisibility::Collapsed);

 	GetOwningPlayer()->GetWorldTimerManager().ClearTimer(DescriptionTimer);

 	FTimerDelegate DescriptionTimerDelegate;
 	//创建定时器委托
 	DescriptionTimerDelegate.BindLambda([this]()
	 {
		 GetItemDescription()->SetVisibility(ESlateVisibility::HitTestInvisible);//可见但不参与鼠标事件
	 });
	//启用定时器
 	GetOwningPlayer()->GetWorldTimerManager().SetTimer(DescriptionTimer, DescriptionTimerDelegate, DescriptionTimerDelay, false);
 }

 void UInv_SpatialBag::OnItemUnHovered()
 {
 	GetItemDescription()->SetVisibility(ESlateVisibility::Collapsed);
 	GetOwningPlayer()->GetWorldTimerManager().ClearTimer(DescriptionTimer);
 }

 bool UInv_SpatialBag::HasHoverItem() const
 {
 	if (Grid_Equippables->HasHoverItem()) return true;
 	if (Grid_Consumables->HasHoverItem()) return true;
 	if (Grid_Craftables->HasHoverItem()) return true;
 	return false;
 }

 UInv_ItemDescription* UInv_SpatialBag::GetItemDescription()
 {
 	if (!IsValid(ItemDescription))
 	{
 		ItemDescription = CreateWidget<UInv_ItemDescription>(GetOwningPlayer(), ItemDescriptionClass);
 		CanvasPanel->AddChild(ItemDescription);

 		// 只设置一次：锚定 Canvas 右侧中央（前提：CanvasPanel 铺满整个游戏窗口）
 		if (UCanvasPanelSlot* CanvasSlot = UWidgetLayoutLibrary::SlotAsCanvasSlot(ItemDescription))
 		{
 			CanvasSlot->SetAnchors(FAnchors(1.f, 0.5f));	// 锚点：画布右侧中央
 			CanvasSlot->SetAlignment(FVector2D(1.f, 0.5f));	// 对齐：面板自身右侧中央
 			CanvasSlot->SetPosition(FVector2D(-20.f, 0.f));	// 距右边缘 20
 			CanvasSlot->SetAutoSize(true);					// 尺寸跟随内容，不用每帧 SetSize
 		}
 	}
 	return ItemDescription;
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