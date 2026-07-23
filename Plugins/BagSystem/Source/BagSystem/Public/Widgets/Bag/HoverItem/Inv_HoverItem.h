
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Inv_HoverItem.generated.h"

class UInv_BagItem;
/**
 * 点击背包物品随鼠标移动的图标
 */
class UImage;
class UTextBlock;
UCLASS()
class BAGSYSTEM_API UInv_HoverItem : public UUserWidget
{
	GENERATED_BODY()
	public:
	void SetImageBrush(const FSlateBrush& Brush) const;			//设置图标
	// 更新悬停图标的数量显示，并同步保存数量供放置逻辑读取。
	void UpdateStackCount(const int32 Count);

	FGameplayTag GetItemType() const;
	int32 GetStackCount() const { return StackCount; }			//获取数量
	bool IsStackable() const { return bIsStackable; }			//
	void SetIsStackable(bool bStacks);
	int32 GetPreviousGridIndex() const { return PreviousGridIndex; }						//获取原来的格子索引
	void SetPreviousGridIndex(int32 Index) { PreviousGridIndex = Index; }
	FIntPoint GetGridDimensions() const { return GridDimensions; }							//获取大小
	void SetGridDimensions(const FIntPoint& Dimensions) { GridDimensions = Dimensions; }
	UInv_BagItem* GetBagItem() const;														//获取物品
	void SetBagItem(UInv_BagItem* Item);
	
	private:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Icon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_StackCount;//

	int32 PreviousGridIndex;//原来的格子索引
	FIntPoint GridDimensions;//几乘几
	TWeakObjectPtr<UInv_BagItem> BagItem;// 拿的物品
	bool bIsStackable{false};
	int32 StackCount{0};// 当前悬停物品要放回背包的堆叠数量

};
