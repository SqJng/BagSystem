// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_GridSlot.generated.h"

class UInv_BagItem;
class UImage;

UENUM(BlueprintType)
enum class EInv_GridSlotState : uint8
{
	Unoccupied,
	Occupied,
	Selected,
	GrayedOut
};
/**
 * 格子控件，继承自UUserWidget，放在画布里显示格子背景。
 *
 * 有index和格子背景图
 *
 * 格子背景是在编辑器里设置的鼠标移入移除效果
 */
UCLASS()
class BAGSYSTEM_API UInv_GridSlot : public UUserWidget//UUserWidget里包含样式
{
	GENERATED_BODY()
public:
	void SetTileIndex(int32 Index) { TileIndex = Index; }
	int32 GetTileIndex() const { return TileIndex; }
	EInv_GridSlotState GetGridSlotState() const { return GridSlotState; }
	TWeakObjectPtr<UInv_BagItem> GetBagItem() const { return BagItem; }
	void SetBagItem(UInv_BagItem* Item);
	int32 GetStackCount() const { return StackCount; }
	void SetStackCount(int32 Count) { StackCount = Count; }//设置格子里堆叠数
	int32 GetIndex() const { return TileIndex; }
	void SetIndex(int32 Index) { TileIndex = Index; }//设置格子下标
	int32 GetUpperLeftIndex() const { return UpperLeftIndex; }//返回占用这个格子的物品的左上角格子index
	void SetUpperLeftIndex(int32 Index) { UpperLeftIndex = Index; }//设置占用这个格子的物品的左上角格子index
	bool IsAvailable() const { return bAvailable; }//这个格子能不能放东西
	void SetAvailable(bool bIsAvailable) { bAvailable = bIsAvailable; }//设置这个格子能不能放东西
	
	//设置4种背景图状态
	void SetOccupiedTexture();
	void SetUnoccupiedTexture();
	void SetSelectedTexture();
	void SetGrayedOutTexture();
	
private:
	int32 TileIndex;// 一维的格子号
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_GridSlot;

	int32 StackCount;//堆叠数
	int32 UpperLeftIndex{INDEX_NONE};//当前格子所属物品占用的左上角的格子下标index，空格子里是INDEX_NONE
	TWeakObjectPtr<UInv_BagItem> BagItem;//弱指针指向这个格子里是什么物品
	bool bAvailable;//这个格子能不能放东西，默认能放


	
	//当前格子状态，默认 Unoccupied
	EInv_GridSlotState GridSlotState;
	//4种鼠标状态的格子背景图，在编辑器里设置
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FSlateBrush Brush_Unoccupied;
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FSlateBrush Brush_Occupied;
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FSlateBrush Brush_Selected;
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FSlateBrush Brush_GrayedOut;
};
