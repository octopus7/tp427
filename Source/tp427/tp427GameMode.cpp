// Copyright Epic Games, Inc. All Rights Reserved.

#include "tp427GameMode.h"
#include "tp427Character.h"
#include "UObject/ConstructorHelpers.h"

Atp427GameMode::Atp427GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
