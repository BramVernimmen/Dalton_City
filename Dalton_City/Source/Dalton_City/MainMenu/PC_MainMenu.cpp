// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_MainMenu.h"
#include "BaseMainMenuWidget.h"


void APC_MainMenu::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() && MainMenuBPClass)
	{
		auto mainMenuWidget = CreateWidget<UBaseMainMenuWidget>(GetWorld(), MainMenuBPClass);
		mainMenuWidget->AddToViewport();
		SetShowMouseCursor(true);
		FInputModeUIOnly inputMode{};
		inputMode.SetWidgetToFocus(mainMenuWidget->GetCachedWidget());
		SetInputMode(inputMode);
	}
}
