#pragma once

#include "Inv_GridTypes.generated.h"

class UInv_BagItem;
/**
 * 三类背包物品
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

	int32 Index{INDEX_NONE};//格子下标，默认是INDEX_NONE，表示无效
	int32 AmountToFill{0};//这个格子还能塞多少个当前物品
	bool bItemAtIndex{false};//这个格子当前是否已经有物品
};
/**
 * 整个背包对“能不能放下这个物品”的回答，是一个结构体
 *
 * 弱指针指向Item
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
	int32 Remainder{0};//如果全放进去，会有Remainder个放不下 
	bool bStackable{false};//能不能堆叠
	TArray<FInv_SlotAvailability> SlotAvailabilities;//单个格子的可用空间结果。
};

/**
 * 格子四个象限
 */
UENUM(BlueprintType)
enum class EInv_TileQuadrant : uint8
{
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	None
};
/**
 * 鼠标位置结构体，用于鼠标移动时，实时记录鼠标位置 来帮助计算哪些格子高亮
 *
 * TileCoordinats 格子坐标
 *
 * TileIndex 格子下标
 *
 * TileQuadrant 格子象限
 */
USTRUCT(BlueprintType)
struct FInv_TileParameters
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	FIntPoint TileCoordinats{};//鼠标的坐标

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	int32 TileIndex{INDEX_NONE};//鼠标在哪个格子

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Inventory")
	EInv_TileQuadrant TileQuadrant{EInv_TileQuadrant::None};//鼠标在哪个象限
};

inline bool operator==(const FInv_TileParameters& A, const FInv_TileParameters& B)
{
	return A.TileCoordinats == B.TileCoordinats && A.TileIndex == B.TileIndex && A.TileQuadrant == B.TileQuadrant;
}

// 鼠标拖动物品时，检查鼠标悬停的格子是否有足够空间放置物品的结果
USTRUCT()
struct FInv_SpaceQueryResult
{
	GENERATED_BODY()

	// 有空间吗？
	bool bHasSpace{false};

	// 放的啥
	TWeakObjectPtr<UInv_BagItem> ValidItem = nullptr;

	// 
	int32 UpperLeftIndex{INDEX_NONE};
};