#pragma once
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "PaperCharacter.h"
#include "GEAS/Components/AttackComponent.h"
#include "GEAS/Components/HealthComponent.h"
#include "GEAS/Components/InventoryComponent.h"
#include "G2DCharacter.generated.h"

UCLASS()
class GEAS_API AG2DCharacter : public APaperCharacter
{
	GENERATED_UCLASS_BODY()
public:
	UFUNCTION()
	void CreateCharacter(FGameplayTag characterToCreate);
	
private:
	FGameplayTag mCharacterBaseType;

	UAbilitySystemComponent* mAbilitySystemComponent;
	UHealthComponent* mHealthComponent;
	UAttackComponent* mAttackComponent;
	UInventoryComponent* mInventoryComponent;
};
