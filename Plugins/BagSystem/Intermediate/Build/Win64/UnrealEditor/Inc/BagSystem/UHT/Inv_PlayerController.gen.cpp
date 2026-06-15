// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/Inv_PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_PlayerController() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_AInv_PlayerController();
BAGSYSTEM_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInv_PlayerController Function ToggleBag *********************************
struct Z_Construct_UFunction_AInv_PlayerController_ToggleBag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x80\xe5\x85\xb3\xe8\x83\x8c\xe5\x8c\x85\xef\xbc\x8c\xe7\x8e\xa9\xe5\xae\xb6\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae\xe3\x80\x81\xe2\x80\x98x'\xe6\x8c\x89\xe9\x94\xae\xe9\x83\xbd\xe6\x98\xaf\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\x87\xbd\xe6\x95\xb0\xe9\x87\x8c\xe5\x8f\xaa\xe5\x81\x9a\xe4\xba\x86\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84""bOpen\xe5\x8f\x98\xe9\x87\x8f\xe5\x88\x87\xe6\x8d\xa2\xe3\x80\x81\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe5\x8f\xaf\xe8\xa7\x81\xe5\x92\x8c\xe5\x85\xb3\xe9\x97\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x85\xb3\xe8\x83\x8c\xe5\x8c\x85\xef\xbc\x8c\xe7\x8e\xa9\xe5\xae\xb6\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\xbf\xab\xe6\x8d\xb7\xe9\x94\xae\xe3\x80\x81\xe2\x80\x98x'\xe6\x8c\x89\xe9\x94\xae\xe9\x83\xbd\xe6\x98\xaf\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\x87\xbd\xe6\x95\xb0\xe9\x87\x8c\xe5\x8f\xaa\xe5\x81\x9a\xe4\xba\x86\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84""bOpen\xe5\x8f\x98\xe9\x87\x8f\xe5\x88\x87\xe6\x8d\xa2\xe3\x80\x81\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe5\x8f\xaf\xe8\xa7\x81\xe5\x92\x8c\xe5\x85\xb3\xe9\x97\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInv_PlayerController_ToggleBag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInv_PlayerController, nullptr, "ToggleBag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInv_PlayerController_ToggleBag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInv_PlayerController_ToggleBag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInv_PlayerController_ToggleBag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInv_PlayerController_ToggleBag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInv_PlayerController::execToggleBag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleBag();
	P_NATIVE_END;
}
// ********** End Class AInv_PlayerController Function ToggleBag ***********************************

