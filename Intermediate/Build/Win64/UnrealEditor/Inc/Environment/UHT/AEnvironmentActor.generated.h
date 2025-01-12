// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AEnvironmentActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENT_AEnvironmentActor_generated_h
#error "AEnvironmentActor.generated.h already included, missing '#pragma once' in AEnvironmentActor.h"
#endif
#define ENVIRONMENT_AEnvironmentActor_generated_h

#define FID_TestProject_Source_Environment_AEnvironmentActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnvironmentActor(); \
	friend struct Z_Construct_UClass_AEnvironmentActor_Statics; \
public: \
	DECLARE_CLASS(AEnvironmentActor, AAEnvActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Environment"), NO_API) \
	DECLARE_SERIALIZER(AEnvironmentActor)


#define FID_TestProject_Source_Environment_AEnvironmentActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnvironmentActor(AEnvironmentActor&&); \
	AEnvironmentActor(const AEnvironmentActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnvironmentActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnvironmentActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnvironmentActor) \
	NO_API virtual ~AEnvironmentActor();


#define FID_TestProject_Source_Environment_AEnvironmentActor_h_7_PROLOG
#define FID_TestProject_Source_Environment_AEnvironmentActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_Environment_AEnvironmentActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_Environment_AEnvironmentActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENVIRONMENT_API UClass* StaticClass<class AEnvironmentActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_Environment_AEnvironmentActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
