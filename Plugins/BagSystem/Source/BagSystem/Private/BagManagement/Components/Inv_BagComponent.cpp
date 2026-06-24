// Fill out your copyright notice in the Description page of Project Settings.


#include "BagManagement/Components/Inv_BagComponent.h"

#include "Items/Inv_BagItem.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Widgets/Bag/BagBase/Inv_BagBase.h"

// Sets default values for this component's properties
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
		Server_AddStacksToItem(ItemComponent, Result.TotalRoomToFill, Result.Remainder);
	}
	else if (Result.TotalRoomToFill > 0)//添加新物品或不可堆叠物
	{//如果这个物品可叠加了但背包里没有了，那就传 TotalRoomToFill 让服务器先堆叠一下再新增；如果这个物品不可叠加了或者背包里根本没有了，那就直接传 0 让服务器新增
		Server_AddNewItem(ItemComponent, Result.bStackable ? Result.TotalRoomToFill : 0);
	}
}

void UInv_BagComponent::Server_AddStacksToItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount,
	int32 Remainder)
{
}

void UInv_BagComponent::Server_AddNewItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount)//
{
	UInv_BagItem* NewItem = BagList.AddEntry(ItemComponent);//服务器添加
	//接着广播给客户端添加
	if (GetOwner()->GetNetMode() == NM_ListenServer || GetOwner()->GetNetMode() == NM_Standalone)
	{
		OnItemAdded.Broadcast(NewItem);
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


