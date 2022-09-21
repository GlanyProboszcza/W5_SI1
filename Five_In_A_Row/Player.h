#pragma once
#include "Library.h"

class Player
{
	std::string playerName;
	char icon;

public:
	Player();
	void setIcon(char icon);
	char getIcon();
	std::string getName();
};

