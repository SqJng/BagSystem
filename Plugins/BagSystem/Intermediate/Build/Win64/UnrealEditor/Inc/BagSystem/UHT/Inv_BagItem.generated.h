// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Inv_BagItem.h"

#ifdef BAGSYSTEM_Inv_BagItem_generated_h
#error "Inv_BagItem.generated.h already included, missing '#pragma once' in Inv_BagItem.h"
#endif
#define BAGSYSTEM_Inv_BagItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInv_BagItem *************************************************************
BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister();

#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_BagItem(); \
	friend struct Z_Construct_UClass_UInv_BagItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_BagItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BagSystem"), Z_Construct_UClass_UInv_BagItem_NoRegister) \
	DECLARE_SERIALIZER(UInv_BagItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemManifest=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemManifest	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UInv_BagItem) \
public:


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_BagItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_BagItem(UInv_BagItem&&) = delete; \
	UInv_BagItem(const UInv_BagItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_BagItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_BagItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_BagItem) \
	NO_API virtual ~UInv_BagItem();


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_27_PROLOG
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_BagItem;

// ********** End Class UInv_BagItem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_Items_Inv_BagItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
