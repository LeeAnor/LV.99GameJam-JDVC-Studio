// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BP_GameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,Abstract)
class GAMEINSTANCESYSTEMPLUGIN_API UBP_GameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Deinitialize() override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;


public:
	UFUNCTION(BlueprintImplementableEvent,DisplayName="BeginPlay_DS")
	void ReciveInitialize();

	UFUNCTION(BlueprintImplementableEvent,DisplayName="Destory_DS")
	void ReciveDestory();

	UFUNCTION(BlueprintImplementableEvent,DisplayName="bCreateSubSystem")
	bool ShoudCreateSubSystem() const;

public:
	UFUNCTION(BlueprintPure,DisplayName="GetCharacter")
	FORCEINLINE ACharacter* GetCharacter() {return UGameplayStatics::GetPlayerCharacter(GetWorld(),0);}
	
	UFUNCTION(BlueprintPure,DisplayName="GetController")
	FORCEINLINE APlayerController* GetController() {return UGameplayStatics::GetPlayerController(GetWorld(),0);}


};
