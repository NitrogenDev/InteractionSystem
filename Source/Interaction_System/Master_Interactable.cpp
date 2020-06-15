// Fill out your copyright notice in the Description page of Project Settings.


#include "Master_Interactable.h"

// Sets default values
AMaster_Interactable::AMaster_Interactable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = _RootComponent;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMaster_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaster_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

