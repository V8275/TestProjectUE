// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AEnvActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENT_AEnvActor_generated_h
#error "AEnvActor.generated.h already included, missing '#pragma once' in AEnvActor.h"
#endif
#define ENVIRONMENT_AEnvActor_generated_h

#define FID_TestProject_Source_Environment_AEnvActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAEnvActor(); \
	friend struct Z_Construct_UClass_AAEnvActor_Statics; \
public: \
	DECLARE_CLASS(AAEnvActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Environment"), NO_API) \
	DECLARE_SERIALIZER(AAEnvActor)


#define FID_TestProject_Source_Environment_AEnvActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAEnvActor(AAEnvActor&&); \
	AAEnvActor(const AAEnvActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAEnvActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEnvActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAEnvActor) \
	NO_API virtual ~AAEnvActor();


#define FID_TestProject_Source_Environment_AEnvActor_h_9_PROLOG
#define FID_TestProject_Source_Environment_AEnvActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_Environment_AEnvActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_Environment_AEnvActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENVIRONMENT_API UClass* StaticClass<class AAEnvActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_Environment_AEnvActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
