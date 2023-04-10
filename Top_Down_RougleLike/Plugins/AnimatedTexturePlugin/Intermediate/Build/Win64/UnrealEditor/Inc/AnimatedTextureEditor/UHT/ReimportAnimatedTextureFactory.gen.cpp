// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTextureEditor/Public/ReimportAnimatedTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportAnimatedTextureFactory() {}
// Cross Module References
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureFactory();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimatedTextureEditor();
// End Cross Module References
	void UReimportAnimatedTextureFactory::StaticRegisterNativesUReimportAnimatedTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportAnimatedTextureFactory);
	UClass* Z_Construct_UClass_UReimportAnimatedTextureFactory_NoRegister()
	{
		return UReimportAnimatedTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimatedTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTextureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reimport Animated Texture Source\n */" },
		{ "IncludePath", "ReimportAnimatedTextureFactory.h" },
		{ "ModuleRelativePath", "Public/ReimportAnimatedTextureFactory.h" },
		{ "ToolTip", "Reimport Animated Texture Source" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportAnimatedTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UReimportAnimatedTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportAnimatedTextureFactory.OuterSingleton, Z_Construct_UClass_UReimportAnimatedTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportAnimatedTextureFactory.OuterSingleton;
	}
	template<> ANIMATEDTEXTUREEDITOR_API UClass* StaticClass<UReimportAnimatedTextureFactory>()
	{
		return UReimportAnimatedTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportAnimatedTextureFactory);
	UReimportAnimatedTextureFactory::~UReimportAnimatedTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_ReimportAnimatedTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_ReimportAnimatedTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportAnimatedTextureFactory, UReimportAnimatedTextureFactory::StaticClass, TEXT("UReimportAnimatedTextureFactory"), &Z_Registration_Info_UClass_UReimportAnimatedTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportAnimatedTextureFactory), 57409525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_ReimportAnimatedTextureFactory_h_4009006256(TEXT("/Script/AnimatedTextureEditor"),
		Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_ReimportAnimatedTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_ReimportAnimatedTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
