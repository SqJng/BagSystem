// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Inv_PlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Interaction/Inv_Highlightable.h"
#include "BagManagement/Components/Inv_BagComponent.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/HUD/Inv_HUDWidget.h"

AInv_PlayerController::AInv_PlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	TraceLength = 1000.0;
	ItemTraceChannel = ECC_GameTraceChannel1;
}

void AInv_PlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TraceForItem();
}

void AInv_PlayerController::ToggleBag()
{
	if (!BagComponent.IsValid()) return;
	BagComponent->ToggleBagMenu();
}

void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	BagComponent = FindComponentByClass<UInv_BagComponent>();//自动找背包组件，即使用户忘了在蓝图里把背包组件的变量赋值了也没关系

	if (!IsLocalController()) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (IsValid(Subsystem))
	{
		for (UInputMappingContext* CurrentContext : DefaultIMCs)//5.6以后是指针数组，之前是单个UInputMappingContext*
		{
			if (CurrentContext)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}
		}
	}

	CreateHUDWidget();
}

void AInv_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (IsValid(EnhancedInputComponent))
	{
		EnhancedInputComponent->BindAction(PrimaryBagAction, ETriggerEvent::Started, this, &ThisClass::PrimaryInteract);
		EnhancedInputComponent->BindAction(ToggleBagAction, ETriggerEvent::Started, this, &AInv_PlayerController::ToggleBag);//按B从输入映射传进来，进来只做了背包组件的bOpen变量切换、组件的可见和关闭
	}
}

void AInv_PlayerController::PrimaryInteract()
{
	if (!ThisActor.IsValid()) return;
	//把可交互物传入玩家PC的背包组件的TryAddItem函数里
	UInv_ItemComponent* ItemComp = ThisActor->FindComponentByClass<UInv_ItemComponent>();
	if (!IsValid(ItemComp) || !BagComponent.IsValid()) return;

	BagComponent->TryAddItem(ItemComp);
}

void AInv_PlayerController::CreateHUDWidget()
{
	if (!IsLocalController()) return;
	HUDWidget = CreateWidget<UInv_HUDWidget>(this, HUDWidgetClass);
	if (IsValid(HUDWidget))
	{
		HUDWidget->AddToViewport();
	}
}

void AInv_PlayerController::TraceForItem()
{
	if (!IsLocalController()) return;
	if(!IsValid(GEngine)||!IsValid(GEngine->GameViewport)) return;
	FVector2d ViewportSize;
	GEngine->GameViewport->GetViewportSize(ViewportSize);
	const FVector2D ViewportCenter = ViewportSize / 2.f;
	FVector TraceStart;
	FVector Forward;// 前单位向量
	if (!UGameplayStatics::DeprojectScreenToWorld(this, ViewportCenter, TraceStart, Forward)) return;// ViewportCenter得到TraceStart和Forward

	const FVector TraceEnd = TraceStart + Forward * TraceLength;// 从玩家视角出发，向前TraceLength距离的点
	FHitResult HitResult;// 检测结果
	// LineTraceSingleByChannel：发射单条射线，遇到第一个阻挡即停止。
	GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ItemTraceChannel);// 蓝图里设置好ItemTraceChannel

	LastActor = ThisActor;             // 1. 先把上一帧看到的 Actor 存入 LastActor 
	ThisActor = HitResult.GetActor();  // 2. 将当前帧射线打到的 Actor 赋值给 ThisActor

	if (!ThisActor.IsValid())  
	{
		if(IsValid(HUDWidget))HUDWidget->HidePickupMessage();
	}
	if (ThisActor == LastActor) return;
	if (ThisActor.IsValid())// 对弱指针使用 IsValid() 
	{	//如果聚焦的物体上有这个接口，高亮它；UInv_Highlightable是接口
		if (UActorComponent* Highlightable = ThisActor->FindComponentByInterface(UInv_Highlightable::StaticClass()); IsValid(Highlightable))
		{
			IInv_Highlightable::Execute_Highlight(Highlightable);//执行组件的IInv_Highlightable接口里的Highlight函数
		}
		
		UInv_ItemComponent* ItemComponent = ThisActor->FindComponentByClass<UInv_ItemComponent>();
		if (!IsValid(ItemComponent))return ;//非弱指针得当参数传进去
		if(IsValid(HUDWidget))HUDWidget->ShowPickupMessage(ItemComponent->GetPickupMessage());
	}
	if (LastActor.IsValid())
	{
		if (UActorComponent* Highlightable = LastActor->FindComponentByInterface(UInv_Highlightable::StaticClass()); IsValid(Highlightable))
		{//查找actor上是否有一个组件实现了UInv_Highlightable接口
			IInv_Highlightable::Execute_UnHighlight(Highlightable);
		}
	}
}
 
