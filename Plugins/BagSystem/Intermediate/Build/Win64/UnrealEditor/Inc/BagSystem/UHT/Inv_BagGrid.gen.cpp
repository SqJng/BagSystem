// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Bag/Spatial/Inv_BagGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_BagGrid() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagGrid();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagGrid_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_SlottedItem_NoRegister();
BAGSYSTEM_API UEnum* Z_Construct_UEnum_BagSystem_EInv_ItemCategory();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_BagGrid Function AddItem ********************************************
struct Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics
{
	struct Inv_BagGrid_eventAddItem_Parms
	{
		UInv_BagItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagGrid_eventAddItem_Parms, Item), Z_Construct_UClass_UInv_BagItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_BagGrid, nullptr, "AddItem", Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::Inv_BagGrid_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::Inv_BagGrid_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_BagGrid_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_BagGrid_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_BagGrid::execAddItem)
{
	P_GET_OBJECT(UInv_BagItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInv_BagGrid Function AddItem **********************************************

// ********** Begin Class UInv_BagGrid *************************************************************
void UInv_BagGrid::StaticRegisterNativesUInv_BagGrid()
{
	UClass* Class = UInv_BagGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInv_BagGrid::execAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_BagGrid;
UClass* UInv_BagGrid::GetPrivateStaticClass()
{
	using TClass = UInv_BagGrid;
	if (!Z_Registration_Info_UClass_UInv_BagGrid.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_BagGrid"),
			Z_Registration_Info_UClass_UInv_BagGrid.InnerSingleton,
			StaticRegisterNativesUInv_BagGrid,
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
	return Z_Registration_Info_UClass_UInv_BagGrid.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_BagGrid_NoRegister()
{
	return UInv_BagGrid::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_BagGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8d\x95\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb\xe9\xa1\xb5\xe9\x87\x8c\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe8\xa3\x85\xe5\xa4\x87\xe9\xa1\xb5\xe3\x80\x81\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe9\xa1\xb5\xe6\x88\x96\xe6\x9d\x90\xe6\x96\x99\xe9\xa1\xb5\xe9\x87\x8c\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe9\x9b\x86\xe5\x90\x88\xe3\x80\x82\xe5\xae\x83\xe8\xb4\x9f\xe8\xb4\xa3\xe6\xa0\xb9\xe6\x8d\xae\xe8\xa1\x8c\xe5\x88\x97\xe6\x95\xb0\xe5\x88\x9b\xe5\xbb\xba\xe6\xa0\xbc\xe5\xad\x90\xef\xbc\x8c\xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbe\xe8\xbf\x9b\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\xbc\xe5\xad\x90\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x8a\x8a\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe4\xbf\x9d\xe5\xad\x98 ItemCategory\xef\xbc\x8c\xe8\xaf\xb4\xe6\x98\x8e\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbd\x91\xe6\xa0\xbc\xe8\xb4\x9f\xe8\xb4\xa3\xe5\x93\xaa\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb\n * \xe9\x80\x9a\xe8\xbf\x87 Rows / Columns / TileSize \xe6\x8e\xa7\xe5\x88\xb6\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f\xe5\x92\x8c\xe5\xb0\xba\xe5\xaf\xb8\n * ConstructGrid \xe6\xa0\xb9\xe6\x8d\xae\xe8\xa1\x8c\xe5\x88\x97\xe5\x88\x9b\xe5\xbb\xba UInv_GridSlot\n * \xe7\xbb\x99\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xae\xbe\xe7\xbd\xae TileIndex\n * \xe6\x8a\x8a\xe6\xa0\xbc\xe5\xad\x90\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0 CanvasPanel \xe5\xb9\xb6\xe8\xae\xbe\xe7\xbd\xae\xe5\xa4\xa7\xe5\xb0\x8f/\xe4\xbd\x8d\xe7\xbd\xae\n * \xe6\x8a\x8a\xe7\x94\x9f\xe6\x88\x90\xe5\x87\xba\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0 GridSlots\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe5\x90\x8e\xe7\xbb\xad\xe6\x9f\xa5\xe8\xaf\xa2\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n * \xe5\x88\xa4\xe6\x96\xad\xe6\x9f\x90\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbe\xe8\xbf\x9b\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\xbc\xe5\xad\x90\n * \xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe5\x8d\xa0\xe7\x94\xa8\xe7\x8a\xb6\xe6\x80\x81\n * \xe6\x8a\x8a UInv_BagItem \xe6\x98\xbe\xe7\xa4\xba\xe6\x88\x90\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\n * \xe6\x98\xbe\xe7\xa4\xba\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe5\x93\x81\xe8\xb4\xa8\xe8\xbe\xb9\xe6\xa1\x86\xe3\x80\x81\xe6\x82\xac\xe5\x81\x9c\xe6\x8f\x90\xe7\xa4\xba\n * \xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe6\x94\xbe\xe7\xbd\xae\xe3\x80\x81\xe4\xba\xa4\xe6\x8d\xa2\xe3\x80\x81\xe5\xa0\x86\xe5\x8f\xa0\n */" },
#endif
		{ "IncludePath", "Widgets/Bag/Spatial/Inv_BagGrid.h" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\x95\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb\xe9\xa1\xb5\xe9\x87\x8c\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xe8\xa3\x85\xe5\xa4\x87\xe9\xa1\xb5\xe3\x80\x81\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe9\xa1\xb5\xe6\x88\x96\xe6\x9d\x90\xe6\x96\x99\xe9\xa1\xb5\xe9\x87\x8c\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe9\x9b\x86\xe5\x90\x88\xe3\x80\x82\xe5\xae\x83\xe8\xb4\x9f\xe8\xb4\xa3\xe6\xa0\xb9\xe6\x8d\xae\xe8\xa1\x8c\xe5\x88\x97\xe6\x95\xb0\xe5\x88\x9b\xe5\xbb\xba\xe6\xa0\xbc\xe5\xad\x90\xef\xbc\x8c\xe5\x88\xa4\xe6\x96\xad\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbe\xe8\xbf\x9b\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\xbc\xe5\xad\x90\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a\xe6\x8a\x8a\xe7\x89\xa9\xe5\x93\x81\xe6\x98\xbe\xe7\xa4\xba\xe5\x9c\xa8\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe4\xbf\x9d\xe5\xad\x98 ItemCategory\xef\xbc\x8c\xe8\xaf\xb4\xe6\x98\x8e\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbd\x91\xe6\xa0\xbc\xe8\xb4\x9f\xe8\xb4\xa3\xe5\x93\xaa\xe4\xb8\xaa\xe5\x88\x86\xe7\xb1\xbb\n\xe9\x80\x9a\xe8\xbf\x87 Rows / Columns / TileSize \xe6\x8e\xa7\xe5\x88\xb6\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe9\x87\x8f\xe5\x92\x8c\xe5\xb0\xba\xe5\xaf\xb8\nConstructGrid \xe6\xa0\xb9\xe6\x8d\xae\xe8\xa1\x8c\xe5\x88\x97\xe5\x88\x9b\xe5\xbb\xba UInv_GridSlot\n\xe7\xbb\x99\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xa0\xbc\xe5\xad\x90\xe8\xae\xbe\xe7\xbd\xae TileIndex\n\xe6\x8a\x8a\xe6\xa0\xbc\xe5\xad\x90\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0 CanvasPanel \xe5\xb9\xb6\xe8\xae\xbe\xe7\xbd\xae\xe5\xa4\xa7\xe5\xb0\x8f/\xe4\xbd\x8d\xe7\xbd\xae\n\xe6\x8a\x8a\xe7\x94\x9f\xe6\x88\x90\xe5\x87\xba\xe7\x9a\x84\xe6\xa0\xbc\xe5\xad\x90\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0 GridSlots\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe5\x90\x8e\xe7\xbb\xad\xe6\x9f\xa5\xe8\xaf\xa2\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\n\xe5\x88\xa4\xe6\x96\xad\xe6\x9f\x90\xe4\xb8\xaa\xe7\x89\xa9\xe5\x93\x81\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbe\xe8\xbf\x9b\xe8\xbf\x99\xe4\xba\x9b\xe6\xa0\xbc\xe5\xad\x90\n\xe4\xbf\x9d\xe5\xad\x98\xe6\xa0\xbc\xe5\xad\x90\xe5\x8d\xa0\xe7\x94\xa8\xe7\x8a\xb6\xe6\x80\x81\n\xe6\x8a\x8a UInv_BagItem \xe6\x98\xbe\xe7\xa4\xba\xe6\x88\x90\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\n\xe6\x98\xbe\xe7\xa4\xba\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x81\xe5\x93\x81\xe8\xb4\xa8\xe8\xbe\xb9\xe6\xa1\x86\xe3\x80\x81\xe6\x82\xac\xe5\x81\x9c\xe6\x8f\x90\xe7\xa4\xba\n\xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe6\x94\xbe\xe7\xbd\xae\xe3\x80\x81\xe4\xba\xa4\xe6\x8d\xa2\xe3\x80\x81\xe5\xa0\x86\xe5\x8f\xa0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\x99\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe6\x98\xaf\xe8\xa3\x85\xe5\xa4\x87\xe8\xbf\x98\xe6\x98\xaf\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe8\xbf\x98\xe6\x98\xaf\xe6\x9d\x90\xe6\x96\x99\xe8\x83\x8c\xe5\x8c\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe6\x98\xaf\xe8\xa3\x85\xe5\xa4\x87\xe8\xbf\x98\xe6\x98\xaf\xe6\xb6\x88\xe8\x80\x97\xe5\x93\x81\xe8\xbf\x98\xe6\x98\xaf\xe6\x9d\x90\xe6\x96\x99\xe8\x83\x8c\xe5\x8c\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xbb\xe5\xb8\x83\xef\xbc\x8c\xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe6\xb8\xb2\xe6\x9f\x93\xe6\xa0\xbc\xe5\xad\x90GridSlot\xe4\xbb\xa5\xe5\x8f\x8a\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87SlottedItem\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xbb\xe5\xb8\x83\xef\xbc\x8c\xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe6\xb8\xb2\xe6\x9f\x93\xe6\xa0\xbc\xe5\xad\x90GridSlot\xe4\xbb\xa5\xe5\x8f\x8a\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87SlottedItem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe7\xbb\x84\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSlotClass_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa0\xbc\xe5\xad\x90\xe6\xa8\xa1\xe6\x9d\xbf\xef\xbc\x8c\xe4\xbb\x85\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa0\xbc\xe5\xad\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x82 \n// \xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x9c\x80\xe8\xa6\x81\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa UInv_GridSlot \xe7\x9a\x84 Widget Blueprint\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xad\x90\xe6\xa8\xa1\xe6\x9d\xbf\xef\xbc\x8c\xe4\xbb\x85\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\xa0\xbc\xe5\xad\x90\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe3\x80\x82\n\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x9c\x80\xe8\xa6\x81\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa UInv_GridSlot \xe7\x9a\x84 Widget Blueprint\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlottedItemClass_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xe6\xa8\xa1\xe6\x9d\xbf\xef\xbc\x8c\xe5\x86\xb3\xe5\xae\x9a\xe6\x96\xb0\xe5\x8a\xa0\xe5\x85\xa5\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\x9a\x84\xe6\xa0\xb7\xe5\xbc\x8f\xe3\x80\x82\n//\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x9c\x80\xe8\xa6\x81\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa UInv_SlottedItem \xe7\x9a\x84 Widget Blueprint\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xe6\xa8\xa1\xe6\x9d\xbf\xef\xbc\x8c\xe5\x86\xb3\xe5\xae\x9a\xe6\x96\xb0\xe5\x8a\xa0\xe5\x85\xa5\xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87\xe7\x9a\x84\xe6\xa0\xb7\xe5\xbc\x8f\xe3\x80\x82\n\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x9c\x80\xe8\xa6\x81\xe6\x8c\x87\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa UInv_SlottedItem \xe7\x9a\x84 Widget Blueprint\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlottedItems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//<\xe6\xa0\xbc\xe5\xad\x90\xe5\x8f\xb7, \xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87>\xe3\x80\x82\xe4\xbb\xa5\xe5\x90\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x89\xa9\xe5\x93\x81\xe5\xb0\xb1\xe7\x9c\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<\xe6\xa0\xbc\xe5\xad\x90\xe5\x8f\xb7, \xe7\x89\xa9\xe5\x93\x81\xe5\x9b\xbe\xe6\xa0\x87>\xe3\x80\x82\xe4\xbb\xa5\xe5\x90\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe6\xa0\xbc\xe5\xad\x90\xe9\x87\x8c\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x89\xa9\xe5\x93\x81\xe5\xb0\xb1\xe7\x9c\x8b\xe8\xbf\x99\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa1\x8c\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\x8c\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x97\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/Bag/Spatial/Inv_BagGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x97\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridSlotClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlottedItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlottedItems_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlottedItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlottedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_BagGrid_AddItem, "AddItem" }, // 4075738082
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_BagGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, ItemCategory), Z_Construct_UEnum_BagSystem_EInv_ItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 2885190001
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlots_Inner = { "GridSlots", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlots = { "GridSlots", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, GridSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlots_MetaData), NewProp_GridSlots_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlotClass = { "GridSlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, GridSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_GridSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSlotClass_MetaData), NewProp_GridSlotClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItemClass = { "SlottedItemClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, SlottedItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_SlottedItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlottedItemClass_MetaData), NewProp_SlottedItemClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems_ValueProp = { "SlottedItems", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInv_SlottedItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems_Key_KeyProp = { "SlottedItems_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems = { "SlottedItems", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, SlottedItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlottedItems_MetaData), NewProp_SlottedItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, Rows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rows_MetaData), NewProp_Rows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, Columns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagGrid, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_BagGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_GridSlotClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_SlottedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_Rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_Columns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagGrid_Statics::NewProp_TileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_BagGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_BagGrid_Statics::ClassParams = {
	&UInv_BagGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_BagGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagGrid_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_BagGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_BagGrid()
{
	if (!Z_Registration_Info_UClass_UInv_BagGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_BagGrid.OuterSingleton, Z_Construct_UClass_UInv_BagGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_BagGrid.OuterSingleton;
}
UInv_BagGrid::UInv_BagGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_BagGrid);
UInv_BagGrid::~UInv_BagGrid() {}
// ********** End Class UInv_BagGrid ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_Spatial_Inv_BagGrid_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_BagGrid, UInv_BagGrid::StaticClass, TEXT("UInv_BagGrid"), &Z_Registration_Info_UClass_UInv_BagGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_BagGrid), 572283668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_Spatial_Inv_BagGrid_h__Script_BagSystem_3253812839(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_Spatial_Inv_BagGrid_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Widgets_Bag_Spatial_Inv_BagGrid_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
