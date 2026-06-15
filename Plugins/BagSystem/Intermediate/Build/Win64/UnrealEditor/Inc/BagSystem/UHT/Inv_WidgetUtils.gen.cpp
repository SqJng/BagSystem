// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Utils/Inv_WidgetUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_WidgetUtils() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_WidgetUtils();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_WidgetUtils *********************************************************
void UInv_WidgetUtils::StaticRegisterNativesUInv_WidgetUtils()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_WidgetUtils;
UClass* UInv_WidgetUtils::GetPrivateStaticClass()
{
	using TClass = UInv_WidgetUtils;
	if (!Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_WidgetUtils"),
			Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton,
			StaticRegisterNativesUInv_WidgetUtils,
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
	return Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister()
{
	return UInv_WidgetUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_WidgetUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85 UI \xe7\x9a\x84\xe5\xb0\x8f\xe5\xb7\xa5\xe5\x85\xb7\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * GetIndexFromPosition\n * \xe6\x8a\x8a\xe4\xba\x8c\xe7\xbb\xb4\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 Position(X, Y) \xe8\xbd\xac\xe6\x88\x90\xe4\xb8\x80\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\x8b\xe6\xa0\x87\n * \xe5\xbd\x93\xe5\x89\x8d\xe5\x85\xac\xe5\xbc\x8f\xe6\x98\xaf X + Y * Columns\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe6\x8a\x8a\xe4\xb8\x8b\xe6\xa0\x87\xe8\xbd\xac\xe5\x9b\x9e\xe4\xba\x8c\xe7\xbb\xb4\xe5\x9d\x90\xe6\xa0\x87\n * \xe6\x8b\x96\xe6\x8b\xbd\xe6\x97\xb6\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe6\x8d\xa2\xe7\xae\x97\n * \xe6\xa0\xbc\xe5\xad\x90\xe8\x8c\x83\xe5\x9b\xb4\xe5\x88\xa4\xe6\x96\xad\n * \xe6\xa0\xbc\xe5\xad\x90\xe7\xa2\xb0\xe6\x92\x9e/\xe5\x8d\xa0\xe7\x94\xa8\xe6\xa3\x80\xe6\xb5\x8b\n */" },
#endif
		{ "IncludePath", "Widgets/Utils/Inv_WidgetUtils.h" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85 UI \xe7\x9a\x84\xe5\xb0\x8f\xe5\xb7\xa5\xe5\x85\xb7\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\nGetIndexFromPosition\n\xe6\x8a\x8a\xe4\xba\x8c\xe7\xbb\xb4\xe6\xa0\xbc\xe5\xad\x90\xe5\x9d\x90\xe6\xa0\x87 Position(X, Y) \xe8\xbd\xac\xe6\x88\x90\xe4\xb8\x80\xe7\xbb\xb4\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\x8b\xe6\xa0\x87\n\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\xac\xe5\xbc\x8f\xe6\x98\xaf X + Y * Columns\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe6\x8a\x8a\xe4\xb8\x8b\xe6\xa0\x87\xe8\xbd\xac\xe5\x9b\x9e\xe4\xba\x8c\xe7\xbb\xb4\xe5\x9d\x90\xe6\xa0\x87\n\xe6\x8b\x96\xe6\x8b\xbd\xe6\x97\xb6\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe6\x8d\xa2\xe7\xae\x97\n\xe6\xa0\xbc\xe5\xad\x90\xe8\x8c\x83\xe5\x9b\xb4\xe5\x88\xa4\xe6\x96\xad\n\xe6\xa0\xbc\xe5\xad\x90\xe7\xa2\xb0\xe6\x92\x9e/\xe5\x8d\xa0\xe7\x94\xa8\xe6\xa3\x80\xe6\xb5\x8b" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_WidgetUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams = {
	&UInv_WidgetUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_WidgetUtils()
{
	if (!Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton, Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton;
}
UInv_WidgetUtils::UInv_WidgetUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_WidgetUtils);
UInv_WidgetUtils::~UInv_WidgetUtils() {}
// ********** End Class UInv_WidgetUtils ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_WidgetUtils, UInv_WidgetUtils::StaticClass, TEXT("UInv_WidgetUtils"), &Z_Registration_Info_UClass_UInv_WidgetUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_WidgetUtils), 3594233071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_BagSystem_674219724(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
