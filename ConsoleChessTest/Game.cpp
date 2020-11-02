#include "Game.h"


 bool Game::UI(std::vector<std::string>& BC, int count)
{
	char sym;
	int num;
	std::string suka;
	
	std::cin >> sym >> num;
	Piece piece;
	piece.setAdress(sym, num);
	piece.setNameFigure(BC);
	suka = piece.getNameFigure();
	if ((count%2 == 0) && (suka[1] == 'w'))
	{
		piece.DeletePiece(BC);
		std::cin >> sym >> num;
		piece.setAdress(sym, num);
		piece.setPieceNameFigure(BC);
		return true;
	}
	else if ((count % 2 != 0) && (suka[1] == 'b'))
	{
		piece.DeletePiece(BC);
		std::cin >> sym >> num;
		piece.setAdress(sym, num);
		piece.setPieceNameFigure(BC);
		return true;
	}
	else
		return false;
}

void Game::PrintBoardChess(std::vector<std::string>& BC)
{
	system("cls");
	
	for (const auto& item : BC)
		std::cout << item << std::endl;
	std::cout << "\nAn example of a move: 'e2 e4' separated by a space" << std::endl;

}



