// Copyright Epic Games, Inc. All Rights Reserved.

#include "VOX_Import_2GameMode.h"
#include "VOX_Import_2HUD.h"
#include "VOX_Import_2Character.h"
#include "UObject/ConstructorHelpers.h"

AVOX_Import_2GameMode::AVOX_Import_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVOX_Import_2HUD::StaticClass();
}
