// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/AuraGameInstance.h"
#include "AbilitySystemGlobals.h"

void UAuraGameInstance::Init()
{
	Super::Init();

	UAbilitySystemGlobals::Get().InitGlobalData();
}
