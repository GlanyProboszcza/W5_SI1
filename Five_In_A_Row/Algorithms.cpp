#include "Algorithms.h"

bool isStringInt(std::string input)
{
	for (int i = 0; i < input.length(); i++) {
		if (!isdigit(input[i]))
			return 0;
	}
	return 1;
}
