#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "Inv_ItemFragment.generated.h"

USTRUCT(BlueprintType)
struct FInv_ItemFragment
{
	GENERATED_BODY()

	FInv_ItemFragment() {}
	FInv_ItemFragment(const FInv_ItemFragment&) = default;
	FInv_ItemFragment& operator=(const FInv_ItemFragment&) = default;
	FInv_ItemFragment(FInv_ItemFragment&&) = default;
	FInv_ItemFragment& operator=(FInv_ItemFragment&&) = default;
	virtual ~FInv_ItemFragment() {}

	FGameplayTag GetFragmentTag() const { return FragmentTag; }
	void SetFragmentTag(FGameplayTag Tag) { FragmentTag = Tag; }
private:

	UPROPERTY(EditAnywhere, Category = "Inventory", meta = (Categories="FragmentTags"))//meta将选项限制在FragmentTags里
	FGameplayTag FragmentTag = FGameplayTag::EmptyTag;//这个片段是什么类型物品的片段
};

//物品占几乘几个格子、格子间距
USTRUCT(BlueprintType)
struct FInv_GridFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	FIntPoint GetGridSize() const { return GridSize; }//占几乘几个格子
	void SetGridSize(const FIntPoint& Size) { GridSize = Size; }//设置占几乘几个格子{列, 行}
	float GetGridPadding() const { return GridPadding; }//俩格子间距
	void SetGridPadding(float Padding) { GridPadding = Padding; }

private:
	// 占几个格子，默认占1x1格
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FIntPoint GridSize{1, 1};//{列, 行}

	UPROPERTY(EditAnywhere, Category = "Inventory")
	float GridPadding{0.f};
	
};
//图标、图标尺寸、图标边距等信息
USTRUCT(BlueprintType)
struct FInv_ImageFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	UTexture2D* GetIcon() const { return Icon; }

private:

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TObjectPtr<UTexture2D> Icon{nullptr};

	UPROPERTY(EditAnywhere, Category = "Inventory")
	FVector2D IconDimensions{44.f, 44.f};//IconDimensions=GridSize*TileSize-GridPadding*2
};
//堆叠片段。包含最大堆叠数量、当前堆叠数量等信息
USTRUCT(BlueprintType)
struct FInv_StackableFragment : public FInv_ItemFragment
{
	GENERATED_BODY()

	int32 GetMaxStackSize() const { return MaxStackSize; }
	int32 GetStackCount() const { return StackCount; }
	void SetStackCount(int32 Count) { StackCount = Count; }

private:

	UPROPERTY(EditAnywhere, Category = "Inventory")
	int32 MaxStackSize{1};

	UPROPERTY(EditAnywhere, Category = "Inventory")
	int32 StackCount{1};
};


USTRUCT(BlueprintType)
struct FInv_ConsumableFragment  : public FInv_ItemFragment
{
	GENERATED_BODY()

	virtual void OnConsume(APlayerController* PC) {} //这个片段仅作为基类
};
/*
 * 每类可消耗物品似乎都要定义一个片段和各自的消耗函数
 */
USTRUCT(BlueprintType)
struct FInv_HealthPotionFragment : public FInv_ConsumableFragment //血瓶
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Inventory") float HealAmount = 20.f;

	virtual void OnConsume(APlayerController* PC) override;//连通ASC的接口，传什么参数自己改
};

USTRUCT(BlueprintType)
struct FInv_ManaPotionFragment : public FInv_ConsumableFragment //蓝瓶
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Inventory") float ManaAmount = 20.f;

	virtual void OnConsume(APlayerController* PC) override;
};















