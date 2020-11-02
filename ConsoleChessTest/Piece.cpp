#include "Piece.h"





void Piece::setAdress(const char& sym, int& num)
{
	switch (sym)
	{
	case 'a': VerticalAdress = 2; break;
	case 'b': VerticalAdress = 6; break;
	case 'c': VerticalAdress = 10; break;
	case 'd': VerticalAdress = 14; break;
	case 'e': VerticalAdress = 18; break;
	case 'f': VerticalAdress = 22; break;
	case 'g': VerticalAdress = 26; break;
	case 'h': VerticalAdress = 30; break;
	}
	switch (num)
	{
	case 1: HorizonralAdress = 2; break;
	case 2: HorizonralAdress = 5; break;
	case 3: HorizonralAdress = 8; break;
	case 4: HorizonralAdress = 11; break;
	case 5: HorizonralAdress = 14; break;
	case 6: HorizonralAdress = 17; break;
	case 7: HorizonralAdress = 20; break;
	case 8: HorizonralAdress = 23; break;
	}
}

void Piece::DeletePiece(std::vector<std::string>& BC)
{
	if (BC[HorizonralAdress][VerticalAdress - 1] == ' ')
	{
		BC[HorizonralAdress][VerticalAdress] = ' ';
		BC[HorizonralAdress][VerticalAdress+1] = ' ';
	}
	else if (BC[HorizonralAdress][VerticalAdress - 1] == '#')
	{
		BC[HorizonralAdress][VerticalAdress] = '#';
		BC[HorizonralAdress][VerticalAdress + 1] = '#';
	}
}

void Piece::setNameFigure(std::vector<std::string>& BC)
{
	NameFigure = BC[HorizonralAdress][VerticalAdress];
	NameFigure += BC[HorizonralAdress][VerticalAdress+1];

}

void Piece::setPieceNameFigure(std::vector<std::string>& BC)
{
	BC[HorizonralAdress][VerticalAdress] = NameFigure[0];
	BC[HorizonralAdress][VerticalAdress + 1] = NameFigure[1];
}

std::string Piece::getNameFigure()
{
	return NameFigure;
}





