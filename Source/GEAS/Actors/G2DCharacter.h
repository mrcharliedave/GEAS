#pragma once
#include "GameplayTagContainer.h"
#include "PaperCharacter.h"
#include "G2DCharacter.generated.h"

UCLASS()
class GEAS_API AG2DCharacter : public APaperCharacter
{
	GENERATED_UCLASS_BODY()
	UFUNCTION()
	void CreateCharacter();
public:

private:
	FGameplayTag mCharacterBaseType;
};
