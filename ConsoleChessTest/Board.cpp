#include "Board.h"
#include <vector>;
#include <iostream>;

Board::Board()
{
	BoardChess = {"--a---b---c---d---e---f---g---h--",
				  "-    ####    ####    ####    ####",
				  "1    ####    ####    ####    ####",
				  "-    ####    ####    ####    ####",
				  "-####    ####    ####    ####    ",
				  "2####    ####    ####    ####    ",
				  "-####    ####    ####    ####    ",
				  "-    ####    ####    ####    ####",
				  "3    ####    ####    ####    ####",
				  "-    ####    ####    ####    ####",
				  "-####    ####    ####    ####    ",
				  "4####    ####    ####    ####    ",
				  "-####    ####    ####    ####    ",
				  "-    ####    ####    ####    ####",
				  "5    ####    ####    ####    ####",
				  "-    ####    ####    ####    ####",
				  "-####    ####    ####    ####    ",
				  "6####    ####    ####    ####    ",
				  "-####    ####    ####    ####    ",
				  "-    ####    ####    ####    ####",
				  "7    ####    ####    ####    ####",
				  "-    ####    ####    ####    ####",
				  "-####    ####    ####    ####    ",
				  "8####    ####    ####    ####    ",
	              "-####    ####    ####    ####    "};
	
}
void Board::Run(Figures& f)
{
	for (int j = 2; j < BoardChess[0].size(); j+=4)
	{
		BoardChess[5][j] = f.Pw[0];
		BoardChess[5][j + 1] = f.Pw[1];
	}
	for (int j = 2; j < BoardChess[0].size(); j += 4)
	{
		BoardChess[20][j] = f.Pb[0];
		BoardChess[20][j + 1] = f.Pb[1];
	}
	for (int i = 2; i < BoardChess.size(); i++)
	{
		for (int j = 2; j < BoardChess[i].size(); j++)
		{
			if ((j == 2 || j == 30) && i == 2)
			{
				BoardChess[i][j] = f.Rw[0];
				BoardChess[i][j+1] = f.Rw[1];
			}
			else if ((j == 6 || j == 26) && i == 2)
			{
				BoardChess[i][j] = f.Hw[0];
				BoardChess[i][j + 1] = f.Hw[1];
			}
			else if ((j == 2 || j == 30) && i == 23)
			{
				BoardChess[i][j] = f.Rb[0];
				BoardChess[i][j + 1] = f.Rb[1];
			}
			else if ((j == 6 || j == 26) && i == 23)
			{
				BoardChess[i][j] = f.Hb[0];
				BoardChess[i][j + 1] = f.Hb[1];
			}
			else if ((j == 10 || j == 22) && i == 2)
			{
				BoardChess[i][j] = f.Bw[0];
				BoardChess[i][j + 1] = f.Bw[1];
			}
			else if ((j == 10 || j == 22) && i == 23)
			{
				BoardChess[i][j] = f.Bb[0];
				BoardChess[i][j + 1] = f.Bb[1];
			}
			else if (j == 14  && i == 2)
			{
				BoardChess[i][j] = f.Kw[0];
				BoardChess[i][j + 1] = f.Kw[1];
			}
			else if (j == 18 && i == 23)
			{
				BoardChess[i][j] = f.Kw[0];
				BoardChess[i][j + 1] = f.Kw[1];
			}
			else if (j == 18 && i == 2)
			{
				BoardChess[i][j] = f.Qw[0];
				BoardChess[i][j + 1] = f.Qw[1];
			}
			else if (j == 14 && i == 23)
			{
				BoardChess[i][j] = f.Qb[0];
				BoardChess[i][j + 1] = f.Qb[1];
			}

		}
	}
	
	
}
/*void Board::PrintBoard(const std::string& BC)
{
	system("cls");

	for (const auto& item : BoardChess)
		std::cout << item << std::endl;
	std::cout << "\nAn example of a move: 'e2 e4' separated by a space" << std::endl;
}*/

std::vector<std::string>& Board::GetBoardChess()
{
	return BoardChess;
}
