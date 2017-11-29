// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "HanoiBlock.generated.h"

UCLASS()
class UE4HANOISIM_API AHanoiBlock : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHanoiBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float Speed;
	FVector DestLoc; 
};