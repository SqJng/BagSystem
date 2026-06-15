// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBagSystem_init() {}
	BAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature();
	BAGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BagSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BagSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_BagSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BagSystem_BagItemChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BagSystem_NoRoomInBag__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BagSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7FD5292E,
				0xD8045900,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BagSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BagSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BagSystem(Z_Construct_UPackage__Script_BagSystem, TEXT("/Script/BagSystem"), Z_Registration_Info_UPackage__Script_BagSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7FD5292E, 0xD8045900));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
