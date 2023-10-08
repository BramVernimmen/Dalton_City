// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMainMenuWidget.h"
#include "Kismet/KismetSystemLibrary.h"

void UBaseMainMenuWidget::NativeConstruct()
{
	Play_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnPlayBtnClick);
	Options_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnOptionsBtnClick);
	Quit_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnQuitBtnClick);

}

void UBaseMainMenuWidget::OnPlayBtnClick()
{

}

void UBaseMainMenuWidget::OnOptionsBtnClick()
{

}

void UBaseMainMenuWidget::OnQuitBtnClick()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(),EQuitPreference::Quit, false);
}
