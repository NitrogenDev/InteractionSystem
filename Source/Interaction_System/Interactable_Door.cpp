// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/KismetMathLibrary.h"
#include "Interactable_Door.h"

void AInteractable_Door::BeginPlay()
{
    Super::BeginPlay();

    if(CurveFloat)
    {
        DoorTimeline->AddInterpFloat(CurveFloat, InterpFunction, FName("Alpha"));
        DoorTimeline->SetTimelineFinishedFunc(TimelineFinish);
        DoorTimeline->SetLooping(false);
    }
}

AInteractable_Door::AInteractable_Door()
{
    DoorTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    InterpFunction.BindUFunction(this, FName("InterpReturn"));
    TimelineFinish.BindUFunction(this, FName("OnFinish"));

    Closed = true;
}

void AInteractable_Door::Interact()
{
    if(Closed)
    {
        DoorTimeline->Play();
    } else
    {
        DoorTimeline->Reverse();
    }
    Closed = !Closed;
}

void AInteractable_Door::OnFinish()
{
    
}

void AInteractable_Door::InterpReturn(float value)
{
    Mesh->SetRelativeRotation(FRotator(0, UKismetMathLibrary::Ease(0, -110, value, EEasingFunc::SinusoidalInOut), 0));
}
