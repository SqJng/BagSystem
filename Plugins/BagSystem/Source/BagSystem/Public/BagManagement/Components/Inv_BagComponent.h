// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BagManagement/FastArray/Inv_FastArray.h"
#include "Components/ActorComponent.h"
#include "Inv_BagComponent.generated.h"

class UInv_ItemComponent;
class UInv_BagBase;
class UInv_BagItem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBagItemChange, UInv_BagItem*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNoRoomInBag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackChange, const FInv_SlotAvailabilityResult&, Result);

/**
 * 背包组件，挂在 PlayerController 上，负责“背包系统的入口和协调”。
 *
 * 目前已经做了：
 * 创建并保存背包菜单 BagMenu
 * 打开/关闭背包菜单
 * 切换 GameAndUI / GameOnly 输入模式
 * 显示/隐藏鼠标
 * 通过 TryAddItem 接收地上物品的 ItemComponent
 * 调用 BagMenu->HasRoomForItem 查询当前背包空间
 * 没有空间时广播 NoRoomInBag
 * 声明 OnItemAdded / OnItemRemoved，给 FastArray 复制回调通知 UI 用
 * 声明并复制 InventoryList，也就是 FInv_BagFastArray
 * 注册子对象复制入口 AddRepSubObj
 *
 * 还没有负责/还没做完整：
 * Server_AddStacksToItem 还是空实现
 * Server_AddNewItem 已经调用 InventoryList.AddEntry(ItemComponent)，但该重载目前还是 
 * 物品成功入包后的地上 Actor 销毁/隐藏
 * 把 OnItemAdded / OnItemRemoved 接到具体格子 UI 刷新
 * 拖拽、移动、交换、丢弃、使用物品
 * 确认 InventoryList 的 OwnerComponent 已正确指向本组件
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)//开启创建蓝图能力
class BAGSYSTEM_API UInv_BagComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInv_BagComponent();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Inventory")
	void TryAddItem(UInv_ItemComponent* ItemComponent);//服务器才能调用的
//加背包中已有的可堆叠物
	UFUNCTION(Server, Reliable)
	void Server_AddStacksToItem(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder);
//加新或者不可堆叠物
	UFUNCTION(Server, Reliable)
	void Server_AddNewItem(UInv_ItemComponent* ItemComponent, int32 StackCount);

	UFUNCTION(Server, Reliable)
	void Server_DropItem(UInv_BagItem* Item, int32 StackCount);

	UFUNCTION(Server, Reliable)
	void Server_ConsumeItem(UInv_BagItem* Item);
	
	void ToggleBagMenu();
	void AddRepSubObj(UObject* SubObj);
	void SpawnDroppedItem(UInv_BagItem* Item, int32 StackCount);
	UInv_BagBase* GetBagMenu() const { return BagMenu; }			// 获取子背包，这个项目里只有一个子背包

	
//监听
	FBagItemChange OnItemAdded;//在BagGrid初始化时绑定监听后触发的事件，参数是新增的物品 UInv_BagItem*
	FBagItemChange OnItemRemoved;
	FNoRoomInBag NoRoomInBag;
	FStackChange OnStackChange;//监听堆叠物变化的
	
protected:
	virtual void BeginPlay() override;

private:

	TWeakObjectPtr<APlayerController> OwningController;//存玩家PC
	
	void ConstructBag(); //构建背包UI

	UPROPERTY(Replicated)
	FInv_BagFastArray BagList;//快速数组

	//在背包组件中创建一个背包UI实例，并将其添加到玩家的HUD上。初始化时由蓝图设置的BagMenuClass构建
	UPROPERTY()
	TObjectPtr<UInv_BagBase> BagMenu;//说是子背包，但目前设计里只有一个背包菜单实例，后续可以改成 TArray<TObjectPtr<UInv_BagBase>> 来支持多个背包菜单

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TSubclassOf<UInv_BagBase> BagMenuClass;//在蓝图里设置背包菜单的类，构建背包时用这个类来创建实例
	
	bool bBagMenuOpen;
	void OpenBagMenu();
	void CloseBagMenu();

	//--------------------------------掉落物位置相关参数--------------------------------
	UPROPERTY(EditAnywhere, Category = "Inventory")
	float DropSpawnAngleMin = -85.f;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float DropSpawnAngleMax = 85.f;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float DropSpawnDistanceMin = 50.f;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float DropSpawnDistanceMax = 100.f;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float RelativeSpawnElevation = 80.f;

	//------------------------------------------------------------------------------
};
