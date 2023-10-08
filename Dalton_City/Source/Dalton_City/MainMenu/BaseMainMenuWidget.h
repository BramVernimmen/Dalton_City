// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "BaseMainMenuWidget.generated.h"


UCLASS()
class DALTON_CITY_API UBaseMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	// Buttons
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* Play_Btn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* Options_Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* Quit_Btn;


	// Possible next widgets to create
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> OptionsWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> PlayWidgetClass;

private:
	UFUNCTION()
	void OnPlayBtnClick();

	UFUNCTION()
	void OnOptionsBtnClick();

	UFUNCTION()
	void OnQuitBtnClick();


};
