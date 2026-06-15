// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Inv_PlayerController.generated.h"

class UInv_BagComponent;
class UInputMappingContext;
class UInputAction;
class UInv_HUDWidget;
/**
 * 玩家控制器，负责“玩家输入”和“玩家看向了什么”这一层。
 *
 * 目前已经做了：
 * Enhanced Input 映射
 * 创建本地 HUD
 * 每帧从屏幕中心发射检测线
 * 检测可高亮物体并调用 Highlight / UnHighlight
 * 检测地上可拾取物品并显示拾取提示
 * BeginPlay 时自动获取挂在 PC 上的 BagComponent
 * 按键打开/关闭背包菜单
 * PrimaryInteract 会把当前命中的 ItemComponent 交给 BagComponent->TryAddItem
 *
 * 还没有负责：
 * 自己保存背包数据
 * 自己创建背包物品对象
 * 自己刷新背包格子 UI
 * 拾取后的 Actor 销毁/隐藏
 * 完整服务器权限校验
 * 更细的拾取距离/角度规则
 *
 * 注意：
 * 当前“按拾取键”已经会进入 BagComponent，但物品能否真正入包还取决于 BagComponent、
 * BagBase/SpatialBag 和 FastArray 后续逻辑是否实现完整。
 */
UCLASS()
class BAGSYSTEM_API AInv_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AInv_PlayerController();
	virtual void Tick(float DeltaTime) override;
	

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable, Category = "Inventory")//开关背包，玩家在蓝图里快捷键、‘x'按键都是调用这个函数，函数里只做了背包组件的bOpen变量切换、组件的可见和关闭
	void ToggleBag();
private:

	void PrimaryInteract();
	void CreateHUDWidget();
	void TraceForItem();

	TWeakObjectPtr<UInv_BagComponent> BagComponent;//背包挂在PC上，BeginPlay()里自动获取
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TArray<TObjectPtr<UInputMappingContext>> DefaultIMCs;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TObjectPtr<UInputAction> PrimaryBagAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TObjectPtr<UInputAction> ToggleBagAction;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TSubclassOf<UInv_HUDWidget> HUDWidgetClass;//ui挂在PC上

	UPROPERTY()
	TObjectPtr<UInv_HUDWidget> HUDWidget;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	double TraceLength;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TEnumAsByte<ECollisionChannel> ItemTraceChannel;

	TWeakObjectPtr<AActor> ThisActor;
	TWeakObjectPtr<AActor> LastActor;
};
