
#include "Items/Manifest/Inv_ItemManifest.h"

#include "Items/Inv_BagItem.h"
#include "Items/Components/Inv_ItemComponent.h"

UInv_BagItem* FInv_ItemManifest::Manifest(UObject* NewOuter)
{
	UInv_BagItem* Item = NewObject<UInv_BagItem>(NewOuter, UInv_BagItem::StaticClass());//相当于把newouter转换成UInv_BagItem的子类，创建一个UInv_BagItem对象
	Item->SetItemManifest(*this);

	return Item;
}

void FInv_ItemManifest::SpawnPickupActor(const UObject* WorldContextObject, const FVector& SpawnLocation, const FRotator& SpawnRotation)
{
	if (!IsValid(PickupActorClass) || !IsValid(WorldContextObject)) return;

	AActor* SpawnedActor = WorldContextObject->GetWorld()->SpawnActor<AActor>(PickupActorClass, SpawnLocation, SpawnRotation);
	if (!IsValid(SpawnedActor)) return;

	// 进一步确认是可被拾取的Actor
	UInv_ItemComponent* ItemComp = SpawnedActor->FindComponentByClass<UInv_ItemComponent>();
	check(ItemComp);

	ItemComp->InitItemManifest(*this);
}
