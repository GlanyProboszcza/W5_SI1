#include "Five_In_A_Row.h"
#include <iostream>


void printLines(int columns)
{
    std::cout << "   ";
    for (int i = 0; i < columns; i++)
    {
        std::cout << " ---";
    }
    std::cout << std::endl;
}

void printNumbers(int columns)
{
    std::cout << "   ";
    for (int i = 0; i < columns; i++)
    {
        std::cout << "  " << i + 1 << " ";
    }
    std::cout << std::endl;
}

void drawBoard(int rows, int columns)
{
    printNumbers(columns);
    printLines(columns);
    for (int i = 0; i < rows; i++)
    {
        std::cout << " " << char('A' + i);
        for (int j = 0; j < columns; j++)
        {
            std::cout << " |  ";
        }
        std::cout << " | " << char('A' + i) << std::endl;
        printLines(columns);
    }
    printNumbers(columns);
}


int main()
{
    
}
