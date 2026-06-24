#pragma once

#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "Inv_FastArray.generated.h"

struct FGameplayTag;
class UInv_ItemComponent;
class UInv_BagComponent;
class UInv_BagItem;

/**
 * FastArray 里的单个条目包装。
 *
 * 目前已经做了：
 * 继承 FFastArraySerializerItem，满足 UE FastArray 的条目要求
 * 保存一个 UInv_BagItem 指针
 * 作为 FInv_BagFastArray::Entries 里的数组元素
 *
 * 还没有负责：
 * 格子下标 SlotIndex
 * 物品数量/堆叠数
 * 物品占用尺寸
 * 单个条目的 UI 状态
 * 直接显示到格子
 */
USTRUCT(BlueprintType)
struct FInv_BagEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FInv_BagEntry() {}
private:
	friend struct FInv_BagFastArray;
	friend UInv_BagComponent;

	UPROPERTY()
	TObjectPtr<UInv_BagItem> Item = nullptr;
};

/**
 * 背包物品数组的 FastArray 网络同步外壳。
 */
USTRUCT(BlueprintType)
struct FInv_BagFastArray : public FFastArraySerializer
{
	GENERATED_BODY()

	FInv_BagFastArray() : OwnerComponent(nullptr) {}//在哪里赋值？在背包组件的构造函数里直接 FInv_BagFastArray(this) 就行了，OwnerComponent 就指向背包组件自己了
	FInv_BagFastArray(UActorComponent* InOwnerComponent) : OwnerComponent(InOwnerComponent) {}//ownercomponent是背包组件，复制回调里需要用它找到背包组件来广播事件

	TArray<UInv_BagItem*> GetAllItems() const;

	// FastArray 的复制回调，在复制完成后会被引擎调用，告诉我们哪些条目是新增的，哪些条目是被删除的，我们可以在这里广播事件，让 UI 刷新显示
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
//告诉引擎如何序列化 FInv_BagFastArray 以进行网络同步
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParams)
	{
		return FastArrayDeltaSerialize<FInv_BagEntry, FInv_BagFastArray>(Entries, DeltaParams, *this);
	}

	UInv_BagItem* AddEntry(UInv_ItemComponent* ItemComponent);
	UInv_BagItem* AddEntry(UInv_BagItem* Item);
	void RemoveEntry(UInv_BagItem* Item);
	UInv_BagItem* FindFirstItemByType(const FGameplayTag& ItemType);

private:
	friend UInv_BagComponent;

	// Replicated list of items
	UPROPERTY()
	TArray<FInv_BagEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FInv_BagFastArray> : public TStructOpsTypeTraitsBase2<FInv_BagFastArray>
{
	enum { WithNetDeltaSerializer = true };//告诉引擎 FInv_BagFastArray 需要使用 NetDeltaSerialize 来进行网络同步
};




















