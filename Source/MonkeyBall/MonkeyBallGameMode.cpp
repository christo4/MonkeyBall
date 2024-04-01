// Copyright Epic Games, Inc. All Rights Reserved.

#include "MonkeyBallGameMode.h"
#include "MonkeyBallCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonkeyBallGameMode::AMonkeyBallGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
