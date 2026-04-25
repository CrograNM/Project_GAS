// Copyright CrograNM

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CC_BaseCharacter.generated.h"

UCLASS(Abstract) 
class PROJECT_GAS_API ACC_BaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACC_BaseCharacter();

protected:
	virtual void BeginPlay() override;
};
