// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/HUD/Inv_InfoMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InfoMessage() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_InfoMessage();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InfoMessage Function MessageHide ************************************
static FName NAME_UInv_InfoMessage_MessageHide = FName(TEXT("MessageHide"));
void UInv_InfoMessage::MessageHide()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_InfoMessage_MessageHide);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InfoMessage, nullptr, "MessageHide", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_InfoMessage_MessageHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_InfoMessage Function MessageHide **************************************

// ********** Begin Class UInv_InfoMessage Function MessageShow ************************************
static FName NAME_UInv_InfoMessage_MessageShow = FName(TEXT("MessageShow"));
void UInv_InfoMessage::MessageShow()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_InfoMessage_MessageShow);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InfoMessage, nullptr, "MessageShow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_InfoMessage_MessageShow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_InfoMessage Function MessageShow **************************************

// ********** Begin Class UInv_InfoMessage *********************************************************
void UInv_InfoMessage::StaticRegisterNativesUInv_InfoMessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InfoMessage;
UClass* UInv_InfoMessage::GetPrivateStaticClass()
{
	using TClass = UInv_InfoMessage;
	if (!Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InfoMessage"),
			Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton,
			StaticRegisterNativesUInv_InfoMessage,
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
	return Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister()
{
	return UInv_InfoMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InfoMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HUD \xe4\xb8\x8a\xe7\x9a\x84\xe4\xb8\xb4\xe6\x97\xb6\xe6\x8f\x90\xe7\xa4\xba\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe2\x80\x9c\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe2\x80\x9d\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe7\xbb\x91\xe5\xae\x9a Text_Message \xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\n * SetMessage \xe4\xbc\x9a\xe8\xae\xbe\xe7\xbd\xae\xe6\x98\xbe\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\n * MessageShow / MessageHide \xe4\xba\xa4\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x8a\xa8\xe7\x94\xbb\xe6\x88\x96\xe6\x98\xbe\xe9\x9a\x90\xe6\x95\x88\xe6\x9e\x9c\n * \xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x9a\xe6\x97\xb6\xe5\x99\xa8\xe8\x87\xaa\xe5\x8a\xa8\xe9\x9a\x90\xe8\x97\x8f\xe6\xb6\x88\xe6\x81\xaf\n * \xe6\x96\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x87\xba\xe7\x8e\xb0\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe7\xbd\xae\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe5\x86\xb3\xe5\xae\x9a\xe5\x85\xb7\xe4\xbd\x93\xe6\x98\xbe\xe7\xa4\xba\xe4\xbb\x80\xe4\xb9\x88\xe5\x86\x85\xe5\xae\xb9\n * \xe6\x8e\x92\xe9\x98\x9f\xe6\x98\xbe\xe7\xa4\xba\xe5\xa4\x9a\xe6\x9d\xa1\xe6\xb6\x88\xe6\x81\xaf\n * \xe5\x8c\xba\xe5\x88\x86\xe9\x94\x99\xe8\xaf\xaf/\xe6\x88\x90\xe5\x8a\x9f/\xe8\xad\xa6\xe5\x91\x8a\xe7\xad\x89\xe6\xa0\xb7\xe5\xbc\x8f\n * \xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\xe6\x88\x96\xe7\x89\xa9\xe5\x93\x81 UI \xe7\x9a\x84\xe4\xbb\xbb\xe4\xbd\x95\xe9\x80\xbb\xe8\xbe\x91\n */" },
#endif
		{ "IncludePath", "Widgets/HUD/Inv_InfoMessage.h" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD \xe4\xb8\x8a\xe7\x9a\x84\xe4\xb8\xb4\xe6\x97\xb6\xe6\x8f\x90\xe7\xa4\xba\xe6\xb6\x88\xe6\x81\xaf\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe2\x80\x9c\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xb6\xb3\xe2\x80\x9d\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe7\xbb\x91\xe5\xae\x9a Text_Message \xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\nSetMessage \xe4\xbc\x9a\xe8\xae\xbe\xe7\xbd\xae\xe6\x98\xbe\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\nMessageShow / MessageHide \xe4\xba\xa4\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xe5\x8a\xa8\xe7\x94\xbb\xe6\x88\x96\xe6\x98\xbe\xe9\x9a\x90\xe6\x95\x88\xe6\x9e\x9c\n\xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x9a\xe6\x97\xb6\xe5\x99\xa8\xe8\x87\xaa\xe5\x8a\xa8\xe9\x9a\x90\xe8\x97\x8f\xe6\xb6\x88\xe6\x81\xaf\n\xe6\x96\xb0\xe6\xb6\x88\xe6\x81\xaf\xe5\x87\xba\xe7\x8e\xb0\xe6\x97\xb6\xe4\xbc\x9a\xe9\x87\x8d\xe7\xbd\xae\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe5\x86\xb3\xe5\xae\x9a\xe5\x85\xb7\xe4\xbd\x93\xe6\x98\xbe\xe7\xa4\xba\xe4\xbb\x80\xe4\xb9\x88\xe5\x86\x85\xe5\xae\xb9\n\xe6\x8e\x92\xe9\x98\x9f\xe6\x98\xbe\xe7\xa4\xba\xe5\xa4\x9a\xe6\x9d\xa1\xe6\xb6\x88\xe6\x81\xaf\n\xe5\x8c\xba\xe5\x88\x86\xe9\x94\x99\xe8\xaf\xaf/\xe6\x88\x90\xe5\x8a\x9f/\xe8\xad\xa6\xe5\x91\x8a\xe7\xad\x89\xe6\xa0\xb7\xe5\xbc\x8f\n\xe8\x83\x8c\xe5\x8c\x85\xe6\xa0\xbc\xe5\xad\x90\xe6\x88\x96\xe7\x89\xa9\xe5\x93\x81 UI \xe7\x9a\x84\xe4\xbb\xbb\xe4\xbd\x95\xe9\x80\xbb\xe8\xbe\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageLifetime_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MessageLifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InfoMessage_MessageHide, "MessageHide" }, // 1406669127
		{ &Z_Construct_UFunction_UInv_InfoMessage_MessageShow, "MessageShow" }, // 297816447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InfoMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_Text_Message = { "Text_Message", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InfoMessage, Text_Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Message_MetaData), NewProp_Text_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_MessageLifetime = { "MessageLifetime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InfoMessage, MessageLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageLifetime_MetaData), NewProp_MessageLifetime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_Text_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_MessageLifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InfoMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InfoMessage_Statics::ClassParams = {
	&UInv_InfoMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InfoMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InfoMessage()
{
	if (!Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton, Z_Construct_UClass_UInv_InfoMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton;
}
UInv_InfoMessage::UInv_InfoMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InfoMessage);
UInv_InfoMessage::~UInv_InfoMessage() {}
// ********** End Class UInv_InfoMessage ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_InfoMessage_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InfoMessage, UInv_InfoMessage::StaticClass, TEXT("UInv_InfoMessage"), &Z_Registration_Info_UClass_UInv_InfoMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InfoMessage), 3611917325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_InfoMessage_h__Script_BagSystem_3613305228(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_InfoMessage_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_HUD_Inv_InfoMessage_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
