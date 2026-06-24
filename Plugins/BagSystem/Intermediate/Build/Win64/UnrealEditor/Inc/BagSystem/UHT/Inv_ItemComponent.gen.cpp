// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Items/Manifest/Inv_ItemManifest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemComponent() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_ItemComponent();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_ItemComponent *******************************************************
void UInv_ItemComponent::StaticRegisterNativesUInv_ItemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_ItemComponent;
UClass* UInv_ItemComponent::GetPrivateStaticClass()
{
	using TClass = UInv_ItemComponent;
	if (!Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_ItemComponent"),
			Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton,
			StaticRegisterNativesUInv_ItemComponent,
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
	return Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister()
{
	return UInv_ItemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_ItemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81 Actor \xe8\xba\xab\xe4\xb8\x8a\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe4\xbf\x9d\xe5\xad\x98\xe2\x80\x9c\xe8\xbf\x99\xe4\xb8\xaa\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe6\x8c\x82\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81 Actor \xe4\xb8\x8a\xef\xbc\x8c\xe4\xbe\x9b\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe8\xaf\x86\xe5\x88\xab\xe5\x8f\xaf\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\n * \xe4\xbf\x9d\xe5\xad\x98 PickupMessage\xef\xbc\x8c\xe7\xbb\x99 HUD \xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n * \xe4\xbf\x9d\xe5\xad\x98 FInv_ItemManifest\xef\xbc\x8c\xe6\x8f\x8f\xe8\xbf\xb0\xe7\x89\xa9\xe5\x93\x81\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe5\xba\x94\xe7\x94\x9f\xe6\x88\x90\xe4\xbb\x80\xe4\xb9\x88\xe6\x95\xb0\xe6\x8d\xae\n * \xe6\x8f\x90\xe4\xbe\x9b GetItemManifest\xef\xbc\x8c\xe8\xae\xa9 BagComponent/FastArray \xe5\x90\x8e\xe7\xbb\xad\xe5\x88\x9b\xe5\xbb\xba UInv_BagItem\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3/\xe8\xbf\x98\xe6\xb2\xa1\xe5\x81\x9a\xe5\xae\x8c\xe6\x95\xb4\xef\xbc\x9a\n * \xe8\x87\xaa\xe5\xb7\xb1\xe6\x8a\x8a\xe7\x89\xa9\xe5\x93\x81\xe5\x8a\xa0\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\n * \xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba UInv_BagItem\n * \xe6\x8b\xbe\xe5\x8f\x96\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\xe5\x9c\xb0\xe4\xb8\x8a Actor\n * \xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe3\x80\x81\xe5\x90\x8d\xe7\xa7\xb0\xe7\xad\x89\xe8\xaf\xa6\xe7\xbb\x86 Manifest \xe5\xad\x97\xe6\xae\xb5\xe7\x9b\xae\xe5\x89\x8d\xe8\xbf\x98\xe6\xb2\xa1\xe5\xb1\x95\xe5\xbc\x80\n * ItemManifest \xe8\x99\xbd\xe7\x84\xb6\xe6\xa0\x87\xe4\xba\x86 Replicated\xef\xbc\x8c\xe4\xbd\x86 cpp \xe9\x87\x8c\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89 DOREPLIFETIME\n */" },
#endif
		{ "IncludePath", "Items/Components/Inv_ItemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81 Actor \xe8\xba\xab\xe4\xb8\x8a\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe4\xbf\x9d\xe5\xad\x98\xe2\x80\x9c\xe8\xbf\x99\xe4\xb8\xaa\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe2\x80\x9d\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe6\x8c\x82\xe5\x9c\xa8\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x9a\x84\xe7\x89\xa9\xe5\x93\x81 Actor \xe4\xb8\x8a\xef\xbc\x8c\xe4\xbe\x9b\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe8\xaf\x86\xe5\x88\xab\xe5\x8f\xaf\xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\n\xe4\xbf\x9d\xe5\xad\x98 PickupMessage\xef\xbc\x8c\xe7\xbb\x99 HUD \xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n\xe4\xbf\x9d\xe5\xad\x98 FInv_ItemManifest\xef\xbc\x8c\xe6\x8f\x8f\xe8\xbf\xb0\xe7\x89\xa9\xe5\x93\x81\xe8\xbf\x9b\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\xe5\x90\x8e\xe5\xba\x94\xe7\x94\x9f\xe6\x88\x90\xe4\xbb\x80\xe4\xb9\x88\xe6\x95\xb0\xe6\x8d\xae\n\xe6\x8f\x90\xe4\xbe\x9b GetItemManifest\xef\xbc\x8c\xe8\xae\xa9 BagComponent/FastArray \xe5\x90\x8e\xe7\xbb\xad\xe5\x88\x9b\xe5\xbb\xba UInv_BagItem\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3/\xe8\xbf\x98\xe6\xb2\xa1\xe5\x81\x9a\xe5\xae\x8c\xe6\x95\xb4\xef\xbc\x9a\n\xe8\x87\xaa\xe5\xb7\xb1\xe6\x8a\x8a\xe7\x89\xa9\xe5\x93\x81\xe5\x8a\xa0\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\n\xe8\x87\xaa\xe5\xb7\xb1\xe5\x88\x9b\xe5\xbb\xba UInv_BagItem\n\xe6\x8b\xbe\xe5\x8f\x96\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\xe5\x9c\xb0\xe4\xb8\x8a Actor\n\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe5\x9b\xbe\xe6\xa0\x87\xe3\x80\x81\xe5\x90\x8d\xe7\xa7\xb0\xe7\xad\x89\xe8\xaf\xa6\xe7\xbb\x86 Manifest \xe5\xad\x97\xe6\xae\xb5\xe7\x9b\xae\xe5\x89\x8d\xe8\xbf\x98\xe6\xb2\xa1\xe5\xb1\x95\xe5\xbc\x80\nItemManifest \xe8\x99\xbd\xe7\x84\xb6\xe6\xa0\x87\xe4\xba\x86 Replicated\xef\xbc\x8c\xe4\xbd\x86 cpp \xe9\x87\x8c\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89 DOREPLIFETIME" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemManifest_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\xb0\xe5\xa2\x9e\xe7\x9a\x84\xe5\xa4\x8d\xe5\x88\xb6\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 cpp \xe9\x87\x8c DOREPLIFETIME(ThisClass, ItemManifest)\xef\xbc\x8c\xe4\xb8\x80\xe8\x88\xac\xe5\x86\x99\xe5\x9c\xa8 GetLifetimeReplicatedProps \xe9\x87\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xb0\xe5\xa2\x9e\xe7\x9a\x84\xe5\xa4\x8d\xe5\x88\xb6\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8 cpp \xe9\x87\x8c DOREPLIFETIME(ThisClass, ItemManifest)\xef\xbc\x8c\xe4\xb8\x80\xe8\x88\xac\xe5\x86\x99\xe5\x9c\xa8 GetLifetimeReplicatedProps \xe9\x87\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMessage_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe9\x80\xbb\xe8\xbe\x91\xe4\xb8\xad\xef\xbc\x8c\xe5\x9c\xa8\xe5\xbf\xab\xe9\x80\x9f\xe6\x95\xb0\xe7\xbb\x84\xe7\x9a\x84 AddEntry(UInv_ItemComponent) \xe9\x87\x8c\xe9\x80\x9a\xe8\xbf\x87 ItemComponent->GetItemManifest() \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 BagItem \xe7\x9a\x84 Manifest\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe9\x80\xbb\xe8\xbe\x91\xe4\xb8\xad\xef\xbc\x8c\xe5\x9c\xa8\xe5\xbf\xab\xe9\x80\x9f\xe6\x95\xb0\xe7\xbb\x84\xe7\x9a\x84 AddEntry(UInv_ItemComponent) \xe9\x87\x8c\xe9\x80\x9a\xe8\xbf\x87 ItemComponent->GetItemManifest() \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96 BagItem \xe7\x9a\x84 Manifest" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemManifest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PickupMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_ItemManifest = { "ItemManifest", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, ItemManifest), Z_Construct_UScriptStruct_FInv_ItemManifest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemManifest_MetaData), NewProp_ItemManifest_MetaData) }; // 1009975245
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage = { "PickupMessage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMessage_MetaData), NewProp_PickupMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_ItemManifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams = {
	&UInv_ItemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_ItemComponent()
{
	if (!Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton, Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_ItemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ItemManifest(TEXT("ItemManifest"));
	const bool bIsValid = true
		&& Name_ItemManifest == ClassReps[(int32)ENetFields_Private::ItemManifest].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_ItemComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_ItemComponent);
UInv_ItemComponent::~UInv_ItemComponent() {}
// ********** End Class UInv_ItemComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Components_Inv_ItemComponent_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_ItemComponent, UInv_ItemComponent::StaticClass, TEXT("UInv_ItemComponent"), &Z_Registration_Info_UClass_UInv_ItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemComponent), 2225945516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Components_Inv_ItemComponent_h__Script_BagSystem_1963958087(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Components_Inv_ItemComponent_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Components_Inv_ItemComponent_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
