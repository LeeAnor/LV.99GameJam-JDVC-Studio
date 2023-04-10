// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTextureEditor/Public/ReimportAnimatedTextureFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportAnimatedTextureFactory() {}
// Cross Module References
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory_NoRegister();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureFactory();
	UPackage* Z_Construct_UPackage__Script_AnimatedTextureEditor();
// End Cross Module References
	void UReimportAnimatedTextureFactory::StaticRegisterNativesUReimportAnimatedTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory_NoRegister()
	{
		return UReimportAnimatedTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimatedTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTextureEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reimport Animated Texture Source\n */" },
		{ "IncludePath", "ReimportAnimatedTextureFactory.h" },
		{ "ModuleRelativePath", "Public/ReimportAnimatedTextureFactory.h" },
		{ "ToolTip", "Reimport Animated Texture Source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportAnimatedTextureFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::ClassParams = {
		&UReimportAnimatedTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportAnimatedTextureFactory, 3798245655);
	template<> ANIMATEDTEXTUREEDITOR_API UClass* StaticClass<UReimportAnimatedTextureFactory>()
	{
		return UReimportAnimatedTextureFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportAnimatedTextureFactory(Z_Construct_UClass_UReimportAnimatedTextureFactory, &UReimportAnimatedTextureFactory::StaticClass, TEXT("/Script/AnimatedTextureEditor"), TEXT("UReimportAnimatedTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportAnimatedTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
