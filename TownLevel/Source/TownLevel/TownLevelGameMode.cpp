// Copyright Epic Games, Inc. All Rights Reserved.

#include "TownLevelGameMode.h"
#include "TownLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATownLevelGameMode::ATownLevelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
