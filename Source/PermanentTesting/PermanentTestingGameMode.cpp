// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PermanentTestingGameMode.h"
#include "PermanentTestingHUD.h"
#include "PermanentTestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

APermanentTestingGameMode::APermanentTestingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APermanentTestingHUD::StaticClass();
}
