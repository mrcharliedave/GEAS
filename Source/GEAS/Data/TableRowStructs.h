// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "TableRowStructs.generated.h"

USTRUCT(BlueprintType)
struct FGeasRowBase : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	FGameplayTag mTypeTag;
};

USTRUCT(BlueprintType)
struct FGeasCharacterRow : public FGeasRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	FGameplayTag mBaseCreatureType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	FGameplayTag mBaseClassType;
	FGameplayTagContainer mBaseEnchantments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	float mMaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	float mBaseDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	float mBaseAttackRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS")
	float mBaseInventorySize;
};
