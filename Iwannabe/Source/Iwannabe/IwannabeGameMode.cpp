// Copyright Epic Games, Inc. All Rights Reserved.

#include "IwannabeGameMode.h"
#include "IwannabeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIwannabeGameMode::AIwannabeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
