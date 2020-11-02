#pragma once
#include<iostream>


#include "Piece.h"
#include "Board.h"

class Game
{

public:
	static bool UI(std::vector<std::string>& BC,int count);
	
	static void PrintBoardChess(std::vector<std::string>& BC);	
};

