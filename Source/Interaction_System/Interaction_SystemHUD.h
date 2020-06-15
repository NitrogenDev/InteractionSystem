// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Interaction_SystemHUD.generated.h"

UCLASS()
class AInteraction_SystemHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInteraction_SystemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

