// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/HUD/Inv_HUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HUDWidget() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_HUDWidget();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HUDWidget Function HidePickupMessage ********************************
static FName NAME_UInv_HUDWidget_HidePickupMessage = FName(TEXT("HidePickupMessage"));
void UInv_HUDWidget::HidePickupMessage()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_HUDWidget_HidePickupMessage);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_HUDWidget, nullptr, "HidePickupMessage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_HUDWidget Function HidePickupMessage **********************************

// ********** Begin Class UInv_HUDWidget Function OnNoRoom *****************************************
struct Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_HUDWidget, nullptr, "OnNoRoom", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_HUDWidget::execOnNoRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNoRoom();
	P_NATIVE_END;
}
// ********** End Class UInv_HUDWidget Function OnNoRoom *******************************************

// ********** Begin Class UInv_HUDWidget Function ShowPickupMessage ********************************
struct Inv_HUDWidget_eventShowPickupMessage_Parms
{
	FString Message;
};
static FName NAME_UInv_HUDWidget_ShowPickupMessage = FName(TEXT("ShowPickupMessage"));
void UInv_HUDWidget::ShowPickupMessage(const FString& Message)
{
	Inv_HUDWidget_eventShowPickupMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_UInv_HUDWidget_ShowPickupMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe7\xb1\xbb\xef\xbc\x8c\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe7\xb1\xbb\xef\xbc\x8c\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_HUDWidget_eventShowPickupMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_HUDWidget, nullptr, "ShowPickupMessage", Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::PropPointers), sizeof(Inv_HUDWidget_eventShowPickupMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_HUDWidget_eventShowPickupMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_HUDWidget Function ShowPickupMessage **********************************

// ********** Begin Class UInv_HUDWidget ***********************************************************
void UInv_HUDWidget::StaticRegisterNativesUInv_HUDWidget()
{
	UClass* Class = UInv_HUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnNoRoom", &UInv_HUDWidget::execOnNoRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HUDWidget;
UClass* UInv_HUDWidget::GetPrivateStaticClass()
{
	using TClass = UInv_HUDWidget;
	if (!Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HUDWidget"),
			Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton,
			StaticRegisterNativesUInv_HUDWidget,
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
	return Z_Registration_Info_UClass_UInv_HUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister()
{
	return UInv_HUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x8e\xa9\xe5\xae\xb6 HUD \xe6\xa0\xb9\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe6\x8a\x8a\xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe6\x8f\x90\xe4\xbe\x9b ShowPickupMessage / HidePickupMessage \xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n * \xe7\xbb\x91\xe5\xae\x9a InfoMessage \xe5\xad\x90\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xb4\xe6\x97\xb6\xe6\x96\x87\xe5\xad\x97\xe6\xb6\x88\xe6\x81\xaf\n * NativeOnInitialized \xe4\xb8\xad\xe9\x80\x9a\xe8\xbf\x87 UInv_BagStatics \xe8\x8e\xb7\xe5\x8f\x96 BagComponent\n * \xe7\x9b\x91\xe5\x90\xac BagComponent->NoRoomInBag\n * \xe6\xb2\xa1\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 InfoMessage->SetMessage \xe6\x98\xbe\xe7\xa4\xba\xe2\x80\x9c\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe2\x80\x9d\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n * \xe8\x87\xaa\xe5\xb7\xb1\xe7\x94\x9f\xe6\x88\x90\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\n * \xe8\x87\xaa\xe5\xb7\xb1\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87/\xe6\x95\xb0\xe9\x87\x8f\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xa4\xe6\x96\xad\xe8\x83\x8c\xe5\x8c\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\xa9\xba\xe9\x97\xb4\n */" },
#endif
		{ "IncludePath", "Widgets/HUD/Inv_HUDWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6 HUD \xe6\xa0\xb9\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe6\x8a\x8a\xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x98\xbe\xe7\xa4\xba\xe5\x88\xb0\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\x8a\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe6\x8f\x90\xe4\xbe\x9b ShowPickupMessage / HidePickupMessage \xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n\xe7\xbb\x91\xe5\xae\x9a InfoMessage \xe5\xad\x90\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xb4\xe6\x97\xb6\xe6\x96\x87\xe5\xad\x97\xe6\xb6\x88\xe6\x81\xaf\nNativeOnInitialized \xe4\xb8\xad\xe9\x80\x9a\xe8\xbf\x87 UInv_BagStatics \xe8\x8e\xb7\xe5\x8f\x96 BagComponent\n\xe7\x9b\x91\xe5\x90\xac BagComponent->NoRoomInBag\n\xe6\xb2\xa1\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 InfoMessage->SetMessage \xe6\x98\xbe\xe7\xa4\xba\xe2\x80\x9c\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe2\x80\x9d\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n\xe8\x87\xaa\xe5\xb7\xb1\xe7\x94\x9f\xe6\x88\x90\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\n\xe8\x87\xaa\xe5\xb7\xb1\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87/\xe6\x95\xb0\xe9\x87\x8f\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\xa4\xe6\x96\xad\xe8\x83\x8c\xe5\x8c\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\xa9\xba\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoMessage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_HUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_HUDWidget_HidePickupMessage, "HidePickupMessage" }, // 2446603849
		{ &Z_Construct_UFunction_UInv_HUDWidget_OnNoRoom, "OnNoRoom" }, // 267526390
		{ &Z_Construct_UFunction_UInv_HUDWidget_ShowPickupMessage, "ShowPickupMessage" }, // 142888645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HUDWidget_Statics::NewProp_InfoMessage = { "InfoMessage", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HUDWidget, InfoMessage), Z_Construct_UClass_UInv_InfoMessage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoMessage_MetaData), NewProp_InfoMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HUDWidget_Statics::NewProp_InfoMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HUDWidget_Statics::ClassParams = {
	&UInv_HUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_HUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HUDWidget()
{
	if (!Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton, Z_Construct_UClass_UInv_HUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HUDWidget.OuterSingleton;
}
UInv_HUDWidget::UInv_HUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HUDWidget);
UInv_HUDWidget::~UInv_HUDWidget() {}
// ********** End Class UInv_HUDWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_HUDWidget_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HUDWidget, UInv_HUDWidget::StaticClass, TEXT("UInv_HUDWidget"), &Z_Registration_Info_UClass_UInv_HUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HUDWidget), 3951831553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_HUDWidget_h__Script_BagSystem_2730928468(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_HUDWidget_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_HUDWidget_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
