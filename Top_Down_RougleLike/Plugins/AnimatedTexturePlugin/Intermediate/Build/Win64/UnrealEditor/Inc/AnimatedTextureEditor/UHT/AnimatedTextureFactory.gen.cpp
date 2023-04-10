// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTextureEditor/Public/AnimatedTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedTextureFactory() {}
// Cross Module References
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureFactory();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimatedTextureEditor();
// End Cross Module References
	void UAnimatedTextureFactory::StaticRegisterNativesUAnimatedTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedTextureFactory);
	UClass* Z_Construct_UClass_UAnimatedTextureFactory_NoRegister()
	{
		return UAnimatedTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTextureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import & Reimport Animated Texture Source, such as .gif file\n */" },
		{ "IncludePath", "AnimatedTextureFactory.h" },
		{ "ModuleRelativePath", "Public/AnimatedTextureFactory.h" },
		{ "ToolTip", "Import & Reimport Animated Texture Source, such as .gif file" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedTextureFactory_Statics::ClassParams = {
		&UAnimatedTextureFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimatedTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedTextureFactory.OuterSingleton, Z_Construct_UClass_UAnimatedTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimatedTextureFactory.OuterSingleton;
	}
	template<> ANIMATEDTEXTUREEDITOR_API UClass* StaticClass<UAnimatedTextureFactory>()
	{
		return UAnimatedTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedTextureFactory);
	UAnimatedTextureFactory::~UAnimatedTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedTextureFactory, UAnimatedTextureFactory::StaticClass, TEXT("UAnimatedTextureFactory"), &Z_Registration_Info_UClass_UAnimatedTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedTextureFactory), 2542508172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureFactory_h_1276182071(TEXT("/Script/AnimatedTextureEditor"),
		Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
