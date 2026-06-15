// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BagManagement/Components/Inv_BagComponent.h"
#include "BagManagement/FastArray/Inv_FastArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_BagComponent() {}

// ********** Begin Cross Module References ********************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagBase_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagComponent();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagComponent_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister();
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
BAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature();
BAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature();
BAGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInv_BagFastArray();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BagSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FBagItemChange ********************************************************
struct Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics
{
	struct _Script_BagSystem_eventBagItemChange_Parms
	{
		UInv_BagItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BagSystem_eventBagItemChange_Parms, Item), Z_Construct_UClass_UInv_BagItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BagSystem, nullptr, "BagItemChange__DelegateSignature", Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::_Script_BagSystem_eventBagItemChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::_Script_BagSystem_eventBagItemChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBagItemChange_DelegateWrapper(const FMulticastScriptDelegate& BagItemChange, UInv_BagItem* Item)
{
	struct _Script_BagSystem_eventBagItemChange_Parms
	{
		UInv_BagItem* Item;
	};
	_Script_BagSystem_eventBagItemChange_Parms Parms;
	Parms.Item=Item;
	BagItemChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBagItemChange **********************************************************

// ********** Begin Delegate FNoRoomInBag **********************************************************
struct Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_BagSystem, nullptr, "NoRoomInBag__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNoRoomInBag_DelegateWrapper(const FMulticastScriptDelegate& NoRoomInBag)
{
	NoRoomInBag.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FNoRoomInBag ************************************************************

// ********** Begin Class UInv_BagComponent Function Server_AddNewItem *****************************
struct Inv_BagComponent_eventServer_AddNewItem_Parms
{
	UInv_ItemComponent* ItemComponent;
	int32 StackCount;
};
static FName NAME_UInv_BagComponent_Server_AddNewItem = FName(TEXT("Server_AddNewItem"));
void UInv_BagComponent::Server_AddNewItem(UInv_ItemComponent* ItemComponent, int32 StackCount)
{
	Inv_BagComponent_eventServer_AddNewItem_Parms Parms;
	Parms.ItemComponent=ItemComponent;
	Parms.StackCount=StackCount;
	UFunction* Func = FindFunctionChecked(NAME_UInv_BagComponent_Server_AddNewItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8a\xa0\xe6\x96\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xb8\x8d\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa0\xe6\x96\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xb8\x8d\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventServer_AddNewItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventServer_AddNewItem_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::NewProp_ItemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_BagComponent, nullptr, "Server_AddNewItem", Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::PropPointers), sizeof(Inv_BagComponent_eventServer_AddNewItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_BagComponent_eventServer_AddNewItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_BagComponent::execServer_AddNewItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddNewItem_Implementation(Z_Param_ItemComponent,Z_Param_StackCount);
	P_NATIVE_END;
}
// ********** End Class UInv_BagComponent Function Server_AddNewItem *******************************

// ********** Begin Class UInv_BagComponent Function Server_AddStacksToItem ************************
struct Inv_BagComponent_eventServer_AddStacksToItem_Parms
{
	UInv_ItemComponent* ItemComponent;
	int32 StackCount;
	int32 Remainder;
};
static FName NAME_UInv_BagComponent_Server_AddStacksToItem = FName(TEXT("Server_AddStacksToItem"));
void UInv_BagComponent::Server_AddStacksToItem(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder)
{
	Inv_BagComponent_eventServer_AddStacksToItem_Parms Parms;
	Parms.ItemComponent=ItemComponent;
	Parms.StackCount=StackCount;
	Parms.Remainder=Remainder;
	UFunction* Func = FindFunctionChecked(NAME_UInv_BagComponent_Server_AddStacksToItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x89\x8d\xe8\x83\xbd\xe8\xb0\x83\xe7\x94\xa8\xe7\x9a\x84\n//\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\xad\xe5\xb7\xb2\xe6\x9c\x89\xe7\x9a\x84\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x89\x8d\xe8\x83\xbd\xe8\xb0\x83\xe7\x94\xa8\xe7\x9a\x84\n\xe5\x8a\xa0\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\xad\xe5\xb7\xb2\xe6\x9c\x89\xe7\x9a\x84\xe5\x8f\xaf\xe5\xa0\x86\xe5\x8f\xa0\xe7\x89\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remainder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventServer_AddStacksToItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventServer_AddStacksToItem_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventServer_AddStacksToItem_Parms, Remainder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_ItemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::NewProp_Remainder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_BagComponent, nullptr, "Server_AddStacksToItem", Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::PropPointers), sizeof(Inv_BagComponent_eventServer_AddStacksToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Inv_BagComponent_eventServer_AddStacksToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_BagComponent::execServer_AddStacksToItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_Remainder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddStacksToItem_Implementation(Z_Param_ItemComponent,Z_Param_StackCount,Z_Param_Remainder);
	P_NATIVE_END;
}
// ********** End Class UInv_BagComponent Function Server_AddStacksToItem **************************

// ********** Begin Class UInv_BagComponent Function TryAddItem ************************************
struct Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics
{
	struct Inv_BagComponent_eventTryAddItem_Parms
	{
		UInv_ItemComponent* ItemComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_BagComponent_eventTryAddItem_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::NewProp_ItemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_BagComponent, nullptr, "TryAddItem", Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::Inv_BagComponent_eventTryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::Inv_BagComponent_eventTryAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_BagComponent_TryAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_BagComponent_TryAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_BagComponent::execTryAddItem)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAddItem(Z_Param_ItemComponent);
	P_NATIVE_END;
}
// ********** End Class UInv_BagComponent Function TryAddItem **************************************

// ********** Begin Class UInv_BagComponent ********************************************************
void UInv_BagComponent::StaticRegisterNativesUInv_BagComponent()
{
	UClass* Class = UInv_BagComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_AddNewItem", &UInv_BagComponent::execServer_AddNewItem },
		{ "Server_AddStacksToItem", &UInv_BagComponent::execServer_AddStacksToItem },
		{ "TryAddItem", &UInv_BagComponent::execTryAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_BagComponent;
UClass* UInv_BagComponent::GetPrivateStaticClass()
{
	using TClass = UInv_BagComponent;
	if (!Z_Registration_Info_UClass_UInv_BagComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_BagComponent"),
			Z_Registration_Info_UClass_UInv_BagComponent.InnerSingleton,
			StaticRegisterNativesUInv_BagComponent,
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
	return Z_Registration_Info_UClass_UInv_BagComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_BagComponent_NoRegister()
{
	return UInv_BagComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_BagComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe6\x8c\x82\xe5\x9c\xa8 PlayerController \xe4\xb8\x8a\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe2\x80\x9c\xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe5\x85\xa5\xe5\x8f\xa3\xe5\x92\x8c\xe5\x8d\x8f\xe8\xb0\x83\xe2\x80\x9d\xe3\x80\x82\n *\n * \xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n * \xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe4\xbf\x9d\xe5\xad\x98\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95 BagMenu\n * \xe6\x89\x93\xe5\xbc\x80/\xe5\x85\xb3\xe9\x97\xad\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n * \xe5\x88\x87\xe6\x8d\xa2 GameAndUI / GameOnly \xe8\xbe\x93\xe5\x85\xa5\xe6\xa8\xa1\xe5\xbc\x8f\n * \xe6\x98\xbe\xe7\xa4\xba/\xe9\x9a\x90\xe8\x97\x8f\xe9\xbc\xa0\xe6\xa0\x87\n * \xe9\x80\x9a\xe8\xbf\x87 TryAddItem \xe6\x8e\xa5\xe6\x94\xb6\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84 ItemComponent\n * \xe8\xb0\x83\xe7\x94\xa8 BagMenu->HasRoomForItem \xe6\x9f\xa5\xe8\xaf\xa2\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe7\xa9\xba\xe9\x97\xb4\n * \xe6\xb2\xa1\xe6\x9c\x89\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad NoRoomInBag\n * \xe5\xa3\xb0\xe6\x98\x8e OnItemAdded / OnItemRemoved\xef\xbc\x8c\xe7\xbb\x99 FastArray \xe5\xa4\x8d\xe5\x88\xb6\xe5\x9b\x9e\xe8\xb0\x83\xe9\x80\x9a\xe7\x9f\xa5 UI \xe7\x94\xa8\n * \xe5\xa3\xb0\xe6\x98\x8e\xe5\xb9\xb6\xe5\xa4\x8d\xe5\x88\xb6 InventoryList\xef\xbc\x8c\xe4\xb9\x9f\xe5\xb0\xb1\xe6\x98\xaf FInv_BagFastArray\n * \xe6\xb3\xa8\xe5\x86\x8c\xe5\xad\x90\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xa4\x8d\xe5\x88\xb6\xe5\x85\xa5\xe5\x8f\xa3 AddRepSubObj\n *\n * \xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3/\xe8\xbf\x98\xe6\xb2\xa1\xe5\x81\x9a\xe5\xae\x8c\xe6\x95\xb4\xef\xbc\x9a\n * Server_AddStacksToItem \xe8\xbf\x98\xe6\x98\xaf\xe7\xa9\xba\xe5\xae\x9e\xe7\x8e\xb0\n * Server_AddNewItem \xe5\xb7\xb2\xe7\xbb\x8f\xe8\xb0\x83\xe7\x94\xa8 InventoryList.AddEntry(ItemComponent)\xef\xbc\x8c\xe4\xbd\x86\xe8\xaf\xa5\xe9\x87\x8d\xe8\xbd\xbd\xe7\x9b\xae\xe5\x89\x8d\xe8\xbf\x98\xe6\x98\xaf \n * \xe7\x89\xa9\xe5\x93\x81\xe6\x88\x90\xe5\x8a\x9f\xe5\x85\xa5\xe5\x8c\x85\xe5\x90\x8e\xe7\x9a\x84\xe5\x9c\xb0\xe4\xb8\x8a Actor \xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\n * \xe6\x8a\x8a OnItemAdded / OnItemRemoved \xe6\x8e\xa5\xe5\x88\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\xa0\xbc\xe5\xad\x90 UI \xe5\x88\xb7\xe6\x96\xb0\n * \xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x81\xe4\xba\xa4\xe6\x8d\xa2\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\n * \xe7\xa1\xae\xe8\xae\xa4 InventoryList \xe7\x9a\x84 OwnerComponent \xe5\xb7\xb2\xe6\xad\xa3\xe7\xa1\xae\xe6\x8c\x87\xe5\x90\x91\xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6\n */" },
#endif
		{ "IncludePath", "BagManagement/Components/Inv_BagComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe6\x8c\x82\xe5\x9c\xa8 PlayerController \xe4\xb8\x8a\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe2\x80\x9c\xe8\x83\x8c\xe5\x8c\x85\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe5\x85\xa5\xe5\x8f\xa3\xe5\x92\x8c\xe5\x8d\x8f\xe8\xb0\x83\xe2\x80\x9d\xe3\x80\x82\n\n\xe7\x9b\xae\xe5\x89\x8d\xe5\xb7\xb2\xe7\xbb\x8f\xe5\x81\x9a\xe4\xba\x86\xef\xbc\x9a\n\xe5\x88\x9b\xe5\xbb\xba\xe5\xb9\xb6\xe4\xbf\x9d\xe5\xad\x98\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95 BagMenu\n\xe6\x89\x93\xe5\xbc\x80/\xe5\x85\xb3\xe9\x97\xad\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n\xe5\x88\x87\xe6\x8d\xa2 GameAndUI / GameOnly \xe8\xbe\x93\xe5\x85\xa5\xe6\xa8\xa1\xe5\xbc\x8f\n\xe6\x98\xbe\xe7\xa4\xba/\xe9\x9a\x90\xe8\x97\x8f\xe9\xbc\xa0\xe6\xa0\x87\n\xe9\x80\x9a\xe8\xbf\x87 TryAddItem \xe6\x8e\xa5\xe6\x94\xb6\xe5\x9c\xb0\xe4\xb8\x8a\xe7\x89\xa9\xe5\x93\x81\xe7\x9a\x84 ItemComponent\n\xe8\xb0\x83\xe7\x94\xa8 BagMenu->HasRoomForItem \xe6\x9f\xa5\xe8\xaf\xa2\xe5\xbd\x93\xe5\x89\x8d\xe8\x83\x8c\xe5\x8c\x85\xe7\xa9\xba\xe9\x97\xb4\n\xe6\xb2\xa1\xe6\x9c\x89\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\xb6\xe5\xb9\xbf\xe6\x92\xad NoRoomInBag\n\xe5\xa3\xb0\xe6\x98\x8e OnItemAdded / OnItemRemoved\xef\xbc\x8c\xe7\xbb\x99 FastArray \xe5\xa4\x8d\xe5\x88\xb6\xe5\x9b\x9e\xe8\xb0\x83\xe9\x80\x9a\xe7\x9f\xa5 UI \xe7\x94\xa8\n\xe5\xa3\xb0\xe6\x98\x8e\xe5\xb9\xb6\xe5\xa4\x8d\xe5\x88\xb6 InventoryList\xef\xbc\x8c\xe4\xb9\x9f\xe5\xb0\xb1\xe6\x98\xaf FInv_BagFastArray\n\xe6\xb3\xa8\xe5\x86\x8c\xe5\xad\x90\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xa4\x8d\xe5\x88\xb6\xe5\x85\xa5\xe5\x8f\xa3 AddRepSubObj\n\n\xe8\xbf\x98\xe6\xb2\xa1\xe6\x9c\x89\xe8\xb4\x9f\xe8\xb4\xa3/\xe8\xbf\x98\xe6\xb2\xa1\xe5\x81\x9a\xe5\xae\x8c\xe6\x95\xb4\xef\xbc\x9a\nServer_AddStacksToItem \xe8\xbf\x98\xe6\x98\xaf\xe7\xa9\xba\xe5\xae\x9e\xe7\x8e\xb0\nServer_AddNewItem \xe5\xb7\xb2\xe7\xbb\x8f\xe8\xb0\x83\xe7\x94\xa8 InventoryList.AddEntry(ItemComponent)\xef\xbc\x8c\xe4\xbd\x86\xe8\xaf\xa5\xe9\x87\x8d\xe8\xbd\xbd\xe7\x9b\xae\xe5\x89\x8d\xe8\xbf\x98\xe6\x98\xaf\n\xe7\x89\xa9\xe5\x93\x81\xe6\x88\x90\xe5\x8a\x9f\xe5\x85\xa5\xe5\x8c\x85\xe5\x90\x8e\xe7\x9a\x84\xe5\x9c\xb0\xe4\xb8\x8a Actor \xe9\x94\x80\xe6\xaf\x81/\xe9\x9a\x90\xe8\x97\x8f\n\xe6\x8a\x8a OnItemAdded / OnItemRemoved \xe6\x8e\xa5\xe5\x88\xb0\xe5\x85\xb7\xe4\xbd\x93\xe6\xa0\xbc\xe5\xad\x90 UI \xe5\x88\xb7\xe6\x96\xb0\n\xe6\x8b\x96\xe6\x8b\xbd\xe3\x80\x81\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x81\xe4\xba\xa4\xe6\x8d\xa2\xe3\x80\x81\xe4\xb8\xa2\xe5\xbc\x83\xe3\x80\x81\xe4\xbd\xbf\xe7\x94\xa8\xe7\x89\xa9\xe5\x93\x81\n\xe7\xa1\xae\xe8\xae\xa4 InventoryList \xe7\x9a\x84 OwnerComponent \xe5\xb7\xb2\xe6\xad\xa3\xe7\xa1\xae\xe6\x8c\x87\xe5\x90\x91\xe6\x9c\xac\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BagList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9e\x84\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85UI\n" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9e\x84\xe5\xbb\xba\xe8\x83\x8c\xe5\x8c\x85UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BagMenu_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9c\xa8\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85UI\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\xb9\xb6\xe5\xb0\x86\xe5\x85\xb6\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84HUD\xe4\xb8\x8a\xe3\x80\x82\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6\xe7\x94\xb1\xe8\x93\x9d\xe5\x9b\xbe\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84""BagMenuClass\xe6\x9e\x84\xe5\xbb\xba\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe8\x83\x8c\xe5\x8c\x85\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85UI\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\xb9\xb6\xe5\xb0\x86\xe5\x85\xb6\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe7\x8e\xa9\xe5\xae\xb6\xe7\x9a\x84HUD\xe4\xb8\x8a\xe3\x80\x82\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6\xe7\x94\xb1\xe8\x93\x9d\xe5\x9b\xbe\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84""BagMenuClass\xe6\x9e\x84\xe5\xbb\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BagMenuClass_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xb4\xe6\x98\xaf\xe5\xad\x90\xe8\x83\x8c\xe5\x8c\x85\xef\xbc\x8c\xe4\xbd\x86\xe7\x9b\xae\xe5\x89\x8d\xe8\xae\xbe\xe8\xae\xa1\xe9\x87\x8c\xe5\x8f\xaa\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\x90\x8e\xe7\xbb\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x94\xb9\xe6\x88\x90 TArray<TObjectPtr<UInv_BagBase>> \xe6\x9d\xa5\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/BagManagement/Components/Inv_BagComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xb4\xe6\x98\xaf\xe5\xad\x90\xe8\x83\x8c\xe5\x8c\x85\xef\xbc\x8c\xe4\xbd\x86\xe7\x9b\xae\xe5\x89\x8d\xe8\xae\xbe\xe8\xae\xa1\xe9\x87\x8c\xe5\x8f\xaa\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe5\x90\x8e\xe7\xbb\xad\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x94\xb9\xe6\x88\x90 TArray<TObjectPtr<UInv_BagBase>> \xe6\x9d\xa5\xe6\x94\xaf\xe6\x8c\x81\xe5\xa4\x9a\xe4\xb8\xaa\xe8\x83\x8c\xe5\x8c\x85\xe8\x8f\x9c\xe5\x8d\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BagList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BagMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BagMenuClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_BagComponent_Server_AddNewItem, "Server_AddNewItem" }, // 3462008421
		{ &Z_Construct_UFunction_UInv_BagComponent_Server_AddStacksToItem, "Server_AddStacksToItem" }, // 4095361594
		{ &Z_Construct_UFunction_UInv_BagComponent_TryAddItem, "TryAddItem" }, // 3349707815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_BagComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagList = { "BagList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagComponent, BagList), Z_Construct_UScriptStruct_FInv_BagFastArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BagList_MetaData), NewProp_BagList_MetaData) }; // 3824805418
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagMenu = { "BagMenu", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagComponent, BagMenu), Z_Construct_UClass_UInv_BagBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BagMenu_MetaData), NewProp_BagMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagMenuClass = { "BagMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_BagComponent, BagMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_BagBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BagMenuClass_MetaData), NewProp_BagMenuClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_BagComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_BagComponent_Statics::NewProp_BagMenuClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_BagComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BagSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_BagComponent_Statics::ClassParams = {
	&UInv_BagComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_BagComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_BagComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_BagComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_BagComponent()
{
	if (!Z_Registration_Info_UClass_UInv_BagComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_BagComponent.OuterSingleton, Z_Construct_UClass_UInv_BagComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_BagComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_BagComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_BagList(TEXT("BagList"));
	const bool bIsValid = true
		&& Name_BagList == ClassReps[(int32)ENetFields_Private::BagList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_BagComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_BagComponent);
UInv_BagComponent::~UInv_BagComponent() {}
// ********** End Class UInv_BagComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h__Script_BagSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_BagComponent, UInv_BagComponent::StaticClass, TEXT("UInv_BagComponent"), &Z_Registration_Info_UClass_UInv_BagComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_BagComponent), 2358164220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h__Script_BagSystem_432282500(TEXT("/Script/BagSystem"),
	Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h__Script_BagSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h__Script_BagSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
