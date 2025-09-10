#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HW09Pawn.generated.h"

UCLASS()
class HW09_API AHW09Pawn : public APawn
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

};
