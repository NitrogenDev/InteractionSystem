// Copyright Epic Games, Inc. All Rights Reserved.

#include "Interaction_SystemGameMode.h"
#include "Interaction_SystemHUD.h"
#include "Interaction_SystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteraction_SystemGameMode::AInteraction_SystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInteraction_SystemHUD::StaticClass();
}
