// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "Inv_BagItem.generated.h"

struct FInv_ItemManifest;
/**
 * 进入背包后的物品对象。
 *
 * 目前已经做了：
 * 继承 UObject，表示已经进入背包数据层的物品
 * 用 FInstancedStruct 保存 FInv_ItemManifest
 * SetItemManifest 可以把 Manifest 存进 ItemManifest
 * ItemManifest 已通过 DOREPLIFETIME 复制
 *
 * 还没有负责：
 * 提供读取 Manifest 的公开接口
 * 物品名称、图标、数量、最大堆叠数等具体字段
 * 使用、丢弃、拆分、合并物品
 * 自己显示到 UI 格子
 * 自己处理拖拽
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
private:

	UPROPERTY(VisibleAnywhere, meta = (BaseStruct = "/Script/BagSystem.Inv_ItemManifest"), Replicated)//插件名字.结构体名字
	FInstancedStruct ItemManifest;//在AddEntry(UInv_ItemComponent)时通过物品清单告诉BS放进去的Item对应什么BagItem。
};
























