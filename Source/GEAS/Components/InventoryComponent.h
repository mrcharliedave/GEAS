﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT()
struct FItem
{
	GENERATED_BODY()
	FGameplayTag mItemTag;
	FGameplayTag mItemModifierTag;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GEAS_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;

	bool GiveItem(FItem newItem);
	float GetInventorySpace() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TArray<FItem> mEquipment;
	float mInventorySize;
	
};
