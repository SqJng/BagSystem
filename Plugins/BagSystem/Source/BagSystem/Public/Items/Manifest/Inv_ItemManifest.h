#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/Inv_GridTypes.h"
#include "StructUtils/InstancedStruct.h"

#include "Inv_ItemManifest.generated.h"

/**
 * 物品清单/物品说明书，用来描述“地上这个物品进入背包后应该生成什么”。
 *
 * 目前已经做了：
 * 保存 ItemCategory，区分装备、消耗品、材料等分类
 * Manifest(NewOuter) 可以创建 UInv_BagItem
 * 创建 BagItem 后会把当前 Manifest 存进 BagItem
 *
 * 还没有负责：
 * 物品名称、图标、描述
 * 堆叠数量和最大堆叠数
 * 物品尺寸/占几个格子
 * 使用效果、装备属性、材料配方等具体数据
 */

class UInv_BagItem;

USTRUCT(BlueprintType)
struct BAGSYSTEM_API FInv_ItemManifest//物品清单/物品说明书，用来描述“地上这个物品进入背包后应该生成什么”
{
	GENERATED_BODY()

	UInv_BagItem* Manifest(UObject* NewOuter);//因为UObject是UInv_BagItem的基类。在AddEntry(UInv_ItemComponent) 时生成背包物品对象
	EInv_ItemCategory GetItemCategory() const { return ItemCategory; }
	FGameplayTag GetItemType() const { return ItemType; }

private:

	UPROPERTY(EditAnywhere, Category = "Inventory")
	EInv_ItemCategory ItemCategory{EInv_ItemCategory::None};//物品分类，默认 None

	UPROPERTY(EditAnywhere, Category = "Inventory")
	FGameplayTag ItemType;
};

