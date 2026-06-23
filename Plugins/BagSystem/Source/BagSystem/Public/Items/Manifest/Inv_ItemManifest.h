#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/Inv_GridTypes.h"
#include "StructUtils/InstancedStruct.h"

#include "Inv_ItemManifest.generated.h"

/**
 * 物品清单/物品说明书，用来描述“地上这个物品进入背包后应该生成什么”。持有物品类型，物品Tag，片段
 *
 * ItemCategory 物品分类，例如装备、消耗品、材料等
 *
 * ItemType 物品Tag，例如装备分类下的武器、护甲、饰品等
 *
 * Fragments 物品片段数组，想要多少片段自己挂哈哈
 *
 */

struct FInv_ItemFragment;
class UInv_BagItem;

USTRUCT(BlueprintType)
struct BAGSYSTEM_API FInv_ItemManifest//物品清单/物品说明书，用来描述“地上这个物品进入背包后应该生成什么”
{
	GENERATED_BODY()

	UInv_BagItem* Manifest(UObject* NewOuter);//因为UObject是UInv_BagItem的基类。在AddEntry(UInv_ItemComponent) 时生成背包物品对象
	EInv_ItemCategory GetItemCategory() const { return ItemCategory; }
	FGameplayTag GetItemType() const { return ItemType; }

	template<typename T> requires std::derived_from<T, FInv_ItemFragment>
	const T* GetFragmentOfTypeWithTag(const FGameplayTag& FragmentTag) const;


private:
	//想要多少片段自己挂哈哈
	UPROPERTY(EditAnywhere, Category = "Inventory", meta = (ExcludeBaseStruct))//ExcludeBaseStruct这个属性在蓝图中只能编辑子类结构体
	TArray<TInstancedStruct<FInv_ItemFragment>> Fragments;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	EInv_ItemCategory ItemCategory{EInv_ItemCategory::None};//物品分类，默认 None

	UPROPERTY(EditAnywhere, Category = "Inventory")
	FGameplayTag ItemType;
};


template<typename T>
requires std::derived_from<T, FInv_ItemFragment>
const T* FInv_ItemManifest::GetFragmentOfTypeWithTag(const FGameplayTag& FragmentTag) const
{
	for (const TInstancedStruct<FInv_ItemFragment>& Fragment : Fragments)
	{
		if (const T* FragmentPtr = Fragment.GetPtr<T>())
		{
			if (!FragmentPtr->GetFragmentTag().MatchesTagExact(FragmentTag)) continue;
			return FragmentPtr;
		}
	}
	
	return nullptr;
}

