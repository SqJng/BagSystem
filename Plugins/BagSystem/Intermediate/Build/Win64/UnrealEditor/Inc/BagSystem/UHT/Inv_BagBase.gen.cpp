// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Bag/BagBase/Inv_BagBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_BagBase() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagBase();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_BagBase *************************************************************
void UInv_BagBase::StaticRegisterNativesUInv_BagBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_BagBase;
UClass* UInv_BagBase::GetPrivateStaticClass()
{
	using TClass = UInv_BagBase;
	if (!Z_Registration_Info_UClass_UInv_BagBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_BagBase"),
			Z_Registration_Info_UClass_UInv_BagBase.InnerSingleton,
			StaticRegisterNativesUInv_BagBase,
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
	return Z_Registration_Info_UClass_UInv_BagBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_BagBase_NoRegister()
{
	return UInv_BagBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_BagBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95 UI \xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xbb\x99 BagComponent \xe6\x8c\x81\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x9f\xe4\xb8\x80\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe7\xbb\xa7\xe6\x89\xbf UUserWidget\n * \xe4\xbd\x9c\xe4\xb8\xba\xe4\xb8\x8d\xe5\x90\x8c\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\xe7\x9a\x84\xe5\x85\xb1\xe5\x90\x8c\xe7\x88\xb6\xe7\xb1\xbb\n * \xe6\x8f\x90\xe4\xbe\x9b\xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0 HasRoomForItem\n * \xe9\xbb\x98\xe8\xae\xa4 HasRoomForItem \xe8\xbf\x94\xe5\x9b\x9e\xe7\xa9\xba\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe2\x80\x9c\xe5\x9f\xba\xe7\xb1\xbb\xe8\x87\xaa\xe5\xb7\xb1\xe4\xb8\x8d\xe8\xae\xa1\xe7\xae\x97\xe7\xa9\xba\xe9\x97\xb4\xe2\x80\x9d\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe7\x94\x9f\xe6\x88\x90\xe6\xa0\xbc\xe5\xad\x90\n * \xe4\xbf\x9d\xe5\xad\x98\xe7\x89\xa9\xe5\x93\x81\n * \xe5\x88\x86\xe7\xb1\xbb\xe5\x88\x87\xe6\x8d\xa2\n * \xe5\x85\xb7\xe4\xbd\x93\xe7\xa9\xba\xe9\x97\xb4\xe8\xae\xa1\xe7\xae\x97\n * \xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe5\x88\xb7\xe6\x96\xb0 UI\n */" },
#endif
		{ "IncludePath", "Widgets/Bag/BagBase/Inv_BagBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/BagBase/Inv_BagBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95 UI \xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xbb\x99 BagComponent \xe6\x8c\x81\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x9f\xe4\xb8\x80\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe7\xbb\xa7\xe6\x89\xbf UUserWidget\n\xe4\xbd\x9c\xe4\xb8\xba\xe4\xb8\x8d\xe5\x90\x8c\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\xe7\x9a\x84\xe5\x85\xb1\xe5\x90\x8c\xe7\x88\xb6\xe7\xb1\xbb\n\xe6\x8f\x90\xe4\xbe\x9b\xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0 HasRoomForItem\n\xe9\xbb\x98\xe8\xae\xa4 HasRoomForItem \xe8\xbf\x94\xe5\x9b\x9e\xe7\xa9\xba\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe2\x80\x9c\xe5\x9f\xba\xe7\xb1\xbb\xe8\x87\xaa\xe5\xb7\xb1\xe4\xb8\x8d\xe8\xae\xa1\xe7\xae\x97\xe7\xa9\xba\xe9\x97\xb4\xe2\x80\x9d\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe7\x94\x9f\xe6\x88\x90\xe6\xa0\xbc\xe5\xad\x90\n\xe4\xbf\x9d\xe5\xad\x98\xe7\x89\xa9\xe5\x93\x81\n\xe5\x88\x86\xe7\xb1\xbb\xe5\x88\x87\xe6\x8d\xa2\n\xe5\x85\xb7\xe4\xbd\x93\xe7\xa9\xba\xe9\x97\xb4\xe8\xae\xa1\xe7\xae\x97\n\xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe5\x88\xb7\xe6\x96\xb0 UI" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_BagBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_BagBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_BagBase_Statics::ClassParams = {
	&UInv_BagBase::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_BagBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_BagBase()
{
	if (!Z_Registration_Info_UClass_UInv_BagBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_BagBase.OuterSingleton, Z_Construct_UClass_UInv_BagBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_BagBase.OuterSingleton;
}
UInv_BagBase::UInv_BagBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_BagBase);
UInv_BagBase::~UInv_BagBase() {}
// ********** End Class UInv_BagBase ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_BagBase_Inv_BagBase_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_BagBase, UInv_BagBase::StaticClass, TEXT("UInv_BagBase"), &Z_Registration_Info_UClass_UInv_BagBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_BagBase), 2667091973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_BagBase_Inv_BagBase_h__Script_BagSystem_4084133671(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_BagBase_Inv_BagBase_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_BagBase_Inv_BagBase_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
