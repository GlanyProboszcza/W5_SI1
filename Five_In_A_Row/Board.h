#pragma once
#include "Library.h"

class Board {

	std::vector <std::vector <int>> board;

public:
	//int& operator[] (int index);
	int getField(int x, int y);
	void setField(int v, int x, int y);
};

