// Fill out your copyright notice in the Description page of Project Settings.


#include "GAbilitySystemComponent.h"


// Sets default values for this component's properties
UGAbilitySystemComponent::UGAbilitySystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGAbilitySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGAbilitySystemComponent::GrabDebugSnapshot(FVisualLogEntry* Snapshot) const
{
	Super::GrabDebugSnapshot(Snapshot);
}

void UGAbilitySystemComponent::OnGameplayTaskActivated(UGameplayTask& Task)
{
	Super::OnGameplayTaskActivated(Task);
}

void UGAbilitySystemComponent::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	Super::OnGameplayTaskDeactivated(Task);
}

