// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmare_init() {}
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NuclearNightmare;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NuclearNightmare()
	{
		if (!Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NuclearNightmare",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x668C52A6,
				0x811625F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NuclearNightmare(Z_Construct_UPackage__Script_NuclearNightmare, TEXT("/Script/NuclearNightmare"), Z_Registration_Info_UPackage__Script_NuclearNightmare, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x668C52A6, 0x811625F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
