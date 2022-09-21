#include "Player.h"

Player::Player()
{
	std::cout << "Enter player name: ";
	std::cin >> this->playerName;

}

void Player::setIcon(char icon)
{
	this->icon = icon;
}

char Player::getIcon()
{
	return this->icon;
}

std::string Player::getName()
{
	return this->playerName;
}
