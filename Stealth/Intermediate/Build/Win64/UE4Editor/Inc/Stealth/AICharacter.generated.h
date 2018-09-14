// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_AICharacter_generated_h
#error "AICharacter.generated.h already included, missing '#pragma once' in AICharacter.h"
#endif
#define STEALTH_AICharacter_generated_h

#define Stealth_Source_Stealth_AICharacter_h_12_RPC_WRAPPERS
#define Stealth_Source_Stealth_AICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_AICharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define Stealth_Source_Stealth_AICharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define Stealth_Source_Stealth_AICharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public:


#define Stealth_Source_Stealth_AICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacter)


#define Stealth_Source_Stealth_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_AICharacter_h_9_PROLOG
#define Stealth_Source_Stealth_AICharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AICharacter_h_12_RPC_WRAPPERS \
	Stealth_Source_Stealth_AICharacter_h_12_INCLASS \
	Stealth_Source_Stealth_AICharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_AICharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AICharacter_h_12_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_AICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
