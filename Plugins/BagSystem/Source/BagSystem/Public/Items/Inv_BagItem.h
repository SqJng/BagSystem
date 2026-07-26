// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "Inv_BagItem.generated.h"

struct FInv_ItemManifest;
/**
 * 进入背包后的物品对象。仅持有清单
 *
 * ItemManifest 物品清单，保存这个物品的具体数据，例如分类、图标、占格信息等
 *
 * GetFragment() 通过标签获取片段
 *
 * 是堆叠物吗
 */
UCLASS()
class BAGSYSTEM_API UInv_BagItem : public UObject//背包物品对象，进入背包后的物品数据层对象，应实现以下功能：保存物品数据（目前是 Manifest），提供接口给 UI 刷新显示，处理使用/丢弃/拖拽等交互
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;//复制 ItemManifest，
	virtual bool IsSupportedForNetworking() const override { return true; }

	void SetItemManifest(const FInv_ItemManifest& Manifest);
	const FInv_ItemManifest& GetItemManifest() const { return ItemManifest.Get<FInv_ItemManifest>(); }
	FInv_ItemManifest& GetItemManifestMutable() { return ItemManifest.GetMutable<FInv_ItemManifest>(); }
	bool IsStackable() const;
	bool IsConsumable() const;
	int32 GetTotalStackCount() const { return TotalStackCount; }
	void SetTotalStackCount(int32 Count) { TotalStackCount = Count; }
private:

	UPROPERTY(VisibleAnywhere, meta = (BaseStruct = "/Script/BagSystem.Inv_ItemManifest"), Replicated)//插件名字.结构体名字
	FInstancedStruct ItemManifest;//在AddEntry(UInv_ItemComponent)时通过物品清单告诉BS放进去的Item对应什么BagItem。

	UPROPERTY(Replicated)
	int32 TotalStackCount{0};// 背包里这个物品的总数量，丢东西时判断用
};

template <typename FragmentType>
const FragmentType* GetFragment(const UInv_BagItem* Item, const FGameplayTag& Tag)//这里的逻辑是：外界传入一个物品和一个标签，想要拿到这个物品里那个标签对应的片段数据。为什么要传标签？因为一个物品可能有多个同类型的片段，标签可以区分它们
{
	if (!IsValid(Item)) return nullptr;

	const FInv_ItemManifest& Manifest = Item->GetItemManifest();
	return Manifest.GetFragmentOfTypeWithTag<FragmentType>(Tag);
}























