// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/AITargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITargetPoint() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AAITargetPoint_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAITargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AAITargetPoint::StaticRegisterNativesAAITargetPoint()
	{
	}
	UClass* Z_Construct_UClass_AAITargetPoint_NoRegister()
	{
		return AAITargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAITargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITargetPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AITargetPoint.h" },
		{ "ModuleRelativePath", "AITargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAITargetPoint_Statics::ClassParams = {
		&AAITargetPoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAITargetPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAITargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAITargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAITargetPoint, 3744797298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAITargetPoint(Z_Construct_UClass_AAITargetPoint, &AAITargetPoint::StaticClass, TEXT("/Script/Stealth"), TEXT("AAITargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
