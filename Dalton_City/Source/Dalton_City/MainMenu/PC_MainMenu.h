// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_MainMenu.generated.h"


UCLASS()
class DALTON_CITY_API APC_MainMenu : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION()
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> MainMenuBPClass;
};
