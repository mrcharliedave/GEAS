#include "G2DCharacter.h"


AG2DCharacter::AG2DCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.DoNotCreateDefaultSubobject(ACharacter::MeshComponentName))
{
	// Initialise components
	mAbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("Ability Component");
	mHealthComponent = CreateDefaultSubobject<UHealthComponent>("Health Component");
	mAttackComponent = CreateDefaultSubobject<UAttackComponent>("Attack Component");
	mInventoryComponent = CreateDefaultSubobject<UInventoryComponent>("Inventory Component");
}

void AG2DCharacter::CreateCharacter(FGameplayTag characterToCreate)
{
	// Search DB for character
}
