// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable_Light.h"


AInteractable_Light::AInteractable_Light()
{
    State = true;
    Intensity = 100000.f;
    Light = CreateDefaultSubobject<USpotLightComponent>(TEXT("Light"));
    Light->SetupAttachment(GetRootComponent());
}

void AInteractable_Light::BeginPlay()
{
    Super::BeginPlay();
    Light->SetIntensity(Intensity);
}

void AInteractable_Light::Interact()
{
    if(State)
    {
        Light->SetIntensity(0);
    } else
    {
        Light->SetIntensity(Intensity);
    }
    State = !State;
}
