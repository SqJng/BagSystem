// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Bag/SlottedItems/Inv_SlottedItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_SlottedItem() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_SlottedItem();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_SlottedItem *********************************************************
void UInv_SlottedItem::StaticRegisterNativesUInv_SlottedItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_SlottedItem;
UClass* UInv_SlottedItem::GetPrivateStaticClass()
{
	using TClass = UInv_SlottedItem;
	if (!Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_SlottedItem"),
			Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton,
			StaticRegisterNativesUInv_SlottedItem,
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
	return Z_Registration_Info_UClass_UInv_SlottedItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister()
{
	return UInv_SlottedItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_SlottedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaaUUserWidget\xef\xbc\x8c\xe9\x87\x8d\xe5\x8f\xa0\xe5\x9c\xa8\xe7\x94\xbb\xe5\xb8\x83\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe4\xb8\x8d\xe4\xb8\x80\xe5\xae\x9a\xe6\x98\xaf""1x1\xe5\xa4\xa7\xe5\xb0\x8f\xe3\x80\x82\xe5\x9c\xa8""BagGrid\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe8\xae\xbe\xe7\xbd\xae\xe4\xbc\xa0\xe5\x85\xa5""BagItem\xe5\x92\x8c\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe8\xae\xbe\xe7\xbd\xae\xe5\xae\x83\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe5\x8d\xa0\xe7\x94\xa8\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82\n *\n *\x09TObjectPtr<UImage> Image_Icon;\xe5\x9b\xbe\xe6\xa0\x87\n *\n *\x09TObjectPtr<UTextBlock> Text_StackCount \xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\x90\x84\xe5\x8f\xa0\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\n *\x09\n *\x09int32 GridIndex;\xe5\xae\x83\xe6\x94\xbe\xe5\x9c\xa8\xe5\x93\xaa\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\n *\x09\n *\x09""FIntPoint GridDimensions\xe5\xae\x83\xe5\x8d\xa0\xe5\x87\xa0\xe6\xa0\xbc\n *\x09\n *\x09\xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88<UInv_BagItem> BagItem \xe4\xb8\x80\xe4\xb8\xaa\xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88\xe6\x8c\x87\xe5\x90\x91""BagItem\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe5\x90\x8e\xe7\xbb\xad\xe6\x9f\xa5\xe8\xaf\xa2\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x82\n *\x09\n *\x09""bool bIsStackable{false};\n */" },
#endif
		{ "IncludePath", "Widgets/Bag/SlottedItems/Inv_SlottedItem.h" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/SlottedItems/Inv_SlottedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaaUUserWidget\xef\xbc\x8c\xe9\x87\x8d\xe5\x8f\xa0\xe5\x9c\xa8\xe7\x94\xbb\xe5\xb8\x83\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xb8\x8a\xe6\x98\xbe\xe7\xa4\xba\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe4\xb8\x8d\xe4\xb8\x80\xe5\xae\x9a\xe6\x98\xaf""1x1\xe5\xa4\xa7\xe5\xb0\x8f\xe3\x80\x82\xe5\x9c\xa8""BagGrid\xe6\xb7\xbb\xe5\x8a\xa0\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe8\xae\xbe\xe7\xbd\xae\xe4\xbc\xa0\xe5\x85\xa5""BagItem\xe5\x92\x8c\xe5\x9b\xbe\xe6\xa0\x87\xef\xbc\x8c\xe8\xae\xbe\xe7\xbd\xae\xe5\xae\x83\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x92\x8c\xe5\x8d\xa0\xe7\x94\xa8\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82\n\n    TObjectPtr<UImage> Image_Icon;\xe5\x9b\xbe\xe6\xa0\x87\n\n    TObjectPtr<UTextBlock> Text_StackCount \xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe5\x90\x84\xe5\x8f\xa0\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\n\n    int32 GridIndex;\xe5\xae\x83\xe6\x94\xbe\xe5\x9c\xa8\xe5\x93\xaa\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\n\n    FIntPoint GridDimensions\xe5\xae\x83\xe5\x8d\xa0\xe5\x87\xa0\xe6\xa0\xbc\n\n    \xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88<UInv_BagItem> BagItem \xe4\xb8\x80\xe4\xb8\xaa\xe5\xbc\xb1\xe6\x8c\x87\xe9\x92\x88\xe6\x8c\x87\xe5\x90\x91""BagItem\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe5\x90\x8e\xe7\xbb\xad\xe6\x9f\xa5\xe8\xaf\xa2\xe8\xbf\x99\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x82\n\n    bool bIsStackable{false};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Icon_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x87\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe6\x97\xb6\xe4\xbd\xa0\xe5\xbe\x97\xe6\x8b\x96\xe4\xb8\x80\xe4\xb8\xaaimage\xe5\x88\xb0\xe5\xad\x90\xe5\xb1\x82\xe7\xba\xa7\xe4\xb8\x8b\xef\xbc\x8c\xe4\xb8\x94\xe5\xbf\x85\xe9\xa1\xbb\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xbaImage_Icon\xef\xbc\x8c\xe4\xb8\x8d\xe7\x84\xb6\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbc\x96\xe8\xaf\x91\xe9\x94\x99\xe8\xaf\xaf\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/SlottedItems/Inv_SlottedItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x87\x8c\xe7\xbb\xa7\xe6\x89\xbf\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe6\x97\xb6\xe4\xbd\xa0\xe5\xbe\x97\xe6\x8b\x96\xe4\xb8\x80\xe4\xb8\xaaimage\xe5\x88\xb0\xe5\xad\x90\xe5\xb1\x82\xe7\xba\xa7\xe4\xb8\x8b\xef\xbc\x8c\xe4\xb8\x94\xe5\xbf\x85\xe9\xa1\xbb\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xbaImage_Icon\xef\xbc\x8c\xe4\xb8\x8d\xe7\x84\xb6\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbc\x96\xe8\xaf\x91\xe9\x94\x99\xe8\xaf\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StackCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/SlottedItems/Inv_SlottedItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_SlottedItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Image_Icon = { "Image_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SlottedItem, Image_Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Icon_MetaData), NewProp_Image_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Text_StackCount = { "Text_StackCount", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SlottedItem, Text_StackCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StackCount_MetaData), NewProp_Text_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Image_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SlottedItem_Statics::NewProp_Text_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_SlottedItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_SlottedItem_Statics::ClassParams = {
	&UInv_SlottedItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SlottedItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_SlottedItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_SlottedItem()
{
	if (!Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton, Z_Construct_UClass_UInv_SlottedItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_SlottedItem.OuterSingleton;
}
UInv_SlottedItem::UInv_SlottedItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_SlottedItem);
UInv_SlottedItem::~UInv_SlottedItem() {}
// ********** End Class UInv_SlottedItem ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_SlottedItems_Inv_SlottedItem_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_SlottedItem, UInv_SlottedItem::StaticClass, TEXT("UInv_SlottedItem"), &Z_Registration_Info_UClass_UInv_SlottedItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_SlottedItem), 736256128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_SlottedItems_Inv_SlottedItem_h__Script_BagSystem_1449998011(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_SlottedItems_Inv_SlottedItem_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_SlottedItems_Inv_SlottedItem_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
