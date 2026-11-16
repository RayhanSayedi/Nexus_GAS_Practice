// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAttributeSets.h"

#include "Net/UnrealNetwork.h"

UBasicAttributeSets::UBasicAttributeSets()
{
	Health = 100.f;
	MaxHealth = 100.f;
	Stamina = 100.f;
	MaxStamina = 100.f;
}

void UBasicAttributeSets::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributeSets, Health, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributeSets, MaxHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributeSets, Stamina, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UBasicAttributeSets, MaxStamina, COND_None, REPNOTIFY_Always)
}
