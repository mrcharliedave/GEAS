// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

USTRUCT(BlueprintInternalUseOnly)
struct FGeasRowBase : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	FGeasRowBase() { }
	virtual ~FGeasRowBase() { }

	FGameplayTag mTypeTag;
};
