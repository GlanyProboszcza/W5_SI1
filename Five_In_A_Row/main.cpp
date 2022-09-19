#include "Library.h"
#include "Game.h"

int main() {
	//for (int i = 0; i < 256; i++) {
	//	std::cout << i << " - " << (char)i << std::endl;
	//}

	Game game;
	bool isEnd;

	do {
		isEnd = game.runTime();
	} while (!isEnd);
}
