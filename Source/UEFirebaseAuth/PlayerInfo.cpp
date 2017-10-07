// Fill out your copyright notice in the Description page of Projec""t Settings.

#include "PlayerInfo.h"
#include "LoginInfoComponent.h"


// Sets default values
APlayerInfo::APlayerInfo()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LoginInfo = CreateDefaultSubobject<ULoginInfoComponent>(FName("Login Info Component"));

}

// Called when the game starts or when spawned
void APlayerInfo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerInfo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerInfo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

