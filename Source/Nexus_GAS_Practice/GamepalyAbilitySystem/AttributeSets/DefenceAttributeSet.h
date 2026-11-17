// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "DefenceAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class NEXUS_GAS_PRACTICE_API UDefenceAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
	UDefenceAttributeSet();
	
public:
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Defence", ReplicatedUsing = OnRep_Armor)
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS_BASIC(UDefenceAttributeSet, Armor);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes|Defence", ReplicatedUsing = OnRep_Shield)
	FGameplayAttributeData Shield;
	ATTRIBUTE_ACCESSORS_BASIC(UDefenceAttributeSet, Shield)
	
public:
	UFUNCTION()
	void OnRep_Armor(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDefenceAttributeSet, Armor, OldValue);
	}
	
	UFUNCTION()
	void OnRep_Shield(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UDefenceAttributeSet, Shield, OldValue);
	}
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};



