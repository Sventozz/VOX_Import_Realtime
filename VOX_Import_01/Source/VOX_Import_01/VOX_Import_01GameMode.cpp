// Copyright Epic Games, Inc. All Rights Reserved.

#include "VOX_Import_01GameMode.h"
#include "VOX_Import_01HUD.h"
#include "VOX_Import_01Character.h"
#include "UObject/ConstructorHelpers.h"

AVOX_Import_01GameMode::AVOX_Import_01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVOX_Import_01HUD::StaticClass();
}
