// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedTexture/Public/AnimatedTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedTexture2D() {}
// Cross Module References
	ANIMATEDTEXTURE_API UClass* Z_Construct_UClass_UAnimatedTexture2D_NoRegister();
	ANIMATEDTEXTURE_API UClass* Z_Construct_UClass_UAnimatedTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_AnimatedTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	DEFINE_FUNCTION(UAnimatedTexture2D::execGetAnimationLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimatedTexture2D::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UAnimatedTexture2D::StaticRegisterNativesUAnimatedTexture2D()
	{
		UClass* Class = UAnimatedTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationLength", &UAnimatedTexture2D::execGetAnimationLength },
			{ "GetPlayRate", &UAnimatedTexture2D::execGetPlayRate },
			{ "IsLooping", &UAnimatedTexture2D::execIsLooping },
			{ "IsPlaying", &UAnimatedTexture2D::execIsPlaying },
			{ "Play", &UAnimatedTexture2D::execPlay },
			{ "PlayFromStart", &UAnimatedTexture2D::execPlayFromStart },
			{ "SetLooping", &UAnimatedTexture2D::execSetLooping },
			{ "SetPlayRate", &UAnimatedTexture2D::execSetPlayRate },
			{ "Stop", &UAnimatedTexture2D::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics
	{
		struct AnimatedTexture2D_eventGetAnimationLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimatedTexture2D_eventGetAnimationLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "GetAnimationLength", nullptr, nullptr, sizeof(AnimatedTexture2D_eventGetAnimationLength_Parms), Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics
	{
		struct AnimatedTexture2D_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimatedTexture2D_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(AnimatedTexture2D_eventGetPlayRate_Parms), Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics
	{
		struct AnimatedTexture2D_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatedTexture2D_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimatedTexture2D_eventIsLooping_Parms), &Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "IsLooping", nullptr, nullptr, sizeof(AnimatedTexture2D_eventIsLooping_Parms), Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics
	{
		struct AnimatedTexture2D_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimatedTexture2D_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimatedTexture2D_eventIsPlaying_Parms), &Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "IsPlaying", nullptr, nullptr, sizeof(AnimatedTexture2D_eventIsPlaying_Parms), Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics
	{
		struct AnimatedTexture2D_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((AnimatedTexture2D_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimatedTexture2D_eventSetLooping_Parms), &Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "SetLooping", nullptr, nullptr, sizeof(AnimatedTexture2D_eventSetLooping_Parms), Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics
	{
		struct AnimatedTexture2D_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimatedTexture2D_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(AnimatedTexture2D_eventSetPlayRate_Parms), Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedTexture2D, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimatedTexture2D_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimatedTexture2D_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimatedTexture2D_NoRegister()
	{
		return UAnimatedTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportsTransparency_MetaData[];
#endif
		static void NewProp_SupportsTransparency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SupportsTransparency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFrameDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileBlob_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileBlob_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileBlob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimatedTexture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimatedTexture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatedTexture2D_GetAnimationLength, "GetAnimationLength" }, // 2543471033
		{ &Z_Construct_UFunction_UAnimatedTexture2D_GetPlayRate, "GetPlayRate" }, // 3080332917
		{ &Z_Construct_UFunction_UAnimatedTexture2D_IsLooping, "IsLooping" }, // 4211401452
		{ &Z_Construct_UFunction_UAnimatedTexture2D_IsPlaying, "IsPlaying" }, // 864658769
		{ &Z_Construct_UFunction_UAnimatedTexture2D_Play, "Play" }, // 3093673335
		{ &Z_Construct_UFunction_UAnimatedTexture2D_PlayFromStart, "PlayFromStart" }, // 3242646242
		{ &Z_Construct_UFunction_UAnimatedTexture2D_SetLooping, "SetLooping" }, // 2410359054
		{ &Z_Construct_UFunction_UAnimatedTexture2D_SetPlayRate, "SetPlayRate" }, // 2639450034
		{ &Z_Construct_UFunction_UAnimatedTexture2D_Stop, "Stop" }, // 1742522739
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AnimatedTexture" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AnimatedTexture2D.h" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	void Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency_SetBit(void* Obj)
	{
		((UAnimatedTexture2D*)Obj)->SupportsTransparency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency = { "SupportsTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimatedTexture2D), &Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_DefaultFrameDelay = { "DefaultFrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedTexture2D, DefaultFrameDelay), METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "Comment", "// used while Frame.Delay==0\n" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
		{ "ToolTip", "used while Frame.Delay==0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedTexture2D, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "AnimatedTexture" },
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	void Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UAnimatedTexture2D*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimatedTexture2D), &Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob_Inner = { "FileBlob", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob = { "FileBlob", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimatedTexture2D, FileBlob), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedTexture2D.h" },
	};
#endif
	void Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((UAnimatedTexture2D*)Obj)->bPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimatedTexture2D), &Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_SupportsTransparency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_DefaultFrameDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_FileBlob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedTexture2D_Statics::NewProp_bPlaying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedTexture2D_Statics::ClassParams = {
		&UAnimatedTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimatedTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimatedTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimatedTexture2D, 3962131735);
	template<> ANIMATEDTEXTURE_API UClass* StaticClass<UAnimatedTexture2D>()
	{
		return UAnimatedTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimatedTexture2D(Z_Construct_UClass_UAnimatedTexture2D, &UAnimatedTexture2D::StaticClass, TEXT("/Script/AnimatedTexture"), TEXT("UAnimatedTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
