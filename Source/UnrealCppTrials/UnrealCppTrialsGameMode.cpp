// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnrealCppTrials.h"
#include "UnrealCppTrialsGameMode.h"
#include "UnrealCppTrialsCharacter.h"

AUnrealCppTrialsGameMode::AUnrealCppTrialsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
