// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UserPlayerController.generated.h"

class ULoginInfoComponent;

/**
 * 
 */
UCLASS()
class UEFIREBASEAUTH_API AUserPlayerController : public APlayerController
{
	GENERATED_BODY()
	void BeginPlay() override;
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void LoginComponentReadyToUse(ULoginInfoComponent* LoginInfoComponentRef);
	
};
