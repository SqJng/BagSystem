// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BagManagement/Components/Inv_BagComponent.h"

#ifdef BAGSYSTEM_Inv_BagComponent_generated_h
#error "Inv_BagComponent.generated.h already included, missing '#pragma once' in Inv_BagComponent.h"
#endif
#define BAGSYSTEM_Inv_BagComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_BagItem;
class UInv_ItemComponent;

// ********** Begin Delegate FBagItemChange ********************************************************
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_14_DELEGATE \
BAGSYSTEM_API void FBagItemChange_DelegateWrapper(const FMulticastScriptDelegate& BagItemChange, UInv_BagItem* Item);


// ********** End Delegate FBagItemChange **********************************************************

// ********** Begin Delegate FNoRoomInBag **********************************************************
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_15_DELEGATE \
BAGSYSTEM_API void FNoRoomInBag_DelegateWrapper(const FMulticastScriptDelegate& NoRoomInBag);


// ********** End Delegate FNoRoomInBag ************************************************************

// ********** Begin Class UInv_BagComponent ********************************************************
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_AddNewItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount); \
	virtual void Server_AddStacksToItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount, int32 Remainder); \
	DECLARE_FUNCTION(execServer_AddNewItem); \
	DECLARE_FUNCTION(execServer_AddStacksToItem); \
	DECLARE_FUNCTION(execTryAddItem);


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_CALLBACK_WRAPPERS
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagComponent_NoRegister();

#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_BagComponent(); \
	friend struct Z_Construct_UClass_UInv_BagComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_BagComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BagSystem"), Z_Construct_UClass_UInv_BagComponent_NoRegister) \
	DECLARE_SERIALIZER(UInv_BagComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BagList=NETFIELD_REP_START, \
		NETFIELD_REP_END=BagList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_BagComponent(UInv_BagComponent&&) = delete; \
	UInv_BagComponent(const UInv_BagComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_BagComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_BagComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInv_BagComponent) \
	NO_API virtual ~UInv_BagComponent();


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_40_PROLOG
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_CALLBACK_WRAPPERS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_BagComponent;

// ********** End Class UInv_BagComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Components_Inv_BagComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
