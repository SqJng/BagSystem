
#include "BagManagement/FastArray/Inv_FastArray.h"

#include "BagManagement/Components/Inv_BagComponent.h"
#include "Items/Inv_BagItem.h"
#include "Items/Components/Inv_ItemComponent.h"

TArray<UInv_BagItem*> FInv_BagFastArray::GetAllItems() const
{
	
	TArray<UInv_BagItem*> Results;
	Results.Reserve(Entries.Num());
	for (const auto& Entry : Entries)
	{
		if (!IsValid(Entry.Item)) continue;
		Results.Add(Entry.Item);
	}
	return Results;
}

void FInv_BagFastArray::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	UInv_BagComponent* IC = Cast<UInv_BagComponent>(OwnerComponent);
	if (!IsValid(IC)) return;
	//对每个即将删除的物品广播 OnItemRemoved
	for (int32 Index : RemovedIndices)
	{
		IC->OnItemRemoved.Broadcast(Entries[Index].Item);
	}
}
//FastArray加入新条目自动触发 广播给BagGrid
void FInv_BagFastArray::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{//服务器调用 AddEntry() 后会 MarkItemDirty()，客户端监听到变化后会调用这个回调函数，AddedIndices 就是新增条目的下标，我们可以通过下标找到新增的条目，进而找到新增的物品 Item，然后广播 OnItemAdded 事件，UI 刷新显示新物品
	UInv_BagComponent* IC = Cast<UInv_BagComponent>(OwnerComponent);
	if (!IsValid(IC)) return;
	//对每个新增的物品广播 OnItemAdded
	for (int32 Index : AddedIndices)
	{
		IC->OnItemAdded.Broadcast(Entries[Index].Item);//执行BC的广播事件，触发BaGrid的 UI 刷新显示新物品
	}
}
//服务器用的
UInv_BagItem* FInv_BagFastArray::AddEntry(UInv_ItemComponent* ItemComponent)
{
	check(OwnerComponent);
	AActor* OwningActor = OwnerComponent->GetOwner();
	check(OwningActor->HasAuthority());//服务器才能调用这个函数
	UInv_BagComponent* IC = Cast<UInv_BagComponent>(OwnerComponent);
	if (!IsValid(IC)) return nullptr;

	FInv_BagEntry& NewEntry = Entries.AddDefaulted_GetRef();//在BagList末尾添加新元素，可能会重新分配整个数组的内存以适配空间
	NewEntry.Item = ItemComponent->GetItemManifest().Manifest(OwningActor);//manifest()返回加好载 ItemManifest 的 UInv_BagItem 对象，作为新条目的 Item

	IC->AddRepSubObj(NewEntry.Item);//给这个Object对象注册到BC的复制列表
	MarkItemDirty(NewEntry);//如果对数组中的元素进行新增或修改操作，就必须调用该方法
	//客户端收到变化后，UE 会调用 FastArray 的回调：PostReplicatedAdd()
	return NewEntry.Item;
}

UInv_BagItem* FInv_BagFastArray::AddEntry(UInv_BagItem* Item)
{
	
	check(OwnerComponent);//是背包组件
	AActor* OwningActor = OwnerComponent->GetOwner();
	check(OwningActor->HasAuthority());
	//背包里已经有这个BagItem，不需要新建Manifest了
	FInv_BagEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Item = Item;

	MarkItemDirty(NewEntry);
	return Item;
}

void FInv_BagFastArray::RemoveEntry(UInv_BagItem* Item)
{//遍历 Entries 数组，找到 Item 移除对应的Entry并通知服务器
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FInv_BagEntry& Entry = *EntryIt;
		if (Entry.Item == Item)
		{
			EntryIt.RemoveCurrent();
			MarkArrayDirty();
		}
	}
}
//遍历 Entries 数组，找到第一个匹配 ItemType 的物品并返回它的 UInv_BagItem 指针，如果没有找到则返回 nullptr
UInv_BagItem* FInv_BagFastArray::FindFirstItemByType(const FGameplayTag& ItemType)
{
	auto* FoundItem = Entries.FindByPredicate([ItemType = ItemType](const FInv_BagEntry& Entry)
	{
		return IsValid(Entry.Item) && Entry.Item->GetItemManifest().GetItemType().MatchesTagExact(ItemType);
	});
	return FoundItem ? FoundItem->Item : nullptr;
}















