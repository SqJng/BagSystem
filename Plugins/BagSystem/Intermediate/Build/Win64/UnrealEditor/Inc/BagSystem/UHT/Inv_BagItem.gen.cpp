// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Inv_BagItem.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_BagItem() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_BagItem *************************************************************
void UInv_BagItem::StaticRegisterNativesUInv_BagItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_BagItem;
UClass* UInv_BagItem::GetPrivateStaticClass()
{
	using TClass = UInv_BagItem;
	if (!Z_Registration_Info_UClass_UInv_BagItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_BagItem"),
			Z_Registration_Info_UClass_UInv_BagItem.InnerSingleton,
			StaticRegisterNativesUInv_BagItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInv_BagItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_BagItem_NoRegister()
{
	return UInv_BagItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_BagItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe7\xbb\xa7\xe6\x89\xbf UObject\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xb7\xb2\xe7\xbb\x8f\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\xe5\xb1\x82\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\n * \xe7\x94\xa8 FInstancedStruct \xe4\xbf\x9d\xe5\xad\x98 FInv_ItemManifest\n * SetItemManifest \xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8a\x8a Manifest \xe5\xad\x98\xe8\xbf\x9b ItemManifest\n * ItemManifest \xe5\xb7\xb2\xe9\x80\x9a\xe8\xbf\x87 DOREPLIFETIME \xe5\xa4\x8d\xe5\x88\xb6\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe6\x8f\x90\xe4\xbe\x9b\xe8\xaf\xbb\xe5\x8f\x96 Manifest \xe7\x9a\x84\xe5\x85\xac\xe5\xbc\x80\xe6\x8e\xa5\xe5\x8f\xa3\n * \xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe3\x80\x81\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe6\x9c\x80\xe5\xa4\xa7\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0\xe7\xad\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\xad\x97\xe6\xae\xb5\n * \xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe6\x8b\x86\xe5\x88\x86\xe3\x80\x81\xe5\x90\x88\xe5\xb9\xb6\xe7\x89\xa9\xe5\x93\x81\n * \xe8\x87\xaa\xe5\xb7\xb1\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0 UI \xe6\xa0\xbc\xe5\xad\x90\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\xa4\x84\xe7\x90\x86\xe6\x8b\x96\xe6\x8b\xbd\n */" },
#endif
		{ "IncludePath", "Items/Inv_BagItem.h" },
		{ "ModuleRelativePath", "Public/Items/Inv_BagItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe7\xbb\xa7\xe6\x89\xbf UObject\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xb7\xb2\xe7\xbb\x8f\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\xe5\xb1\x82\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81\n\xe7\x94\xa8 FInstancedStruct \xe4\xbf\x9d\xe5\xad\x98 FInv_ItemManifest\nSetItemManifest \xe5\x8f\xaf\xe4\xbb\xa5\xe6\x8a\x8a Manifest \xe5\xad\x98\xe8\xbf\x9b ItemManifest\nItemManifest \xe5\xb7\xb2\xe9\x80\x9a\xe8\xbf\x87 DOREPLIFETIME \xe5\xa4\x8d\xe5\x88\xb6\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe6\x8f\x90\xe4\xbe\x9b\xe8\xaf\xbb\xe5\x8f\x96 Manifest \xe7\x9a\x84\xe5\x85\xac\xe5\xbc\x80\xe6\x8e\xa5\xe5\x8f\xa3\n\xe7\x89\xa9\xe5\x93\x81\xe5\x90\x8d\xe7\xa7\xb0\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe3\x80\x81\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe6\x9c\x80\xe5\xa4\xa7\xe5\xa0\x86\xe5\x8f\xa0\xe6\x95\xb0\xe7\xad\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\xad\x97\xe6\xae\xb5\n\xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe6\x8b\x86\xe5\x88\x86\xe3\x80\x81\xe5\x90\x88\xe5\xb9\xb6\xe7\x89\xa9\xe5\x93\x81\n\xe8\x87\xaa\xe5\xb7\xb1\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0 UI \xe6\xa0\xbc\xe5\xad\x90\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\xa4\x84\xe7\x90\x86\xe6\x8b\x96\xe6\x8b\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemManifest_MetaData[] = {
		{ "BaseStruct", "/Script/BagSystem.Inv_ItemManifest" },
		{ "Category", "Inv_BagItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8f\x92\xe4\xbb\xb6\xe5\x90\x8d\xe5\xad\x97.\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Inv_BagItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x92\xe4\xbb\xb6\xe5\x90\x8d\xe5\xad\x97.\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemManifest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_BagItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_BagItem_Statics::NewProp_ItemManifest = { "ItemManifest", nullptr, (EPropertyFlags)0x0040000000020021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagItem, ItemManifest), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemManifest_MetaData), NewProp_ItemManifest_MetaData) }; // 1627169465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_BagItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagItem_Statics::NewProp_ItemManifest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_BagItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_BagItem_Statics::ClassParams = {
	&UInv_BagItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_BagItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_BagItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_BagItem()
{
	if (!Z_Registration_Info_UClass_UInv_BagItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_BagItem.OuterSingleton, Z_Construct_UClass_UInv_BagItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_BagItem.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_BagItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ItemManifest(TEXT("ItemManifest"));
	const bool bIsValid = true
		&& Name_ItemManifest == ClassReps[(int32)ENetFields_Private::ItemManifest].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_BagItem"));
}
#endif
UInv_BagItem::UInv_BagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_BagItem);
UInv_BagItem::~UInv_BagItem() {}
// ********** End Class UInv_BagItem ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_BagItem, UInv_BagItem::StaticClass, TEXT("UInv_BagItem"), &Z_Registration_Info_UClass_UInv_BagItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_BagItem), 3034810174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h__Script_BagSystem_2991560052(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
