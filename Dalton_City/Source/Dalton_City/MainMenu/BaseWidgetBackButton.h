#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "BaseWidgetBackButton.generated.h"


UCLASS()
class DALTON_CITY_API UBaseWidgetBackButton : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* Back_Btn;

private:
	UFUNCTION()
	void OnBackBtnClicked();
};
