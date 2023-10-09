#include "BaseMainMenuWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BaseWidgetBackButton.h"

void UBaseMainMenuWidget::NativeConstruct()
{

	Play_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnPlayBtnClick);
	Options_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnOptionsBtnClick);
	Quit_Btn->OnClicked.AddDynamic(this, &UBaseMainMenuWidget::OnQuitBtnClick);

	Super::NativeConstruct();
}

void UBaseMainMenuWidget::OnPlayBtnClick()
{
	auto playWidget{ CreateWidget<UBaseWidgetBackButton>(GetWorld(), PlayWidgetClass) };
	playWidget->AddToViewport();
}

void UBaseMainMenuWidget::OnOptionsBtnClick()
{
	auto optionsWidget{ CreateWidget<UBaseWidgetBackButton>(GetWorld(), OptionsWidgetClass) };
	optionsWidget->AddToViewport();
}

void UBaseMainMenuWidget::OnQuitBtnClick()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(),EQuitPreference::Quit, false);
}
