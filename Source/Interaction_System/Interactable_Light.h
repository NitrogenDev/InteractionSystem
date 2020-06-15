// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Master_Interactable.h"
#include "Components/SpotLightComponent.h"
#include "Interactable_Light.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_SYSTEM_API AInteractable_Light : public AMaster_Interactable
{
	GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    
public:
    virtual void Interact() override;

    UPROPERTY()
    bool State;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Intensity;

    UPROPERTY(EditAnywhere)
    USpotLightComponent* Light;

    AInteractable_Light();
};
