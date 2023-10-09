#pragma once

#include "CoreMinimal.h"
#include "BaseWidgetBackButton.h"
#include "WidgetPlayMenu.generated.h"

/**
 * 
 */
UCLASS()
class DALTON_CITY_API UWidgetPlayMenu : public UBaseWidgetBackButton
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* CreateLobby_Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* JoinLobby_Btn;

	// Possible next widgets to create
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CreateWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> JoinWidgetClass;

private:
	UFUNCTION()
	void OnCreateButtonClicked();
	UFUNCTION()
	void OnJoinButtonClicked();
};
