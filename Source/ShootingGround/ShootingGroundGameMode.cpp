// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShootingGroundGameMode.h"
#include "ShootingGroundHUD.h"
#include "ShootingGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingGroundGameMode::AShootingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootingGroundHUD::StaticClass();
}
