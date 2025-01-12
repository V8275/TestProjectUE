// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironment_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Environment;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Environment()
	{
		if (!Z_Registration_Info_UPackage__Script_Environment.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Environment",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9B461844,
				0x6F5F02D2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Environment.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Environment.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Environment(Z_Construct_UPackage__Script_Environment, TEXT("/Script/Environment"), Z_Registration_Info_UPackage__Script_Environment, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9B461844, 0x6F5F02D2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
