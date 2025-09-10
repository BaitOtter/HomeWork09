#include "HW09Pawn.h"
#include "HW09.h"


void AHW09Pawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetModeString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("HW09Pawn::BeginPlay() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetModeString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void AHW09Pawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetModeString = HW09FunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("HW09Pawn::PossessedBy() %s [%s]"), *HW09FunctionLibrary::GetNetModeString(this), *NetModeString);
	HW09FunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}
