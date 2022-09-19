#include "Board.h"

//int& Board::operator[] (int index) {
//	return (*this-> board[index]);
//}
int Board::getField(int x, int y) {
	return this->board[x][y];
}
void Board::setField(int v, int x, int y) {
	this->board[x][y] = v;
}