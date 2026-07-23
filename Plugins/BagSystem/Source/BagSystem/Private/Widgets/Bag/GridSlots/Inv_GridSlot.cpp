

#include "Widgets/Bag/GridSlots/Inv_GridSlot.h"

#include "Components/Image.h"
#include "Items/Inv_BagItem.h"

void UInv_GridSlot::NativeOnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	Super::NativeOnMouseEnter(MyGeometry, MouseEvent);
	// 自己不修改背包数据，只把当前格子下标和鼠标事件通知给 BagGrid。
	GridSlotHovered.Broadcast(TileIndex, MouseEvent);
}

void UInv_GridSlot::NativeOnMouseLeave(const FPointerEvent& MouseEvent)
{
	Super::NativeOnMouseLeave(MouseEvent);
	// BagGrid 收到通知后，可根据格子是否为空恢复对应背景纹理。
	GridSlotUnhovered.Broadcast(TileIndex, MouseEvent);
}

FReply UInv_GridSlot::NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	// 点击空格子时没有 SlottedItem 可以接收事件，因此必须由 GridSlot 自己广播。
	GridSlotClicked.Broadcast(TileIndex, MouseEvent);
	// 表示本控件已经处理本次点击，防止事件继续向父控件冒泡。
	return FReply::Handled();
}

void UInv_GridSlot::SetBagItem(UInv_BagItem* Item)
{
	BagItem = Item;
}

void UInv_GridSlot::SetOccupiedTexture()
{
	GridSlotState = EInv_GridSlotState::Occupied;
	Image_GridSlot->SetBrush(Brush_Occupied);
}

void UInv_GridSlot::SetUnoccupiedTexture()
{
	GridSlotState = EInv_GridSlotState::Unoccupied;
	Image_GridSlot->SetBrush(Brush_Unoccupied);
}

void UInv_GridSlot::SetSelectedTexture()
{
	GridSlotState = EInv_GridSlotState::Selected;
	Image_GridSlot->SetBrush(Brush_Selected);
}

void UInv_GridSlot::SetGrayedOutTexture()
{
	GridSlotState = EInv_GridSlotState::GrayedOut;
	Image_GridSlot->SetBrush(Brush_GrayedOut);
}














