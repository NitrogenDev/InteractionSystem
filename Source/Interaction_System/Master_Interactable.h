// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Builders/CurvedStairBuilder.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Master_Interactable.generated.h"

UCLASS()
class INTERACTION_SYSTEM_API AMaster_Interactable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaster_Interactable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() PURE_VIRTUAL(AMaster_Interactable::Interact, );
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USceneComponent* _RootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;
};
