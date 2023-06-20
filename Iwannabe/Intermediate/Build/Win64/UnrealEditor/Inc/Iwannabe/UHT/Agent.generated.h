// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Agent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWANNABE_Agent_generated_h
#error "Agent.generated.h already included, missing '#pragma once' in Agent.h"
#endif
#define IWANNABE_Agent_generated_h

#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_SPARSE_DATA
#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_RPC_WRAPPERS
#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_ACCESSORS
#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Iwannabe"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Iwannabe"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public: \
	NO_API virtual ~AAgent();


#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgent) \
	NO_API virtual ~AAgent();


#define FID_Iwannabe_Source_Iwannabe_Agent_h_13_PROLOG
#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_SPARSE_DATA \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_RPC_WRAPPERS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_ACCESSORS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_INCLASS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Iwannabe_Source_Iwannabe_Agent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_SPARSE_DATA \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_ACCESSORS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Iwannabe_Source_Iwannabe_Agent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWANNABE_API UClass* StaticClass<class AAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Iwannabe_Source_Iwannabe_Agent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
