#include <string>
#include <iostream>
#include"Board.h"
#include "Operator.h"


int main()
{
	std::vector<std::string> myBoard;
	Board b;
	Figures f;
	b.Run(f);
	int count = 0;
	myBoard = b.GetBoardChess();
	Operator::eGame(myBoard);
	
	
}
