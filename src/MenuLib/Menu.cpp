#include"Menu.h"
#include"iostream"
#include<conio.h>

Menu::Menu(const std::string& Title, const std::vector<std::string>& Options) : Title(Title), Options(Options) {}

void Menu::clearScreen() {
	system("cls");
}

void Menu::pauseScreen() {
	system("pause");
}

int Menu::showMenu() {
	char button;
	while (true) {
		clearScreen();
		std::cout << "================" << Title << "================" << std::endl;
		for (size_t i = 0; i < Options.size(); ++i) {
			if (i == Selected) {
				std::cout << "[" << "+" << "]" << Options[i] << std::endl;
			}
			else {
				std::cout << "[" << " " << "]" << Options[i] << std::endl;
			}
		}
		button = _getch();
		if (button == 72 || button == 'w') Selected = (Selected - 1 + Options.size()) % Options.size();
		else if (button == 80 || button == 's') Selected = (Selected + 1) % Options.size();
		else if (button == '\r') return Selected;
	}
}