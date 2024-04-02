// Fill out your copyright notice in the Description page of Project Settings.


#include "GActorSlot.h"

#include "GEAS/Components/GAbilitySystemComponent.h"


// Sets default values
AGActorSlot::AGActorSlot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup Collider
	mBoxCollider = CreateDefaultSubobject<UBoxComponent>("Collision Component");
	mBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// Add Collider overlap delegates
	mBoxCollider->OnBeginCursorOver.AddDynamic(this, &AGActorSlot::OnMouseOverlap);
	mBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AGActorSlot::OnActorOverlap);
}

// Called when the game starts or when spawned
void AGActorSlot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGActorSlot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGActorSlot::OnMouseOverlap(UPrimitiveComponent* overlappedComponent)
{
	// HighlightBox

	// Wiggle
}

void AGActorSlot::OnActorOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor,
	UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult)
{
	UGAbilitySystemComponent* ASComp = Cast<UGAbilitySystemComponent>(otherActor->GetComponentByClass(UGAbilitySystemComponent::StaticClass()));
	if(ASComp && ASComp->HasMatchingGameplayTag(mAcceptedActorTag))
	{
		if(AddActorToSlot(otherActor))
		{
			// cool
		}
	}
}

bool AGActorSlot::AddActorToSlot(AActor* actorToHold)
{
	if(IsSlotOccupied())
	{
		return false;
	}
	
	mCurrentHeldActor = actorToHold;
	return true;
}

