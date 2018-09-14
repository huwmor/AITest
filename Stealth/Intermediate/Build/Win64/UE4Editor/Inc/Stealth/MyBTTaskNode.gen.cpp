// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/MyBTTaskNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTaskNode() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UMyBTTaskNode_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UMyBTTaskNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UMyBTTaskNode::StaticRegisterNativesUMyBTTaskNode()
	{
	}
	UClass* Z_Construct_UClass_UMyBTTaskNode_NoRegister()
	{
		return UMyBTTaskNode::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTTaskNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTTaskNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTaskNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBTTaskNode.h" },
		{ "ModuleRelativePath", "MyBTTaskNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTTaskNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTaskNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTaskNode_Statics::ClassParams = {
		&UMyBTTaskNode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMyBTTaskNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyBTTaskNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBTTaskNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBTTaskNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBTTaskNode, 2357998409);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBTTaskNode(Z_Construct_UClass_UMyBTTaskNode, &UMyBTTaskNode::StaticClass, TEXT("/Script/Stealth"), TEXT("UMyBTTaskNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTaskNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
