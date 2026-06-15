
#include "Items/Manifest/Inv_ItemManifest.h"

#include "Items/Inv_BagItem.h"

UInv_BagItem* FInv_ItemManifest::Manifest(UObject* NewOuter)
{
	UInv_BagItem* Item = NewObject<UInv_BagItem>(NewOuter, UInv_BagItem::StaticClass());//相当于把newouter转换成UInv_BagItem的子类，创建一个UInv_BagItem对象
	Item->SetItemManifest(*this);

	return Item;
}