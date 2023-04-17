// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameInstanceSystemPlugin.h"
#include "BP_GameInstanceSubsystem.h"
#include "Engine/ObjectLibrary.h"

#define LOCTEXT_NAMESPACE "FGameInstanceSystemPluginModule"

void FGameInstanceSystemPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UObjectLibrary* ObjectLibrary = UObjectLibrary::CreateLibrary(UBP_GameInstanceSubsystem::StaticClass(),true,GIsEditor);
	if(!ObjectLibrary)
	{
		return;;
	}
	ObjectLibrary->AddToRoot();//防止被垃圾回收
	
	ObjectLibrary->LoadBlueprintAssetDataFromPath("/Content");
	ObjectLibrary->LoadAssetsFromAssetData();
	
}

void FGameInstanceSystemPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGameInstanceSystemPluginModule, GameInstanceSystemPlugin)