// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Environment/AEnvActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEnvActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENVIRONMENT_API UClass* Z_Construct_UClass_AAEnvActor();
ENVIRONMENT_API UClass* Z_Construct_UClass_AAEnvActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Environment();
// End Cross Module References

// Begin Class AAEnvActor
void AAEnvActor::StaticRegisterNativesAAEnvActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAEnvActor);
UClass* Z_Construct_UClass_AAEnvActor_NoRegister()
{
	return AAEnvActor::StaticClass();
}
struct Z_Construct_UClass_AAEnvActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AEnvActor.h" },
		{ "ModuleRelativePath", "AEnvActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAEnvActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAEnvActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Environment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAEnvActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAEnvActor_Statics::ClassParams = {
	&AAEnvActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAEnvActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAEnvActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAEnvActor()
{
	if (!Z_Registration_Info_UClass_AAEnvActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAEnvActor.OuterSingleton, Z_Construct_UClass_AAEnvActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAEnvActor.OuterSingleton;
}
template<> ENVIRONMENT_API UClass* StaticClass<AAEnvActor>()
{
	return AAEnvActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAEnvActor);
AAEnvActor::~AAEnvActor() {}
// End Class AAEnvActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAEnvActor, AAEnvActor::StaticClass, TEXT("AAEnvActor"), &Z_Registration_Info_UClass_AAEnvActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAEnvActor), 48548738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvActor_h_2718330952(TEXT("/Script/Environment"),
	Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
