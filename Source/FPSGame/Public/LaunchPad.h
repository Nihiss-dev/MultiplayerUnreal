// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchPad.generated.h"

class UBoxComponent;
class UParticleSystem;

UCLASS()
class FPSGAME_API ALaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchPad();


public:	

	UFUNCTION()
	void OverlapLaunchPad(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Overlap")
	UBoxComponent *OverlapComp;

	UPROPERTY(VisibleAnywhere, Category = "MeshComp")
	UStaticMeshComponent *MeshComp;

	UPROPERTY(EditInstanceOnly, Category = "Launch")
	int LaunchStrength;

	UPROPERTY(EditInstanceOnly, Category = "Launch")
	float LaunchPitchAngle;

	UPROPERTY(EditDefaultsOnly, Category = "Launch")
	UParticleSystem *ActivateLaunchPadEffect;
};
