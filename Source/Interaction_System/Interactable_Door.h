// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Master_Interactable.h"
#include "Components/TimelineComponent.h"
#include "Interactable_Door.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_SYSTEM_API AInteractable_Door : public AMaster_Interactable
{
	GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

private:
    bool Closed;

public:
    AInteractable_Door();

    virtual void Interact() override;

    UFUNCTION()
    void OnFinish();

    UFUNCTION()
    void InterpReturn(float value);

    FOnTimelineFloat InterpFunction{};
    FOnTimelineEvent TimelineFinish{};

    UPROPERTY()
    UTimelineComponent* DoorTimeline;

    UPROPERTY(EditAnywhere)
    UCurveFloat* CurveFloat;
};
