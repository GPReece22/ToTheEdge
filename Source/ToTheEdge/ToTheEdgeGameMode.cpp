// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToTheEdgeGameMode.h"
#include "ToTheEdgeHUD.h"
#include "ToTheEdgeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToTheEdgeGameMode::AToTheEdgeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AToTheEdgeHUD::StaticClass();
}
