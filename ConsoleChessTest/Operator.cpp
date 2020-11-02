#include "Operator.h"

void Operator::eGame(std::vector<std::string>& myBoard)
{
	int count = 0;
	
	while (1)
	{
		Game::PrintBoardChess(myBoard);
		if (count % 2 == 0)
			std::cout << "turn white" << std::endl;
		else
			std::cout << "turn black" << std::endl;
		//Game::UI(myBoard, count);
		if (Game::UI(myBoard, count))
			count++;
	}
}
