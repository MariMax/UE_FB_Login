// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerInfo.generated.h"

class ULoginInfoComponent;

UCLASS()
class UEFIREBASEAUTH_API APlayerInfo : public APawn
{
	GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, Category="LoginInfo")
	ULoginInfoComponent* LoginInfo = nullptr;

public:
	// Sets default values for this pawn's properties
	APlayerInfo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