// ********** Begin Class AInv_PlayerController ****************************************************
void AInv_PlayerController::StaticRegisterNativesAInv_PlayerController()
{
	UClass* Class = AInv_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleBag", &AInv_PlayerController::execToggleBag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInv_PlayerController;
UClass* AInv_PlayerController::GetPrivateStaticClass()
{
	using TClass = AInv_PlayerController;
	if (!Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_PlayerController"),
			Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton,
			StaticRegisterNativesAInv_PlayerController,
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
	return Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister()
{
	return AInv_PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInv_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe2\x80\x9c\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe2\x80\x9d\xe5\x92\x8c\xe2\x80\x9c\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9c\x8b\xe5\x90\x91\xe4\xba\x86\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d\xe8\xbf\x99\xe4\xb8\x80\xe5\xb1\x82\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * Enhanced Input \xe6\x98\xa0\xe5\xb0\x84\n * \xe5\x88\x9b\xe5\xbb\xba\xe6\x9c\xac\xe5\x9c\xb0 HUD\n * \xe6\xaf\x8f\xe5\xb8\xa7\xe4\xbb\x8e\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\xad\xe5\xbf\x83\xe5\x8f\x91\xe5\xb0\x84\xe6\xa3\x80\xe6\xb5\x8b\xe7\xba\xbf\n * \xe6\xa3\x80\xe6\xb5\x8b\xe5\x8f\xaf\xe9\xab\x98\xe4\xba\xae\xe7\x89\xa9\xe4\xbd\x93\xe5\xb9\xb6\xe8\xb0\x83\xe7\x94\xa8 Highlight / UnHighlight\n * \xe6\xa3\x80\xe6\xb5\x8b\xe5\x9c\xb0\xe4\xb8\x8a\xe5\x8f\xaf\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe5\xb9\xb6\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n * BeginPlay \xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x82\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe7\x9a\x84 BagComponent\n * \xe6\x8c\x89\xe9\x94\xae\xe6\x89\x93\xe5\xbc\x80/\xe5\x85\xb3\xe9\x97\xad\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n * PrimaryInteract \xe4\xbc\x9a\xe6\x8a\x8a\xe5\xbd\x93\xe5\x89\x8d\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84 ItemComponent \xe4\xba\xa4\xe7\xbb\x99 BagComponent->TryAddItem\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe8\x87\xaa\xe5\xb7\xb1\xe4\xbf\x9d\xe5\xad\x98\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xb7\xe6\x96\xb0\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90 UI\n * \xe6\x8b\xbe\xe5\x8f\x96\xe5\x90\x8e\xe7\x9a\x84 Actor \xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\n * \xe5\xae\x8c\xe6\x95\xb4\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x9d\x83\xe9\x99\x90\xe6\xa0\xa1\xe9\xaa\x8c\n * \xe6\x9b\xb4\xe7\xbb\x86\xe7\x9a\x84\xe6\x8b\xbe\xe5\x8f\x96\xe8\xb7\x9d\xe7\xa6\xbb/\xe8\xa7\x92\xe5\xba\xa6\xe8\xa7\x84\xe5\x88\x99\n *\n * \xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\n * \xe5\xbd\x93\xe5\x89\x8d\xe2\x80\x9c\xe6\x8c\x89\xe6\x8b\xbe\xe5\x8f\x96\xe9\x94\xae\xe2\x80\x9d\xe5\xb7\xb2\xe7\xbb\x8f\xe4\xbc\x9a\xe8\xbf\x9b\xe5\x85\xa5 BagComponent\xef\xbc\x8c\xe4\xbd\x86\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe7\x9c\x9f\xe6\xad\xa3\xe5\x85\xa5\xe5\x8c\x85\xe8\xbf\x98\xe5\x8f\x96\xe5\x86\xb3\xe4\xba\x8e BagComponent\xe3\x80\x81\n * BagBase/SpatialBag \xe5\x92\x8c FastArray \xe5\x90\x8e\xe7\xbb\xad\xe9\x80\xbb\xe8\xbe\x91\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x9e\xe7\x8e\xb0\xe5\xae\x8c\xe6\x95\xb4\xe3\x80\x82\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/Inv_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe2\x80\x9c\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe2\x80\x9d\xe5\x92\x8c\xe2\x80\x9c\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9c\x8b\xe5\x90\x91\xe4\xba\x86\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d\xe8\xbf\x99\xe4\xb8\x80\xe5\xb1\x82\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\nEnhanced Input \xe6\x98\xa0\xe5\xb0\x84\n\xe5\x88\x9b\xe5\xbb\xba\xe6\x9c\xac\xe5\x9c\xb0 HUD\n\xe6\xaf\x8f\xe5\xb8\xa7\xe4\xbb\x8e\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\xad\xe5\xbf\x83\xe5\x8f\x91\xe5\xb0\x84\xe6\xa3\x80\xe6\xb5\x8b\xe7\xba\xbf\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8f\xaf\xe9\xab\x98\xe4\xba\xae\xe7\x89\xa9\xe4\xbd\x93\xe5\xb9\xb6\xe8\xb0\x83\xe7\x94\xa8 Highlight / UnHighlight\n\xe6\xa3\x80\xe6\xb5\x8b\xe5\x9c\xb0\xe4\xb8\x8a\xe5\x8f\xaf\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe5\xb9\xb6\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\nBeginPlay \xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x82\xe5\x9c\xa8 PC \xe4\xb8\x8a\xe7\x9a\x84 BagComponent\n\xe6\x8c\x89\xe9\x94\xae\xe6\x89\x93\xe5\xbc\x80/\xe5\x85\xb3\xe9\x97\xad\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\nPrimaryInteract \xe4\xbc\x9a\xe6\x8a\x8a\xe5\xbd\x93\xe5\x89\x8d\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84 ItemComponent \xe4\xba\xa4\xe7\xbb\x99 BagComponent->TryAddItem\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe8\x87\xaa\xe5\xb7\xb1\xe4\xbf\x9d\xe5\xad\x98\xe8\x83\x8c\xe5\x8c\x85\xe6\x95\xb0\xe6\x8d\xae\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85\xe7\x89\xa9\xe5\x93\x81\xe5\xaf\xb9\xe8\xb1\xa1\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xb7\xe6\x96\xb0\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90 UI\n\xe6\x8b\xbe\xe5\x8f\x96\xe5\x90\x8e\xe7\x9a\x84 Actor \xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\n\xe5\xae\x8c\xe6\x95\xb4\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x9d\x83\xe9\x99\x90\xe6\xa0\xa1\xe9\xaa\x8c\n\xe6\x9b\xb4\xe7\xbb\x86\xe7\x9a\x84\xe6\x8b\xbe\xe5\x8f\x96\xe8\xb7\x9d\xe7\xa6\xbb/\xe8\xa7\x92\xe5\xba\xa6\xe8\xa7\x84\xe5\x88\x99\n\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\n\xe5\xbd\x93\xe5\x89\x8d\xe2\x80\x9c\xe6\x8c\x89\xe6\x8b\xbe\xe5\x8f\x96\xe9\x94\xae\xe2\x80\x9d\xe5\xb7\xb2\xe7\xbb\x8f\xe4\xbc\x9a\xe8\xbf\x9b\xe5\x85\xa5 BagComponent\xef\xbc\x8c\xe4\xbd\x86\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe7\x9c\x9f\xe6\xad\xa3\xe5\x85\xa5\xe5\x8c\x85\xe8\xbf\x98\xe5\x8f\x96\xe5\x86\xb3\xe4\xba\x8e BagComponent\xe3\x80\x81\nBagBase/SpatialBag \xe5\x92\x8c FastArray \xe5\x90\x8e\xe7\xbb\xad\xe9\x80\xbb\xe8\xbe\x91\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x9e\xe7\x8e\xb0\xe5\xae\x8c\xe6\x95\xb4\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIMCs_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x83\x8c\xe5\x8c\x85\xe6\x8c\x82\xe5\x9c\xa8PC\xe4\xb8\x8a\xef\xbc\x8c""BeginPlay()\xe9\x87\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\x8e\xb7\xe5\x8f\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe6\x8c\x82\xe5\x9c\xa8PC\xe4\xb8\x8a\xef\xbc\x8c""BeginPlay()\xe9\x87\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe8\x8e\xb7\xe5\x8f\x96" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBagAction_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleBagAction_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ui\xe6\x8c\x82\xe5\x9c\xa8PC\xe4\xb8\x8a\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ui\xe6\x8c\x82\xe5\x9c\xa8PC\xe4\xb8\x8a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTraceChannel_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultIMCs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryBagAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleBagAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TraceLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemTraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInv_PlayerController_ToggleBag, "ToggleBag" }, // 3999558597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs_Inner = { "DefaultIMCs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs = { "DefaultIMCs", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, DefaultIMCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIMCs_MetaData), NewProp_DefaultIMCs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryBagAction = { "PrimaryBagAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, PrimaryBagAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryBagAction_MetaData), NewProp_PrimaryBagAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ToggleBagAction = { "ToggleBagAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, ToggleBagAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleBagAction_MetaData), NewProp_ToggleBagAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidget), Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceLength_MetaData), NewProp_TraceLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel = { "ItemTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, ItemTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTraceChannel_MetaData), NewProp_ItemTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryBagAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ToggleBagAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams = {
	&AInv_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInv_PlayerController()
{
	if (!Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton, Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_PlayerController);
AInv_PlayerController::~AInv_PlayerController() {}
// ********** End Class AInv_PlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Player_Inv_PlayerController_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_PlayerController, AInv_PlayerController::StaticClass, TEXT("AInv_PlayerController"), &Z_Registration_Info_UClass_AInv_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_PlayerController), 2737269679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Player_Inv_PlayerController_h__Script_BagSystem_3791498910(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Player_Inv_PlayerController_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Player_Inv_PlayerController_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
