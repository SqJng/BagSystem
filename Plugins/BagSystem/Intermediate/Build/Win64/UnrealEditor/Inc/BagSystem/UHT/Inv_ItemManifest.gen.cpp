// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemManifest() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UEnum* Z_Construct_UEnum_BagSystem_EInv_ItemCategory();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_ItemManifest *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ItemManifest;
class UScriptStruct* FInv_ItemManifest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ItemManifest, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("Inv_ItemManifest"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ItemManifest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe6\xb8\x85\xe5\x8d\x95/\xe7\x89\xa9\xe5\x93\x81\xe8\xaf\xb4\xe6\x98\x8e\xe4\xb9\xa6\xef\xbc\x8c\xe7\x94\xa8\xe6\x9d\xa5\xe6\x8f\x8f\xe8\xbf\xb0\xe2\x80\x9c\xe5\x9c\xb0\xe4\xb8\x8a\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe5\xba\x94\xe8\xaf\xa5\xe7\x94\x9f\xe6\x88\x90\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\xb8\x85\xe5\x8d\x95/\xe7\x89\xa9\xe5\x93\x81\xe8\xaf\xb4\xe6\x98\x8e\xe4\xb9\xa6\xef\xbc\x8c\xe7\x94\xa8\xe6\x9d\xa5\xe6\x8f\x8f\xe8\xbf\xb0\xe2\x80\x9c\xe5\x9c\xb0\xe4\xb8\x8a\xe8\xbf\x99\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe5\xba\x94\xe8\xaf\xa5\xe7\x94\x9f\xe6\x88\x90\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "BaseStruct", "/Script/BagSystem.Inv_ItemFragment" },
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\x87\xe6\xae\xb5\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82\xe9\x80\x9a\xe8\xbf\x87\xe4\xb8\x8d\xe5\x90\x8c\xe7\x89\x87\xe6\xae\xb5\xe4\xb8\xba\xe7\x89\xa9\xe5\x93\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe6\xa0\xbc\xe5\xad\x90\xe7\x89\x87\xe6\xae\xb5\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\x89\x87\xe6\xae\xb5\xe3\x80\x81\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\x87\xe6\xae\xb5\xe7\xad\x89\xe3\x80\x82\xe4\xb8\xba\xe4\xba\x86\xe6\x96\xb9\xe4\xbe\xbf""BagItem\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb8\x85\xe5\x8d\x95\xe9\x87\x8c\xe7\x9a\x84\xe7\x89\x87\xe6\xae\xb5\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x89\x87\xe6\xae\xb5\xe9\x83\xbd\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84Tag\xef\xbc\x8c\n//ExcludeBaseStruct\xe8\xbf\x99\xe4\xb8\xaa\xe5\xb1\x9e\xe6\x80\xa7\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaa\xe8\x83\xbd\xe7\xbc\x96\xe8\xbe\x91\xe5\xad\x90\xe7\xb1\xbb\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\x87\xe6\xae\xb5\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82\xe9\x80\x9a\xe8\xbf\x87\xe4\xb8\x8d\xe5\x90\x8c\xe7\x89\x87\xe6\xae\xb5\xe4\xb8\xba\xe7\x89\xa9\xe5\x93\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe6\xa0\xbc\xe5\xad\x90\xe7\x89\x87\xe6\xae\xb5\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\x89\x87\xe6\xae\xb5\xe3\x80\x81\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\x87\xe6\xae\xb5\xe7\xad\x89\xe3\x80\x82\xe4\xb8\xba\xe4\xba\x86\xe6\x96\xb9\xe4\xbe\xbf""BagItem\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb8\x85\xe5\x8d\x95\xe9\x87\x8c\xe7\x9a\x84\xe7\x89\x87\xe6\xae\xb5\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x89\x87\xe6\xae\xb5\xe9\x83\xbd\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84Tag\xef\xbc\x8c\nExcludeBaseStruct\xe8\xbf\x99\xe4\xb8\xaa\xe5\xb1\x9e\xe6\x80\xa7\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x8f\xaa\xe8\x83\xbd\xe7\xbc\x96\xe8\xbe\x91\xe5\xad\x90\xe7\xb1\xbb\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x83\xb3\xe8\xa6\x81\xe5\xa4\x9a\xe5\xb0\x91\xe7\x89\x87\xe6\xae\xb5\xe8\x87\xaa\xe5\xb7\xb1\xe6\x8c\x82\xe5\x93\x88\xe5\x93\x88\xef\xbc\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x83\xb3\xe8\xa6\x81\xe5\xa4\x9a\xe5\xb0\x91\xe7\x89\x87\xe6\xae\xb5\xe8\x87\xaa\xe5\xb7\xb1\xe6\x8c\x82\xe5\x93\x88\xe5\x93\x88\xef\xbc\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4 None\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x88\x86\xe7\xb1\xbb\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4 None" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ItemManifest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) }; // 1627169465
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, ItemCategory), Z_Construct_UEnum_BagSystem_EInv_ItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 2885190001
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, ItemType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
	nullptr,
	&NewStructOps,
	"Inv_ItemManifest",
	Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers),
	sizeof(FInv_ItemManifest),
	alignof(FInv_ItemManifest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton, Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton;
}
// ********** End ScriptStruct FInv_ItemManifest ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Manifest_Inv_ItemManifest_h__Script_BagSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_ItemManifest::StaticStruct, Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewStructOps, TEXT("Inv_ItemManifest"), &Z_Registration_Info_UScriptStruct_FInv_ItemManifest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ItemManifest), 1009975245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Manifest_Inv_ItemManifest_h__Script_BagSystem_2749569165(TEXT("/Script/BagSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Manifest_Inv_ItemManifest_h__Script_BagSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Manifest_Inv_ItemManifest_h__Script_BagSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
