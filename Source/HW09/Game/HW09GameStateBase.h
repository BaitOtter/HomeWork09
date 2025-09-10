#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "HW09GameStateBase.generated.h"

class AHW09PlayerController;

/**
 *
 */
UCLASS()
class HW09_API AHW09GameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCBroadcastLoginMessage(const FString& InNameString = FString(TEXT("XXXXXXX")));

	FString GenerateSecretNumber();

	bool IsGuessNumberString(const FString& InNumberString);

	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);

};
