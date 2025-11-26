#pragma once
#include<vector>
#include<string>
#include<iostream>

class Menu {
private:
	std::vector<std::string> Options;
	std::string Title;
	int Selected = 0;
public:
	Menu(const std::string& Title, const std::vector<std::string>& Options);
	int showMenu();
	static void clearScreen();
	static void pauseScreen();
};