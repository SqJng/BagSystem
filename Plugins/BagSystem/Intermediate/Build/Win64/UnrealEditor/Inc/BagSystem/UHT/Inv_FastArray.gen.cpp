// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BagManagement/FastArray/Inv_FastArray.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_FastArray() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_BagEntry();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_BagFastArray();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_BagEntry *****************************************************
static_assert(std::is_polymorphic<FInv_BagEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInv_BagEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_BagEntry;
class UScriptStruct* FInv_BagEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_BagEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_BagEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_BagEntry, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("Inv_BagEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_BagEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_BagEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FastArray \xe9\x87\x8c\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe6\x9d\xa1\xe7\x9b\xae\xe5\x8c\x85\xe8\xa3\x85\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe7\xbb\xa7\xe6\x89\xbf FFastArraySerializerItem\xef\xbc\x8c\xe6\xbb\xa1\xe8\xb6\xb3 UE FastArray \xe7\x9a\x84\xe6\x9d\xa1\xe7\x9b\xae\xe8\xa6\x81\xe6\xb1\x82\n * \xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x80\xe4\xb8\xaa UInv_BagItem \xe6\x8c\x87\xe9\x92\x88\n * \xe4\xbd\x9c\xe4\xb8\xba FInv_BagFastArray::Entries \xe9\x87\x8c\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84\xe5\x85\x83\xe7\xb4\xa0\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 SlotIndex\n * \xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f/\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0\n * \xe7\x89\xa9\xe5\x93\x81\xe5\x8d\xa0\xe7\x94\xa8\xe5\xb0\xba\xe5\xaf\xb8\n * \xe5\x8d\x95\xe4\xb8\xaa\xe6\x9d\xa1\xe7\x9b\xae\xe7\x9a\x84 UI \xe7\x8a\xb6\xe6\x80\x81\n * \xe7\x9b\xb4\xe6\x8e\xa5\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0\xe6\xa0\xbc\xe5\xad\x90\n */" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FastArray \xe9\x87\x8c\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe6\x9d\xa1\xe7\x9b\xae\xe5\x8c\x85\xe8\xa3\x85\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe7\xbb\xa7\xe6\x89\xbf FFastArraySerializerItem\xef\xbc\x8c\xe6\xbb\xa1\xe8\xb6\xb3 UE FastArray \xe7\x9a\x84\xe6\x9d\xa1\xe7\x9b\xae\xe8\xa6\x81\xe6\xb1\x82\n\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x80\xe4\xb8\xaa UInv_BagItem \xe6\x8c\x87\xe9\x92\x88\n\xe4\xbd\x9c\xe4\xb8\xba FInv_BagFastArray::Entries \xe9\x87\x8c\xe7\x9a\x84\xe6\x95\xb0\xe7\xbb\x84\xe5\x85\x83\xe7\xb4\xa0\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8b\xe6\xa0\x87 SlotIndex\n\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe9\x87\x8f/\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0\n\xe7\x89\xa9\xe5\x93\x81\xe5\x8d\xa0\xe7\x94\xa8\xe5\xb0\xba\xe5\xaf\xb8\n\xe5\x8d\x95\xe4\xb8\xaa\xe6\x9d\xa1\xe7\x9b\xae\xe7\x9a\x84 UI \xe7\x8a\xb6\xe6\x80\x81\n\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0\xe6\xa0\xbc\xe5\xad\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/BagManagement/FastArray/Inv_FastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_BagEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_BagEntry_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_BagEntry, Item), Z_Construct_UClass_UInv_BagItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_BagEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_BagEntry_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_BagEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"Inv_BagEntry",
	Z_Construct_UScriptStruct_FInv_BagEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagEntry_Statics::PropPointers),
	sizeof(FInv_BagEntry),
	alignof(FInv_BagEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_BagEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_BagEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_BagEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_BagEntry.InnerSingleton, Z_Construct_UScriptStruct_FInv_BagEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_BagEntry.InnerSingleton;
}
// ********** End ScriptStruct FInv_BagEntry *******************************************************

// ********** Begin ScriptStruct FInv_BagFastArray *************************************************
static_assert(std::is_polymorphic<FInv_BagFastArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInv_BagFastArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_BagFastArray;
class UScriptStruct* FInv_BagFastArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_BagFastArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_BagFastArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_BagFastArray, (UObject*)Z_Construct_UPackage__Script_BagSystem(), TEXT("Inv_BagFastArray"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_BagFastArray.OuterSingleton;
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInv_BagFastArray);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInv_BagFastArray);
#endif
struct Z_Construct_UScriptStruct_FInv_BagFastArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe7\xbb\x84\xe7\x9a\x84 FastArray \xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\xa4\x96\xe5\xa3\xb3\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe7\xbb\x84\xe7\x9a\x84 FastArray \xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe5\xa4\x96\xe5\xa3\xb3\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of items\n" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BagManagement/FastArray/Inv_FastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_BagFastArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInv_BagEntry, METADATA_PARAMS(0, nullptr) }; // 3678822245
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_BagFastArray, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3678822245
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_BagFastArray, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"Inv_BagFastArray",
	Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::PropPointers),
	sizeof(FInv_BagFastArray),
	alignof(FInv_BagFastArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_BagFastArray()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_BagFastArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_BagFastArray.InnerSingleton, Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_BagFastArray.InnerSingleton;
}
// ********** End ScriptStruct FInv_BagFastArray ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_FastArray_Inv_FastArray_h__Script_BagSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_BagEntry::StaticStruct, Z_Construct_UScriptStruct_FInv_BagEntry_Statics::NewStructOps, TEXT("Inv_BagEntry"), &Z_Registration_Info_UScriptStruct_FInv_BagEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_BagEntry), 3678822245U) },
		{ FInv_BagFastArray::StaticStruct, Z_Construct_UScriptStruct_FInv_BagFastArray_Statics::NewStructOps, TEXT("Inv_BagFastArray"), &Z_Registration_Info_UScriptStruct_FInv_BagFastArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_BagFastArray), 3824805418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_FastArray_Inv_FastArray_h__Script_BagSystem_1539453916(TEXT("/Script/BagSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_FastArray_Inv_FastArray_h__Script_BagSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_FastArray_Inv_FastArray_h__Script_BagSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
