// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_SlottedItem.generated.h"

class UInv_BagItem;
class UImage;
class UTextBlock;

/**
 * 物品图标，继承自UUserWidget，重叠在画布的格子上显示物品图标，不一定是1x1大小。在BagGrid添加物品时设置传入BagItem和图标，设置它的格子位置和占用格子数量。
 *
 *	TObjectPtr<UImage> Image_Icon;图标
 *
 *	TObjectPtr<UTextBlock> Text_StackCount 该物品每个格子各叠了多少个，数量的表现层，在GridSlot里的是逻辑层
 *	
 *	int32 GridIndex;它放在哪个格子
 *	
 *	FIntPoint GridDimensions它占几格
 *	
 *	弱指针<UInv_BagItem> BagItem 一个弱指针指向BagItem，方便后续查询这个格子里是什么物品。
 *	
 *	bool bIsStackable{false};
 */


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSlottedItemClicked, int32, GridIndex, const FPointerEvent&, MouseEvent);		//这是一个动态多播委托，声明了一个名为 FSlottedItemClicked 的委托类型，它有两个参数：GridIndex（int32 类型）和 MouseEvent（const FPointerEvent& 类型）。这个委托可以用于在物品图标被点击时通知其他对象，传递被点击的格子索引和鼠标事件信息。


UCLASS()
class BAGSYSTEM_API UInv_SlottedItem : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	
	bool IsStackable() const { return bIsStackable; }
	void SetIsStackable(bool bStackable) { bIsStackable = bStackable; }
	UImage* GetImageIcon() const { return Image_Icon; }
	void SetImageBrush(const FSlateBrush& Brush) const;
	int32 GetGridIndex() const { return GridIndex; }
	void SetGridIndex(int32 Index) { GridIndex = Index; }
	FIntPoint GetGridDimensions() const { return GridDimensions; }
	void SetGridDimensions(const FIntPoint& Dimensions) { GridDimensions = Dimensions; }
	UInv_BagItem* GetBagItem() const { return BagItem.Get(); }
	void SetBagItem(UInv_BagItem* Item);
	void UpdateStackCount(int32 StackCount);

	FSlottedItemClicked OnSlottedItemClicked;//声明了一个名为 OnSlottedItemClicked 的委托变量，它的类型是 FSlottedItemClicked。这个委托可以用于在物品图标被点击时通知其他对象，传递被点击的格子索引和鼠标事件信息。
private:

	UPROPERTY(meta = (BindWidget))//在编辑器里继承这个类时你得拖一个image到子层级下，且必须命名为Image_Icon，不然这个编译错误
	TObjectPtr<UImage> Image_Icon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_StackCount;//角标数量

	int32 GridIndex;//它放在哪个格子
	FIntPoint GridDimensions;//它占几列几行{列, 行}
	TWeakObjectPtr<UInv_BagItem> BagItem;//它代表哪个背包物品
	bool bIsStackable{false};
};















