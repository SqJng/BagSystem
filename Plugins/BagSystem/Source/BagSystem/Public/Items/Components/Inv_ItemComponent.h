// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "Inv_ItemComponent.generated.h"

/**
 * 地上物品 Actor 身上的组件，负责保存“这个地上物品是什么”。
 *
 * 目前已经做了：
 * 挂在地上的物品 Actor 上，供射线检测识别可拾取物
 * 保存 PickupMessage，给 HUD 显示拾取提示
 * 保存 FInv_ItemManifest，描述物品进入背包后应生成什么数据
 * 提供 GetItemManifest，让 BagComponent/FastArray 后续创建 UInv_BagItem
 *
 * 还没有负责/还没做完整：
 * 自己把物品加入背包
 * 自己创建 UInv_BagItem
 * 拾取成功后销毁/隐藏地上 Actor
 * 数量、图标、名称等详细 Manifest 字段目前还没展开
 * ItemManifest 虽然标了 Replicated，但 cpp 里还没有 DOREPLIFETIME
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)//Blueprintable蓝图可用组件，应实现以下功能：保存物品清单 Manifest，提供接口给背包组件创建 BagItem，保存拾取提示信息 PickupMessage 给 HUD 显示
class BAGSYSTEM_API UInv_ItemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInv_ItemComponent();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void InitItemManifest(const FInv_ItemManifest& CopyOfManifest);// 不引用，因为要即时的 Manifest信息
	FInv_ItemManifest GetItemManifest() const { return ItemManifest; }

	FString GetPickupMessage() const { return PickupMessage; }
	void PickedUp();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void OnPickedUp();//触发销毁特性之类的

private:

	UPROPERTY(Replicated, EditAnywhere, Category = "Inventory")//新增的复制，需要在 cpp 里 DOREPLIFETIME(ThisClass, ItemManifest)，一般写在 GetLifetimeReplicatedProps 里
	FInv_ItemManifest ItemManifest;//添加物品逻辑中，在快速数组的 AddEntry(UInv_ItemComponent) 里通过 ItemComponent->GetItemManifest() 初始化 BagItem 的 Manifest


	UPROPERTY(EditAnywhere, Category = "Inventory")
	FString PickupMessage;
};
