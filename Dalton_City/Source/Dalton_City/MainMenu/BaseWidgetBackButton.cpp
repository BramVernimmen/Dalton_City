// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWidgetBackButton.h"

void UBaseWidgetBackButton::NativeConstruct()
{
	Back_Btn->OnClicked.AddDynamic(this, &UBaseWidgetBackButton::OnBackBtnClicked);
	Super::NativeConstruct();
}

void UBaseWidgetBackButton::OnBackBtnClicked()
{
	RemoveFromParent();
}
