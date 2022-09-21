#include "Board.h"

std::vector<int>& Board::operator[] (int index) {
	return (this-> board[index]);
}
//int Board::getField(int x, int y) {
//	return this->board[x][y];
//}
//void Board::setField(int v, int x, int y) {
//	this->board[x][y] = v;
//}
Board::Board() {
	return;
}

Board::Board(int x, int y) {

	std::vector <int> v;
	for (int j = 0; j < y; j++) {
		v.push_back(0);
	}

	for (int i = 0; i < x; i++) {
		this->board.push_back(v);
	}
}