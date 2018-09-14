// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_AICharacterController_generated_h
#error "AICharacterController.generated.h already included, missing '#pragma once' in AICharacterController.h"
#endif
#define STEALTH_AICharacterController_generated_h

#define Stealth_Source_Stealth_AICharacterController_h_15_RPC_WRAPPERS
#define Stealth_Source_Stealth_AICharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_AICharacterController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacterController(); \
	friend struct Z_Construct_UClass_AAICharacterController_Statics; \
public: \
	DECLARE_CLASS(AAICharacterController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterController)


#define Stealth_Source_Stealth_AICharacterController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacterController(); \
	friend struct Z_Construct_UClass_AAICharacterController_Statics; \
public: \
	DECLARE_CLASS(AAICharacterController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterController)


#define Stealth_Source_Stealth_AICharacterController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterController(AAICharacterController&&); \
	NO_API AAICharacterController(const AAICharacterController&); \
public:


#define Stealth_Source_Stealth_AICharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterController(AAICharacterController&&); \
	NO_API AAICharacterController(const AAICharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacterController)


#define Stealth_Source_Stealth_AICharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocationToGoKey() { return STRUCT_OFFSET(AAICharacterController, LocationToGoKey); }


#define Stealth_Source_Stealth_AICharacterController_h_12_PROLOG
#define Stealth_Source_Stealth_AICharacterController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AICharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AICharacterController_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_AICharacterController_h_15_INCLASS \
	Stealth_Source_Stealth_AICharacterController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_AICharacterController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_AICharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_AICharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AICharacterController_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_AICharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_AICharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
