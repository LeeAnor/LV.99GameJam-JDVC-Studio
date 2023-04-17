// Fill out your copyright notice in the Description page of Project Settings.

#include "BP_GameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UBP_GameInstanceSubsystem::Deinitialize()
{
	// Super::Deinitialize();
	// UGameplayStatics::GetPlayerCharacter()
	ReciveDestory();
}

void UBP_GameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	ReciveInitialize();
}

bool UBP_GameInstanceSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return ShoudCreateSubSystem();
}

