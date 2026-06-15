// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Bag/GridSlots/Inv_GridSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridSlot() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_GridSlot();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_GridSlot ************************************************************
void UInv_GridSlot::StaticRegisterNativesUInv_GridSlot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_GridSlot;
UClass* UInv_GridSlot::GetPrivateStaticClass()
{
	using TClass = UInv_GridSlot;
	if (!Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_GridSlot"),
			Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton,
			StaticRegisterNativesUInv_GridSlot,
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
	return Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister()
{
	return UInv_GridSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_GridSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe6\x8e\xa7\xe4\xbb\xb6\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe4\xbf\x9d\xe5\xad\x98 TileIndex\n * \xe6\x8f\x90\xe4\xbe\x9b SetTileIndex / GetTileIndex\n * \xe7\xbb\x91\xe5\xae\x9a Image_GridSlot \xe6\x98\xbe\xe7\xa4\xba\xe6\xa0\xbc\xe5\xad\x90\xe8\x83\x8c\xe6\x99\xaf\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe4\xbf\x9d\xe5\xad\x98 UInv_BagItem\n * \xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\n * \xe6\x98\xbe\xe7\xa4\xba\xe6\x95\xb0\xe9\x87\x8f\xe5\x92\x8c\xe5\x93\x81\xe8\xb4\xa8\xe8\xbe\xb9\xe6\xa1\x86\n * \xe7\x82\xb9\xe5\x87\xbb\xe3\x80\x81\xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe6\x82\xac\xe5\x81\x9c\xe6\x8f\x90\xe7\xa4\xba\n * \xe5\x88\xa4\xe6\x96\xad\xe6\xa0\xbc\xe5\xad\x90\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe7\x94\xa8\n */" },
#endif
		{ "IncludePath", "Widgets/Bag/GridSlots/Inv_GridSlot.h" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/GridSlots/Inv_GridSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe9\x87\x8c\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe6\x8e\xa7\xe4\xbb\xb6\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe4\xbf\x9d\xe5\xad\x98 TileIndex\n\xe6\x8f\x90\xe4\xbe\x9b SetTileIndex / GetTileIndex\n\xe7\xbb\x91\xe5\xae\x9a Image_GridSlot \xe6\x98\xbe\xe7\xa4\xba\xe6\xa0\xbc\xe5\xad\x90\xe8\x83\x8c\xe6\x99\xaf\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe4\xbf\x9d\xe5\xad\x98 UInv_BagItem\n\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\n\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\xb0\xe9\x87\x8f\xe5\x92\x8c\xe5\x93\x81\xe8\xb4\xa8\xe8\xbe\xb9\xe6\xa1\x86\n\xe7\x82\xb9\xe5\x87\xbb\xe3\x80\x81\xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe6\x82\xac\xe5\x81\x9c\xe6\x8f\x90\xe7\xa4\xba\n\xe5\x88\xa4\xe6\x96\xad\xe6\xa0\xbc\xe5\xad\x90\xe6\x98\xaf\xe5\x90\xa6\xe8\xa2\xab\xe5\x8d\xa0\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_GridSlot_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa0\xbc\xe5\xad\x90\xe5\x8f\xb7\xef\xbc\x8c""0\xe5\xbc\x80\xe5\xa7\x8b\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/GridSlots/Inv_GridSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe5\x8f\xb7\xef\xbc\x8c""0\xe5\xbc\x80\xe5\xa7\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_GridSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_GridSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot = { "Image_GridSlot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Image_GridSlot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_GridSlot_MetaData), NewProp_Image_GridSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams = {
	&UInv_GridSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_GridSlot()
{
	if (!Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton, Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton;
}
UInv_GridSlot::UInv_GridSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_GridSlot);
UInv_GridSlot::~UInv_GridSlot() {}
// ********** End Class UInv_GridSlot **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_GridSlots_Inv_GridSlot_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_GridSlot, UInv_GridSlot::StaticClass, TEXT("UInv_GridSlot"), &Z_Registration_Info_UClass_UInv_GridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_GridSlot), 1392038771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_GridSlots_Inv_GridSlot_h__Script_BagSystem_1426508455(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_GridSlots_Inv_GridSlot_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_GridSlots_Inv_GridSlot_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
