// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "GActorSlot.generated.h"

UCLASS()
class GEAS_API AGActorSlot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGActorSlot();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FGameplayTag GetAcceptedActorTag() const { return mAcceptedActorTag; };
	void SetAcceptedActorTag(FGameplayTag actorTag) { mAcceptedActorTag = actorTag; };

	UFUNCTION(BlueprintCallable)
	bool IsSlotOccupied() { return mCurrentHeldActor ? true : false; };

	UFUNCTION()
	void OnMouseOverlap(UPrimitiveComponent* overlappedComponent);

	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult & sweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	bool AddActorToSlot(AActor* actorToHold);
	
private:
	// Tags that this actor slot will accept to "hold"
	FGameplayTag mAcceptedActorTag;

	// Pointer to any actor currently "held" by slot
	UPROPERTY()
	AActor* mCurrentHeldActor;

	UPROPERTY()
	UBoxComponent* mBoxCollider;
};
