// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BagManagement/Utils/Inv_BagStatics.h"

#ifdef BAGSYSTEM_Inv_BagStatics_generated_h
#error "Inv_BagStatics.generated.h already included, missing '#pragma once' in Inv_BagStatics.h"
#endif
#define BAGSYSTEM_Inv_BagStatics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UInv_BagComponent;

// ********** Begin Class UInv_BagStatics **********************************************************
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBagComponent);


BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagStatics_NoRegister();

#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_BagStatics(); \
	friend struct Z_Construct_UClass_UInv_BagStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BAGSYSTEM_API UClass* Z_Construct_UClass_UInv_BagStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_BagStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BagSystem"), Z_Construct_UClass_UInv_BagStatics_NoRegister) \
	DECLARE_SERIALIZER(UInv_BagStatics)


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_BagStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_BagStatics(UInv_BagStatics&&) = delete; \
	UInv_BagStatics(const UInv_BagStatics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_BagStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_BagStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_BagStatics) \
	NO_API virtual ~UInv_BagStatics();


#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_24_PROLOG
#define FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_INCLASS_NO_PURE_DECLS \
	FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_BagStatics;

// ********** End Class UInv_BagStatics ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Software_Epic_Games_Unreal_Projects_beibaoxitong_Plugins_BagSystem_Source_BagSystem_Public_BagManagement_Utils_Inv_BagStatics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
