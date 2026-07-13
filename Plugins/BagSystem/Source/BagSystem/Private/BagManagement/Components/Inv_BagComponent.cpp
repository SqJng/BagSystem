// Fill out your copyright notice in the Description page of Project Settings.


#include "BagManagement/Components/Inv_BagComponent.h"

#include "Items/Inv_BagItem.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Widgets/Bag/BagBase/Inv_BagBase.h"
#include "Items/Fragments/Inv_ItemFragment.h"

struct FInv_StackableFragment;
UInv_BagComponent::UInv_BagComponent() : BagList(this)
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);//开启复制
	bReplicateUsingRegisteredSubObjectList = true;//开启子对象复制列表
	bBagMenuOpen = false;
}
//BC复制时会看自己哪些属性要复制
void UInv_BagComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, BagList);//标记 BagList 这个 FInv_BagFastArray 需要复制，复制时会调用它的 NetDeltaSerialize 函数来序列化它里面的 Entries 数组和每个 Entry 里的 Item 指针
}
//由PC按拾取键触发
void UInv_BagComponent::TryAddItem(UInv_ItemComponent* ItemComponent)
{
	FInv_SlotAvailabilityResult Result = BagMenu->HasRoomForItem(ItemComponent);

	UInv_BagItem* FoundItem = BagList.FindFirstItemByType(ItemComponent->GetItemManifest().GetItemType());
	Result.Item = FoundItem;

	if (Result.TotalRoomToFill == 0)
	{
		NoRoomInBag.Broadcast();
		return;
	}
	
	if (Result.Item.IsValid() && Result.bStackable)//添加可堆叠的旧物品
	{
		OnStackChange.Broadcast(Result);																//广播告诉客户端的BagGrid，加了堆叠物
		Server_AddStacksToItem(ItemComponent, Result.TotalRoomToFill, Result.Remainder);		//服务器逻辑
	}
	else if (Result.TotalRoomToFill > 0)//添加新物品或不可堆叠物
	{
		Server_AddNewItem(ItemComponent, Result.bStackable ? Result.TotalRoomToFill : 0);				//新物，服务器先处理逻辑，在里面广播给客户端的BagGrid刷新UI
	}
	
	ItemComponent->PickedUp();
}
//逻辑是：服务器收到请求后，先在 BagList 里找这个物品，如果找到了就加堆叠数，如果没找到就新增一个条目。新增条目时会调用 FInv_BagFastArray::AddEntry()，它会把新条目里的 Item 注册到背包组件的复制列表里，这样客户端才能收到变化并刷新 UI。

void UInv_BagComponent::Server_AddStacksToItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder)
{
//验证地上的物品可以放入背包（是否已加入FastArray）
	const FGameplayTag& ItemType = IsValid(ItemComponent) ? ItemComponent->GetItemManifest().GetItemType() : FGameplayTag::EmptyTag;
	UInv_BagItem* Item = BagList.FindFirstItemByType(ItemType);
	if (!IsValid(Item)) return;

	Item->SetTotalStackCount(Item->GetTotalStackCount() + StackCount);//服务器获取当前的再加上新增的，好麻烦
//如果数量没有多
	if (Remainder == 0)
	{
		ItemComponent->PickedUp();
	}
	else if (FInv_StackableFragment* StackableFragment = ItemComponent->GetItemManifest().GetFragmentOfTypeMutable<FInv_StackableFragment>())
	{
		StackableFragment->SetStackCount(Remainder);
	}
}

void UInv_BagComponent::Server_AddNewItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount)//
{
//新增物加到服务器快速数组里
	UInv_BagItem* NewItem = BagList.AddEntry(ItemComponent);//服务器添加
	NewItem->SetTotalStackCount(StackCount);
//广播给客户端添加	
	if (GetOwner()->GetNetMode() == NM_ListenServer || GetOwner()->GetNetMode() == NM_Standalone)
	{
		OnItemAdded.Broadcast(NewItem);//传到
	}
}
//UObject不自带复制，所以写一个函数来把一些Object对象注册到背包组件的复制列表里，这样它们就能随着背包组件一起被复制了，客户端才能收到这些物品的变化并刷新UI
void UInv_BagComponent::AddRepSubObj(UObject* SubObj)
{
	if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && IsValid(SubObj))
	{
		AddReplicatedSubObject(SubObj);//AddReplicatedSubObject可以直接指定一个Obj注册复制，Obj可以不是BC的成员。不过这个对象在BagList里，移除这个BagItem时要注销复制
	}
}

void UInv_BagComponent::BeginPlay()
{
	Super::BeginPlay();

	ConstructBag();
	
}
//背包界面相关
void UInv_BagComponent::ConstructBag()
{
	//取玩家PC弱指针
	OwningController = Cast<APlayerController>(GetOwner());
	checkf(OwningController.IsValid(), TEXT("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx 背包组件没找到PC.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"))
	if (!OwningController->IsLocalController()) return;
	//创建背包
	BagMenu = CreateWidget<UInv_BagBase>(OwningController.Get(), BagMenuClass);
	BagMenu->AddToViewport();
	CloseBagMenu();
}

void UInv_BagComponent::OpenBagMenu()
{
	if(!IsValid(BagMenu)) return;
	BagMenu->SetVisibility(ESlateVisibility::Visible);
	bBagMenuOpen=true;
	
	if (!OwningController.IsValid()) return;

	FInputModeGameAndUI InputMode;
	OwningController->SetInputMode(InputMode);
	OwningController->SetShowMouseCursor(true);
}

void UInv_BagComponent::CloseBagMenu()
{
	if (!IsValid(BagMenu)) return;
	BagMenu->SetVisibility(ESlateVisibility::Collapsed);
	bBagMenuOpen=false;

	if(!OwningController.IsValid())return;
	
	FInputModeGameOnly InputMode;
	OwningController->SetInputMode(InputMode);
	OwningController->SetShowMouseCursor(false);
}

void UInv_BagComponent::ToggleBagMenu()
{
	if (bBagMenuOpen) CloseBagMenu();
	else OpenBagMenu();
}


