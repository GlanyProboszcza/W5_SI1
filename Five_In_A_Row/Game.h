#pragma once
#include "Library.h"
#include "Player.h"
#include "Algorithms.h"
#include "Board.h"

class Game {
//private
	int heigth;
	int width;
	Player player1;
	Player player2;
	int round;
	Board gameBoard;

public:
	void printBoard();
	Game();
	bool runTime();


};

