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
 * 目前已经做了：
 * 记录格子下标 Index
 * 记录这个格子还能填入多少当前物品 AmountToFill
 * 记录这个格子当前是否已有物品 bItemAtIndex
 *
 * 还没有负责：
 * 保存格子里的具体物品指针
 * 保存格子坐标
 * 保存物品占用宽高
 * 判断拖拽碰撞
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
 * 整个背包对“能不能放下这个物品”的回答。
 *
 * 目前已经做了：
 * 保存可叠加目标 Item
 * 保存总共还能填入多少 TotalRoomToFill
 * 保存放不下的剩余数量 Remainder
 * 保存当前物品是否可堆叠 bStackable
 * 保存每个相关格子的 FInv_SlotAvailability
 *
 * 还没有负责：
 * 自己计算空间；计算逻辑应由 BagBase/SpatialBag/BagGrid 完成
 * 自己修改背包数据
 * 自己刷新 UI
 * 自己执行网络同步
 */
USTRUCT()
struct FInv_SlotAvailabilityResult
{
	GENERATED_BODY()

	FInv_SlotAvailabilityResult() {}

	TWeakObjectPtr<UInv_BagItem> Item;//弱指针指向Item
	int32 TotalRoomToFill{0};//背包里总共还能放下多少个当前物品了
	int32 Remainder{0};//如果 TotalRoomToFill 不足以完全放下这个物品，那么还有多少个放不下了
	bool bStackable{false};
	TArray<FInv_SlotAvailability> SlotAvailabilities;
};
