// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenceAttributeSet.h"

#include "Net/UnrealNetwork.h"

UDefenceAttributeSet::UDefenceAttributeSet()
{
	Armor = 100.f;
}

void UDefenceAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UDefenceAttributeSet, Armor, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UDefenceAttributeSet, Shield, COND_None, REPNOTIFY_Always)
}
