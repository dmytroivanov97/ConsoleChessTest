#pragma once
#include <vector>
#include <string>
#include "Figures.h"


class Board
{
public:
	Board();
	void Run(Figures& f);
	//void PrintBoard(const std::string& BC);
	std::vector<std::string>& GetBoardChess();
protected:
	std::vector<std::string> BoardChess; 
};

