#pragma once
#include "GameplayTagContainer.h"
#include "PaperCharacter.h"
#include "G2DActor.generated.h"

UCLASS()
class GEAS_API AG2DActor : public APaperCharacter
{
	GENERATED_UCLASS_BODY()
	UFUNCTION()
	void CreateCharacter();
public:

private:
	FGameplayTag mCharacterBaseType;
};
