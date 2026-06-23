#pragma once

#include "Inv_GridTypes.generated.h"

class UInv_BagItem;
/**
 * 背包物品分类。
 *
 * 目前已经做了：
 * 定义装备 Equippable
 * 定义消耗品 Consumable
 * 定义材料 Craftable
 * 定义空分类 None
 *
 * 还没有负责：
 * 分类显示名称
 * 分类图标
 * 分类页签顺序
 * 判断某个物品属于哪个分类
 */
UENUM(BlueprintType)
enum class EInv_ItemCategory : uint8
{
	Equippable,
	Consumable,
	Craftable,
	None
};

/**
 * 单个格子的可用空间结果。
 * 
 * 记录格子下标 Index
 * 
 * 记录这个格子还能填入多少当前物品 AmountToFill
 * 
 * 记录这个格子当前是否已有物品 bItemAtIndex
 *
 */
USTRUCT()
struct FInv_SlotAvailability//格子结构
{
	GENERATED_BODY()

	FInv_SlotAvailability() {}
	FInv_SlotAvailability(int32 ItemIndex, int32 Room, bool bHasItem) : Index(ItemIndex), AmountToFill(Room), bItemAtIndex(bHasItem) {}

	int32 Index{INDEX_NONE};//格子下标
	int32 AmountToFill{0};//这个格子还能塞多少个当前物品
	bool bItemAtIndex{false};//这个格子当前是否已经有物品
};
/**
 * 整个背包对“能不能放下这个物品”的回答
 *
 * Item
 *
 * TotalRoomToFill 背包里总共还能放下多少个当前物品
 *
 * Remainder 如果 TotalRoomToFill 不足以完全放下这个物品，那么还有多少个放不下了
 *
 * bStackable 可堆叠
 *
 * 里面包含TArray<FInv_SlotAvailability> SlotAvailabilities;
 */
USTRUCT()
struct FInv_SlotAvailabilityResult
{
	GENERATED_BODY()

	FInv_SlotAvailabilityResult() {}

	TWeakObjectPtr<UInv_BagItem> Item;//弱指针指向Item
	int32 TotalRoomToFill{0};//背包里总共还能放下多少个当前物品
	int32 Remainder{0};//如果 TotalRoomToFill 不足以完全放下这个物品，那么还有多少个放不下了
	bool bStackable{false};//默认不可堆叠
	TArray<FInv_SlotAvailability> SlotAvailabilities;//单个格子的可用空间结果。
};
