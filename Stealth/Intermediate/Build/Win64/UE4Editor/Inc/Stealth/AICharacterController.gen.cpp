// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/AICharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterController() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AAICharacterController_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAICharacterController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AAICharacterController::StaticRegisterNativesAAICharacterController()
	{
	}
	UClass* Z_Construct_UClass_AAICharacterController_NoRegister()
	{
		return AAICharacterController::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AICharacterController.h" },
		{ "ModuleRelativePath", "AICharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AICharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAICharacterController_Statics::NewProp_LocationToGoKey = { UE4CodeGen_Private::EPropertyClass::Name, "LocationToGoKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AAICharacterController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_AAICharacterController_Statics::NewProp_LocationToGoKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAICharacterController_Statics::NewProp_LocationToGoKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterController_Statics::NewProp_LocationToGoKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacterController_Statics::ClassParams = {
		&AAICharacterController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		Z_Construct_UClass_AAICharacterController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAICharacterController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacterController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAICharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacterController, 107783165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacterController(Z_Construct_UClass_AAICharacterController, &AAICharacterController::StaticClass, TEXT("/Script/Stealth"), TEXT("AAICharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
