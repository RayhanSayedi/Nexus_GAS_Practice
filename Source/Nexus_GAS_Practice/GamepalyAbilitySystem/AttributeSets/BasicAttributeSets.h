// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BasicAttributeSets.generated.h"

/**
 * Basics Attribute Sets
 */
UCLASS()
class NEXUS_GAS_PRACTICE_API UBasicAttributeSets : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	
	UBasicAttributeSets();
	
	// Health Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSets, Health);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSets, MaxHealth);
	
	// Stamina Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSets, Stamina);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS_BASIC(UBasicAttributeSets, MaxStamina);
	
	
public:
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValues) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSets, Health, OldValues);
	}
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValues) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSets, MaxHealth, OldValues);
	}
	
	UFUNCTION()
	void OnRep_Stamina(const FGameplayAttributeData& OldValues) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSets, Stamina, OldValues);
	}
	
	UFUNCTION()
	void OnRep_MaxStamina(const FGameplayAttributeData& OldValues) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSets, MaxStamina, OldValues);
	}
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
