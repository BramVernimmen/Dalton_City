#include "WidgetPlayMenu.h"

void UWidgetPlayMenu::NativeConstruct()
{
	CreateLobby_Btn->OnClicked.AddDynamic(this, &UWidgetPlayMenu::OnCreateButtonClicked);
	JoinLobby_Btn->OnClicked.AddDynamic(this, &UWidgetPlayMenu::OnJoinButtonClicked);

	Super::NativeConstruct();
}

void UWidgetPlayMenu::OnCreateButtonClicked()
{
	auto createWidget{ CreateWidget<UBaseWidgetBackButton>(GetWorld(), CreateWidgetClass) };
	createWidget->AddToViewport();
}

void UWidgetPlayMenu::OnJoinButtonClicked()
{
	auto joinWidget{ CreateWidget<UBaseWidgetBackButton>(GetWorld(), JoinWidgetClass) };
	joinWidget->AddToViewport();
}
