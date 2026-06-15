// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BagManagement/Utils/Inv_BagStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_BagStatics() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagComponent_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagStatics();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagStatics_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_BagStatics Function GetBagComponent *********************************
struct Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics
{
	struct Inv_BagStatics_eventGetBagComponent_Parms
	{
		const APlayerController* PlayerController;
		UInv_BagComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/BagManagement/Utils/Inv_BagStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagStatics_eventGetBagComponent_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagStatics_eventGetBagComponent_Parms, ReturnValue), Z_Construct_UClass_UInv_BagComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_BagStatics, nullptr, "GetBagComponent", Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::Inv_BagStatics_eventGetBagComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::Inv_BagStatics_eventGetBagComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_BagStatics_GetBagComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_BagStatics_GetBagComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_BagStatics::execGetBagComponent)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInv_BagComponent**)Z_Param__Result=UInv_BagStatics::GetBagComponent(Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class UInv_BagStatics Function GetBagComponent ***********************************

// ********** Begin Class UInv_BagStatics **********************************************************
void UInv_BagStatics::StaticRegisterNativesUInv_BagStatics()
{
	UClass* Class = UInv_BagStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBagComponent", &UInv_BagStatics::execGetBagComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_BagStatics;
UClass* UInv_BagStatics::GetPrivateStaticClass()
{
	using TClass = UInv_BagStatics;
	if (!Z_Registration_Info_UClass_UInv_BagStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_BagStatics"),
			Z_Registration_Info_UClass_UInv_BagStatics.InnerSingleton,
			StaticRegisterNativesUInv_BagStatics,
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
	return Z_Registration_Info_UClass_UInv_BagStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_BagStatics_NoRegister()
{
	return UInv_BagStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_BagStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe9\x9d\x99\xe6\x80\x81\xe5\xb7\xa5\xe5\x85\xb7\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe6\x8f\x90\xe4\xbe\x9b GetBagComponent\n * \xe4\xbb\x8e PlayerController \xe8\xba\xab\xe4\xb8\x8a\xe6\x9f\xa5\xe6\x89\xbe UInv_BagComponent\n * \xe6\x96\xb9\xe4\xbe\xbf HUD\xe3\x80\x81\xe8\x93\x9d\xe5\x9b\xbe\xe6\x88\x96\xe5\x85\xb6\xe4\xbb\x96 UI \xe4\xbb\xa3\xe7\xa0\x81\xe4\xb8\x8d\xe7\x94\xa8\xe9\x87\x8d\xe5\xa4\x8d\xe5\x86\x99 FindComponentByClass\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe5\x88\x9b\xe5\xbb\xba BagComponent\n * \xe4\xbf\x9d\xe5\xad\x98\xe5\x85\xa8\xe5\xb1\x80\xe8\x83\x8c\xe5\x8c\x85\xe7\x8a\xb6\xe6\x80\x81\n * \xe6\x9f\xa5\xe6\x89\xbe\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x81\xe6\xa0\xbc\xe5\xad\x90\xe3\x80\x81\xe5\x88\x86\xe7\xb1\xbb\n * \xe4\xbb\xbb\xe4\xbd\x95\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe9\x80\xbb\xe8\xbe\x91\n */" },
#endif
		{ "IncludePath", "BagManagement/Utils/Inv_BagStatics.h" },
		{ "ModuleRelativePath", "Public/BagManagement/Utils/Inv_BagStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe9\x9d\x99\xe6\x80\x81\xe5\xb7\xa5\xe5\x85\xb7\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe6\x8f\x90\xe4\xbe\x9b GetBagComponent\n\xe4\xbb\x8e PlayerController \xe8\xba\xab\xe4\xb8\x8a\xe6\x9f\xa5\xe6\x89\xbe UInv_BagComponent\n\xe6\x96\xb9\xe4\xbe\xbf HUD\xe3\x80\x81\xe8\x93\x9d\xe5\x9b\xbe\xe6\x88\x96\xe5\x85\xb6\xe4\xbb\x96 UI \xe4\xbb\xa3\xe7\xa0\x81\xe4\xb8\x8d\xe7\x94\xa8\xe9\x87\x8d\xe5\xa4\x8d\xe5\x86\x99 FindComponentByClass\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe5\x88\x9b\xe5\xbb\xba BagComponent\n\xe4\xbf\x9d\xe5\xad\x98\xe5\x85\xa8\xe5\xb1\x80\xe8\x83\x8c\xe5\x8c\x85\xe7\x8a\xb6\xe6\x80\x81\n\xe6\x9f\xa5\xe6\x89\xbe\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x81\xe6\xa0\xbc\xe5\xad\x90\xe3\x80\x81\xe5\x88\x86\xe7\xb1\xbb\n\xe4\xbb\xbb\xe4\xbd\x95\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe9\x80\xbb\xe8\xbe\x91" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_BagStatics_GetBagComponent, "GetBagComponent" }, // 3788812406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_BagStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_BagStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_BagStatics_Statics::ClassParams = {
	&UInv_BagStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_BagStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_BagStatics()
{
	if (!Z_Registration_Info_UClass_UInv_BagStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_BagStatics.OuterSingleton, Z_Construct_UClass_UInv_BagStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_BagStatics.OuterSingleton;
}
UInv_BagStatics::UInv_BagStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_BagStatics);
UInv_BagStatics::~UInv_BagStatics() {}
// ********** End Class UInv_BagStatics ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_BagStatics, UInv_BagStatics::StaticClass, TEXT("UInv_BagStatics"), &Z_Registration_Info_UClass_UInv_BagStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_BagStatics), 2586740925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h__Script_BagSystem_1310628323(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
