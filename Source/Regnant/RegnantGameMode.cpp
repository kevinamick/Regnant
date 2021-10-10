// Copyright Epic Games, Inc. All Rights Reserved.

#include "RegnantGameMode.h"
#include "RegnantCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARegnantGameMode::ARegnantGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
