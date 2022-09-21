#pragma once
#include "Library.h"

class Board {

	std::vector <std::vector <int>> board;

public:
	std::vector<int>& operator[] (int index);
	Board();
	Board(int x, int y);
	//int getField(int x, int y);
	//void setField(int v, int x, int y);
};

