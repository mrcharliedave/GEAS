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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS", meta=(Categories="GEAS.Character.Type"))
	FGameplayTag mTypeTag;
};

USTRUCT(BlueprintType)
struct FGeasCharacterRow : public FGeasRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character", meta=(Categories="GEAS.Character.Type.Creature"))
	FGameplayTag mBaseCreatureType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character", meta=(Categories="GEAS.Character.Type.Class"))
	FGameplayTag mBaseClassType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character")
	FGameplayTagContainer mBaseEnchantments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character")
	float mMaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character")
	float mBaseDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character")
	float mBaseAttackRate;
};

USTRUCT(BlueprintType)
struct FGeasPartyMemberRow : public FGeasCharacterRow
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character|Party", meta=(Categories="GEAS.Rarity"))
	FGameplayTag mCharacterRarity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character|Party")
	float mBaseInventorySize;
};

USTRUCT(BlueprintType)
struct FGeasEnemyRow : public FGeasCharacterRow
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GEAS|Character|Enemy", meta=(Categories="GEAS.Character.Type.Enemy.Rank"))
	FGameplayTag mEnemyRank;
};
