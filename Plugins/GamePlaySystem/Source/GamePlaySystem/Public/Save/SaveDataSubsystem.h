// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/SaveGame.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "SaveDataSubsystem.generated.h"





/**
 * 
 */
UCLASS()
class GAMEPLAYSYSTEM_API USaveDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Deinitialize() override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable,Category="DS_Save",DisplayName="获取数据表RowName")
	void FindRow(const UDataTable* DT,TArray<FString>& RowNames);

	UFUNCTION(BlueprintCallable,Category="DS_Save",DisplayName="存储数据")
	bool SaveData(USaveGame* SaveGameIns,FString SaveName);

	UFUNCTION(BlueprintCallable,Category="DS_Save",DisplayName="获取数据")
	USaveGame* LoadData(FString SaveName);

	UFUNCTION(BlueprintCallable,Category="DS_Save",DisplayName="获取所有存档数据")
	TArray<USaveGame*> GetAllSlot();


public:

};

