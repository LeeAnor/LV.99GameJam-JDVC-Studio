// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTextureEditor/Public/AnimatedTextureThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedTextureThumbnailRenderer() {}
// Cross Module References
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureThumbnailRenderer();
	ANIMATEDTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_AnimatedTextureEditor();
// End Cross Module References
	void UAnimatedTextureThumbnailRenderer::StaticRegisterNativesUAnimatedTextureThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedTextureThumbnailRenderer);
	UClass* Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_NoRegister()
	{
		return UAnimatedTextureThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTextureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimatedTextureThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/AnimatedTextureThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedTextureThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::ClassParams = {
		&UAnimatedTextureThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedTextureThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UAnimatedTextureThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedTextureThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAnimatedTextureThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimatedTextureThumbnailRenderer.OuterSingleton;
	}
	template<> ANIMATEDTEXTUREEDITOR_API UClass* StaticClass<UAnimatedTextureThumbnailRenderer>()
	{
		return UAnimatedTextureThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedTextureThumbnailRenderer);
	UAnimatedTextureThumbnailRenderer::~UAnimatedTextureThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedTextureThumbnailRenderer, UAnimatedTextureThumbnailRenderer::StaticClass, TEXT("UAnimatedTextureThumbnailRenderer"), &Z_Registration_Info_UClass_UAnimatedTextureThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedTextureThumbnailRenderer), 745055177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureThumbnailRenderer_h_2543894600(TEXT("/Script/AnimatedTextureEditor"),
		Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_Top_Down_RougleLike_Plugins_AnimatedTexturePlugin_Source_AnimatedTextureEditor_Public_AnimatedTextureThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
