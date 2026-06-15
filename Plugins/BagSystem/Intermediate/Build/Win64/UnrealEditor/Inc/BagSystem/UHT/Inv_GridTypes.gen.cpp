// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridTypes() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UEnum* Z_Construct_UEnum_BagSystem_EInv_ItemCategory();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInv_ItemCategory *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_ItemCategory;
static UEnum* EInv_ItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BagSystem_EInv_ItemCategory, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("EInv_ItemCategory"));
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton;
}
template<> BAGSYSTEM_API UEnum* StaticEnum<EInv_ItemCategory>()
{
	return EInv_ItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe5\xae\x9a\xe4\xb9\x89\xe8\xa3\x85\xe5\xa4\x87 Equippable\n * \xe5\xae\x9a\xe4\xb9\x89\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81 Consumable\n * \xe5\xae\x9a\xe4\xb9\x89\xe6\x9d\x90\xe6\x96\x99 Craftable\n * \xe5\xae\x9a\xe4\xb9\x89\xe7\xa9\xba\xe5\x88\x86\xe7\xb1\xbb None\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe5\x88\x86\xe7\xb1\xbb\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n * \xe5\x88\x86\xe7\xb1\xbb\xe5\x9b\xbe\xe6\xa0\x87\n * \xe5\x88\x86\xe7\xb1\xbb\xe9\xa1\xb5\xe7\xad\xbe\xe9\xa1\xba\xe5\xba\x8f\n * \xe5\x88\xa4\xe6\x96\xad\xe6\x9f\x90\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe5\xb1\x9e\xe4\xba\x8e\xe5\x93\xaa\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb\n */" },
#endif
		{ "Consumable.Name", "EInv_ItemCategory::Consumable" },
		{ "Craftable.Name", "EInv_ItemCategory::Craftable" },
		{ "Equippable.Name", "EInv_ItemCategory::Equippable" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_ItemCategory::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe5\xae\x9a\xe4\xb9\x89\xe8\xa3\x85\xe5\xa4\x87 Equippable\n\xe5\xae\x9a\xe4\xb9\x89\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81 Consumable\n\xe5\xae\x9a\xe4\xb9\x89\xe6\x9d\x90\xe6\x96\x99 Craftable\n\xe5\xae\x9a\xe4\xb9\x89\xe7\xa9\xba\xe5\x88\x86\xe7\xb1\xbb None\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe5\x88\x86\xe7\xb1\xbb\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n\xe5\x88\x86\xe7\xb1\xbb\xe5\x9b\xbe\xe6\xa0\x87\n\xe5\x88\x86\xe7\xb1\xbb\xe9\xa1\xb5\xe7\xad\xbe\xe9\xa1\xba\xe5\xba\x8f\n\xe5\x88\xa4\xe6\x96\xad\xe6\x9f\x90\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe5\xb1\x9e\xe4\xba\x8e\xe5\x93\xaa\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_ItemCategory::Equippable", (int64)EInv_ItemCategory::Equippable },
		{ "EInv_ItemCategory::Consumable", (int64)EInv_ItemCategory::Consumable },
		{ "EInv_ItemCategory::Craftable", (int64)EInv_ItemCategory::Craftable },
		{ "EInv_ItemCategory::None", (int64)EInv_ItemCategory::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BagSystem,
	nullptr,
	"EInv_ItemCategory",
	"EInv_ItemCategory",
	Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BagSystem_EInv_ItemCategory()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton, Z_Construct_UEnum_BagSystem_EInv_ItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton;
}
// ********** End Enum EInv_ItemCategory ***********************************************************

// ********** Begin ScriptStruct FInv_SlotAvailability *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailability;
class UScriptStruct* FInv_SlotAvailability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailability, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("Inv_SlotAvailability"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8f\xaf\xe7\x94\xa8\xe7\xa9\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x9c\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe8\xae\xb0\xe5\xbd\x95\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 Index\n * \xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81 AmountToFill\n * \xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81 bItemAtIndex\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe7\x9a\x84\xe5\x85\xb7\xe4\xbd\x93\xe7\x89\xa9\xe5\x93\x81\xe6\x8c\x87\xe9\x92\x88\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\n * \xe4\xbf\x9d\xe5\xad\x98\xe7\x89\xa9\xe5\x93\x81\xe5\x8d\xa0\xe7\x94\xa8\xe5\xae\xbd\xe9\xab\x98\n * \xe5\x88\xa4\xe6\x96\xad\xe6\x8b\x96\xe6\x8b\xbd\xe7\xa2\xb0\xe6\x92\x9e\n *///\xe6\xa0\xbc\xe5\xad\x90\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8f\xaf\xe7\x94\xa8\xe7\xa9\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x9c\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe8\xae\xb0\xe5\xbd\x95\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 Index\n\xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81 AmountToFill\n\xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81 bItemAtIndex\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe7\x9a\x84\xe5\x85\xb7\xe4\xbd\x93\xe7\x89\xa9\xe5\x93\x81\xe6\x8c\x87\xe9\x92\x88\n\xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87\n\xe4\xbf\x9d\xe5\xad\x98\xe7\x89\xa9\xe5\x93\x81\xe5\x8d\xa0\xe7\x94\xa8\xe5\xae\xbd\xe9\xab\x98\n\xe5\x88\xa4\xe6\x96\xad\xe6\x8b\x96\xe6\x8b\xbd\xe7\xa2\xb0\xe6\x92\x9e\n //\xe6\xa0\xbc\xe5\xad\x90\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailability>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailability",
	nullptr,
	0,
	sizeof(FInv_SlotAvailability),
	alignof(FInv_SlotAvailability),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailability ***********************************************

// ********** Begin ScriptStruct FInv_SlotAvailabilityResult ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult;
class UScriptStruct* FInv_SlotAvailabilityResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("Inv_SlotAvailabilityResult"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x95\xb4\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe5\xaf\xb9\xe2\x80\x9c\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe2\x80\x9d\xe7\x9a\x84\xe5\x9b\x9e\xe7\xad\x94\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe4\xbf\x9d\xe5\xad\x98\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9b\xae\xe6\xa0\x87 Item\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\x80\xbb\xe5\x85\xb1\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91 TotalRoomToFill\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\x94\xbe\xe4\xb8\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x89\xa9\xe4\xbd\x99\xe6\x95\xb0\xe9\x87\x8f Remainder\n * \xe4\xbf\x9d\xe5\xad\x98\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0 bStackable\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x9b\xb8\xe5\x85\xb3\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84 FInv_SlotAvailability\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xa1\xe7\xae\x97\xe7\xa9\xba\xe9\x97\xb4\xef\xbc\x9b\xe8\xae\xa1\xe7\xae\x97\xe9\x80\xbb\xe8\xbe\x91\xe5\xba\x94\xe7\x94\xb1 BagBase/SpatialBag/BagGrid \xe5\xae\x8c\xe6\x88\x90\n * \xe8\x87\xaa\xe5\xb7\xb1\xe4\xbf\xae\xe6\x94\xb9\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xb7\xe6\x96\xb0 UI\n * \xe8\x87\xaa\xe5\xb7\xb1\xe6\x89\xa7\xe8\xa1\x8c\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\n */" },
#endif
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb4\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe5\xaf\xb9\xe2\x80\x9c\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe2\x80\x9d\xe7\x9a\x84\xe5\x9b\x9e\xe7\xad\x94\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe4\xbf\x9d\xe5\xad\x98\xe5\x8f\xaf\xe5\x8f\xa0\xe5\x8a\xa0\xe7\x9b\xae\xe6\xa0\x87 Item\n\xe4\xbf\x9d\xe5\xad\x98\xe6\x80\xbb\xe5\x85\xb1\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91 TotalRoomToFill\n\xe4\xbf\x9d\xe5\xad\x98\xe6\x94\xbe\xe4\xb8\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x89\xa9\xe4\xbd\x99\xe6\x95\xb0\xe9\x87\x8f Remainder\n\xe4\xbf\x9d\xe5\xad\x98\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0 bStackable\n\xe4\xbf\x9d\xe5\xad\x98\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x9b\xb8\xe5\x85\xb3\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84 FInv_SlotAvailability\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xa1\xe7\xae\x97\xe7\xa9\xba\xe9\x97\xb4\xef\xbc\x9b\xe8\xae\xa1\xe7\xae\x97\xe9\x80\xbb\xe8\xbe\x91\xe5\xba\x94\xe7\x94\xb1 BagBase/SpatialBag/BagGrid \xe5\xae\x8c\xe6\x88\x90\n\xe8\x87\xaa\xe5\xb7\xb1\xe4\xbf\xae\xe6\x94\xb9\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xb7\xe6\x96\xb0 UI\n\xe8\x87\xaa\xe5\xb7\xb1\xe6\x89\xa7\xe8\xa1\x8c\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailabilityResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailabilityResult",
	nullptr,
	0,
	sizeof(FInv_SlotAvailabilityResult),
	alignof(FInv_SlotAvailabilityResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailabilityResult *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInv_ItemCategory_StaticEnum, TEXT("EInv_ItemCategory"), &Z_Registration_Info_UEnum_EInv_ItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 958983591U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_SlotAvailability::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::NewStructOps, TEXT("Inv_SlotAvailability"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailability), 176765484U) },
		{ FInv_SlotAvailabilityResult::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::NewStructOps, TEXT("Inv_SlotAvailabilityResult"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailabilityResult), 4043336565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_1852176015(TEXT("/Script/BagSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
