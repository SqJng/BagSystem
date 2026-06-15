// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Inv_HighlightableStaticMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HighlightableStaticMesh() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HighlightableStaticMesh *********************************************
void UInv_HighlightableStaticMesh::StaticRegisterNativesUInv_HighlightableStaticMesh()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HighlightableStaticMesh;
UClass* UInv_HighlightableStaticMesh::GetPrivateStaticClass()
{
	using TClass = UInv_HighlightableStaticMesh;
	if (!Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HighlightableStaticMesh"),
			Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.InnerSingleton,
			StaticRegisterNativesUInv_HighlightableStaticMesh,
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
	return Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh_NoRegister()
{
	return UInv_HighlightableStaticMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xb8\xa6\xe9\xab\x98\xe4\xba\xae\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84 StaticMeshComponent\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe7\xbb\xa7\xe6\x89\xbf UStaticMeshComponent\n * \xe5\xae\x9e\xe7\x8e\xb0 IInv_Highlightable \xe6\x8e\xa5\xe5\x8f\xa3\n * \xe4\xbf\x9d\xe5\xad\x98 HighlightMaterial\n * Highlight \xe6\x97\xb6\xe6\x98\xbe\xe7\xa4\xba\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\n * UnHighlight \xe6\x97\xb6\xe9\x9a\x90\xe8\x97\x8f\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe6\x8b\xbe\xe5\x8f\x96\xe9\x80\xbb\xe8\xbe\x91\n * \xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae\n * \xe5\x8a\xa0\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\n * \xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x8b\xbe\xe5\x8f\x96\n * \xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba\n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interaction/Inv_HighlightableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlightableStaticMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\xa6\xe9\xab\x98\xe4\xba\xae\xe8\x83\xbd\xe5\x8a\x9b\xe7\x9a\x84 StaticMeshComponent\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe7\xbb\xa7\xe6\x89\xbf UStaticMeshComponent\n\xe5\xae\x9e\xe7\x8e\xb0 IInv_Highlightable \xe6\x8e\xa5\xe5\x8f\xa3\n\xe4\xbf\x9d\xe5\xad\x98 HighlightMaterial\nHighlight \xe6\x97\xb6\xe6\x98\xbe\xe7\xa4\xba\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\nUnHighlight \xe6\x97\xb6\xe9\x9a\x90\xe8\x97\x8f\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe6\x8b\xbe\xe5\x8f\x96\xe9\x80\xbb\xe8\xbe\x91\n\xe7\x89\xa9\xe5\x93\x81\xe6\x95\xb0\xe6\x8d\xae\n\xe5\x8a\xa0\xe5\x85\xa5\xe8\x83\x8c\xe5\x8c\x85\n\xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe4\xb8\x8d\xe8\x83\xbd\xe6\x8b\xbe\xe5\x8f\x96\n\xe6\x98\xbe\xe7\xa4\xba\xe6\x8b\xbe\xe5\x8f\x96\xe6\x8f\x90\xe7\xa4\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMaterial_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlightableStaticMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HighlightableStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::NewProp_HighlightMaterial = { "HighlightMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HighlightableStaticMesh, HighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMaterial_MetaData), NewProp_HighlightMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::NewProp_HighlightMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInv_Highlightable_NoRegister, (int32)VTABLE_OFFSET(UInv_HighlightableStaticMesh, IInv_Highlightable), false },  // 1115986921
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::ClassParams = {
	&UInv_HighlightableStaticMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh()
{
	if (!Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton, Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton;
}
UInv_HighlightableStaticMesh::UInv_HighlightableStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HighlightableStaticMesh);
UInv_HighlightableStaticMesh::~UInv_HighlightableStaticMesh() {}
// ********** End Class UInv_HighlightableStaticMesh ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Interaction_Inv_HighlightableStaticMesh_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HighlightableStaticMesh, UInv_HighlightableStaticMesh::StaticClass, TEXT("UInv_HighlightableStaticMesh"), &Z_Registration_Info_UClass_UInv_HighlightableStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HighlightableStaticMesh), 1769903431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Interaction_Inv_HighlightableStaticMesh_h__Script_BagSystem_72040301(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Interaction_Inv_HighlightableStaticMesh_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Interaction_Inv_HighlightableStaticMesh_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
