// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTexture/Public/MaterialExpressionTextureSampleParameterAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterAnim() {}
// Cross Module References
	ANIMATEDTEXTURE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_NoRegister();
	ANIMATEDTEXTURE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	UPackage* Z_Construct_UPackage__Script_AnimatedTexture();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterAnim::StaticRegisterNativesUMaterialExpressionTextureSampleParameterAnim()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterAnim::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "MaterialExpressionTextureSampleParameterAnim.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionTextureSampleParameterAnim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterAnim::StaticClass,
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
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureSampleParameterAnim, 3604479460);
	template<> ANIMATEDTEXTURE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterAnim>()
	{
		return UMaterialExpressionTextureSampleParameterAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSampleParameterAnim(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterAnim, &UMaterialExpressionTextureSampleParameterAnim::StaticClass, TEXT("/Script/AnimatedTexture"), TEXT("UMaterialExpressionTextureSampleParameterAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
