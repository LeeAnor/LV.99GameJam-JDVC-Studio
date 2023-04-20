// Fill out your copyright notice in the Description page of Project Settings.


#include "Save/SaveDataSubsystem.h"

#define PRINT(WORLD)\
GEngine->AddOnScreenDebugMessage(-1,2.f,FColor::Cyan,WORLD);\


// USTRUCT(BlueprintType)
// struct FStruct : public FTableRowBase
// {
// 	GENERATED_BODY()
// 	
// };

#include "Engine/DataTable.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"

void USaveDataSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void USaveDataSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void USaveDataSubsystem::FindRow(const UDataTable* DT,TArray<FString>& RowNames)
{
	if(DT)
	{
		for(FName RowName : DT->GetRowNames())
		{
			RowNames.Add(RowName.ToString());
			// return  DT->FindRow<UStruct>(RowName,"Content");
		}
	}
}

bool USaveDataSubsystem::SaveData(USaveGame* SaveGameIns,FString SaveName)
{
	// UGameplayStatics::SaveGameToSlot()
	if(UGameplayStatics::SaveGameToSlot(SaveGameIns, SaveName, 0))
	{
		return true;
	}
		return false;

	
}

USaveGame* USaveDataSubsystem::LoadData(FString SaveName)
{
	if(UGameplayStatics::LoadGameFromSlot(SaveName,0))
	{
		return UGameplayStatics::LoadGameFromSlot(SaveName,0);
	}
		PRINT("No Data!")
		return nullptr;
}

TArray<USaveGame*> USaveDataSubsystem::GetAllSlot()
{
	TArray<USaveGame*> GameInfos;
	FString SaveFileName = FPaths::ProjectSavedDir()+"SaveGames/";
	// PRINT(SaveFileName);
	IFileManager& MyFileManager = IFileManager::Get();
	if (MyFileManager.DirectoryExists(*SaveFileName))
	{
		TArray<FString> AssetName;
		MyFileManager.FindFiles(AssetName,*SaveFileName);
		for(auto NameParse : AssetName)
		{
			FString Name = NameParse.Replace(TEXT(".sav"),TEXT(""));
			// LoadData(Name);
			PRINT(Name);
			if(LoadData(Name))
			{
				GameInfos.Add(LoadData(Name));			
			}
		}
		return GameInfos;
	}
	return GameInfos;
}
