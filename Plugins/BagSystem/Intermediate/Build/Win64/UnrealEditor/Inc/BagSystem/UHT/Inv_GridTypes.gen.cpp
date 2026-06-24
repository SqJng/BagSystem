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
		{ "Comment", "/**\n * \xe4\xb8\x89\xe7\xb1\xbb\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\n */" },
#endif
		{ "Consumable.Name", "EInv_ItemCategory::Consumable" },
		{ "Craftable.Name", "EInv_ItemCategory::Craftable" },
		{ "Equippable.Name", "EInv_ItemCategory::Equippable" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_ItemCategory::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x89\xe7\xb1\xbb\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81" },
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
		{ "Comment", "/**\n * \xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8f\xaf\xe7\x94\xa8\xe7\xa9\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x9c\xe3\x80\x82\n * \n * \xe8\xae\xb0\xe5\xbd\x95\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 Index\n * \n * \xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81 AmountToFill\n * \n * \xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81 bItemAtIndex\n *\n *///\xe6\xa0\xbc\xe5\xad\x90\xe7\xbb\x93\xe6\x9e\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe7\x9a\x84\xe5\x8f\xaf\xe7\x94\xa8\xe7\xa9\xba\xe9\x97\xb4\xe7\xbb\x93\xe6\x9e\x9c\xe3\x80\x82\n\n\xe8\xae\xb0\xe5\xbd\x95\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 Index\n\n\xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xbf\x98\xe8\x83\xbd\xe5\xa1\xab\xe5\x85\xa5\xe5\xa4\x9a\xe5\xb0\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81 AmountToFill\n\n\xe8\xae\xb0\xe5\xbd\x95\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe6\x9c\x89\xe7\x89\xa9\xe5\x93\x81 bItemAtIndex\n\n //\xe6\xa0\xbc\xe5\xad\x90\xe7\xbb\x93\xe6\x9e\x84" },
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
		{ "Comment", "/**\n * \xe6\x95\xb4\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe5\xaf\xb9\xe2\x80\x9c\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe2\x80\x9d\xe7\x9a\x84\xe5\x9b\x9e\xe7\xad\x94\xef\xbc\x8c\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n *\n * \xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88\xe6\x8c\x87\xe5\x90\x91Item\n *\n * TotalRoomToFill \xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe6\x80\xbb\xe5\x85\xb1\xe8\xbf\x98\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\n *\n * Remainder \xe5\xa6\x82\xe6\x9e\x9c TotalRoomToFill \xe4\xb8\x8d\xe8\xb6\xb3\xe4\xbb\xa5\xe5\xae\x8c\xe5\x85\xa8\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe8\xbf\x98\xe6\x9c\x89\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe6\x94\xbe\xe4\xb8\x8d\xe4\xb8\x8b\xe4\xba\x86\n *\n * bStackable \xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\n *\n * \xe9\x87\x8c\xe9\x9d\xa2\xe5\x8c\x85\xe5\x90\xabTArray<FInv_SlotAvailability> SlotAvailabilities;\n */" },
#endif
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb4\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe5\xaf\xb9\xe2\x80\x9c\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe2\x80\x9d\xe7\x9a\x84\xe5\x9b\x9e\xe7\xad\x94\xef\xbc\x8c\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n\n\xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88\xe6\x8c\x87\xe5\x90\x91Item\n\nTotalRoomToFill \xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe6\x80\xbb\xe5\x85\xb1\xe8\xbf\x98\xe8\x83\xbd\xe6\x94\xbe\xe4\xb8\x8b\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe5\x93\x81\n\nRemainder \xe5\xa6\x82\xe6\x9e\x9c TotalRoomToFill \xe4\xb8\x8d\xe8\xb6\xb3\xe4\xbb\xa5\xe5\xae\x8c\xe5\x85\xa8\xe6\x94\xbe\xe4\xb8\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe8\xbf\x98\xe6\x9c\x89\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe6\x94\xbe\xe4\xb8\x8d\xe4\xb8\x8b\xe4\xba\x86\n\nbStackable \xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\n\n\xe9\x87\x8c\xe9\x9d\xa2\xe5\x8c\x85\xe5\x90\xabTArray<FInv_SlotAvailability> SlotAvailabilities;" },
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
		{ EInv_ItemCategory_StaticEnum, TEXT("EInv_ItemCategory"), &Z_Registration_Info_UEnum_EInv_ItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2885190001U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_SlotAvailability::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::NewStructOps, TEXT("Inv_SlotAvailability"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailability), 798364670U) },
		{ FInv_SlotAvailabilityResult::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::NewStructOps, TEXT("Inv_SlotAvailabilityResult"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailabilityResult), 997438250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_2459563900(TEXT("/Script/BagSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Types_Inv_GridTypes_h__Script_BagSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
