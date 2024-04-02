// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GAbilitySystemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GEAS_API UGAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGAbilitySystemComponent();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;

	virtual void GrabDebugSnapshot(FVisualLogEntry* Snapshot) const override;
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
