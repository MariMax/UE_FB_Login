// Fill out your copyright notice in the Description page of Project Settings.

#include "UserPlayerController.h"
#include "LoginInfoComponent.h"

void AUserPlayerController::BeginPlay()
{
	auto loginInfoComponent = GetPawn()->FindComponentByClass<ULoginInfoComponent>();
	
	if (!ensure(loginInfoComponent)) { return; }
	LoginComponentReadyToUse(loginInfoComponent);
}
