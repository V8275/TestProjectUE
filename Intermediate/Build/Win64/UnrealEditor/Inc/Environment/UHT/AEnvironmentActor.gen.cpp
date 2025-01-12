// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Environment/AEnvironmentActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEnvironmentActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENVIRONMENT_API UClass* Z_Construct_UClass_AEnvironmentActor();
ENVIRONMENT_API UClass* Z_Construct_UClass_AEnvironmentActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Environment();
// End Cross Module References

// Begin Class AEnvironmentActor
void AEnvironmentActor::StaticRegisterNativesAEnvironmentActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnvironmentActor);
UClass* Z_Construct_UClass_AEnvironmentActor_NoRegister()
{
	return AEnvironmentActor::StaticClass();
}
struct Z_Construct_UClass_AEnvironmentActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AEnvironmentActor.h" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "EnvironmentActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnvironmentActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentActor_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnvironmentActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Environment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentActor_Statics::ClassParams = {
	&AEnvironmentActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnvironmentActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnvironmentActor()
{
	if (!Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton, Z_Construct_UClass_AEnvironmentActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnvironmentActor.OuterSingleton;
}
template<> ENVIRONMENT_API UClass* StaticClass<AEnvironmentActor>()
{
	return AEnvironmentActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironmentActor);
AEnvironmentActor::~AEnvironmentActor() {}
// End Class AEnvironmentActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvironmentActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnvironmentActor, AEnvironmentActor::StaticClass, TEXT("AEnvironmentActor"), &Z_Registration_Info_UClass_AEnvironmentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnvironmentActor), 4178236276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvironmentActor_h_2775802754(TEXT("/Script/Environment"),
	Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvironmentActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_Environment_AEnvironmentActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
