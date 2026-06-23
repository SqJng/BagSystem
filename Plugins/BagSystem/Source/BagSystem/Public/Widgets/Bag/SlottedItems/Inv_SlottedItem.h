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
 *	TObjectPtr<UTextBlock> Text_StackCount 该物品每个格子各叠了多少个
 *	
 *	int32 GridIndex;它放在哪个格子
 *	
 *	FIntPoint GridDimensions它占几格
 *	
 *	弱指针<UInv_BagItem> BagItem 一个弱指针指向BagItem，方便后续查询这个格子里是什么物品。
 *	
 *	bool bIsStackable{false};
 */


UCLASS()
class BAGSYSTEM_API UInv_SlottedItem : public UUserWidget
{
	GENERATED_BODY()

public:
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
private:

	UPROPERTY(meta = (BindWidget))//在编辑器里继承这个类时你得拖一个image到子层级下，且必须命名为Image_Icon，不然这个编译错误
	TObjectPtr<UImage> Image_Icon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_StackCount;

	int32 GridIndex;//它放在哪个格子
	FIntPoint GridDimensions;//它占几格
	TWeakObjectPtr<UInv_BagItem> BagItem;//它代表哪个背包物品
	bool bIsStackable{false};
};















