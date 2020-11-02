#pragma once
#include <string>
#include <iostream>
#include "Board.h"


class Piece :public Board
{
private:
	std::string NameFigure;
	int VerticalAdress,
		HorizonralAdress;
public:	
	void setAdress(const char& sym, int& num);
	void DeletePiece(std::vector<std::string>& BC);
	void setNameFigure(std::vector<std::string>& BC);
	void setPieceNameFigure(std::vector<std::string>& BC);
	std::string getNameFigure();
	static bool flag();
};

