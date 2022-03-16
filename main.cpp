#include "board.h"

int main()
{
	int x, y;
	board board;
	char option = 'y';

	board.printBoard();
	while (option != 'n')
	{
		cout << endl << "Use Tile on Coordinate : ";
		cout << endl << "[Row]    : ";
		cin >> x;
		cout << "[Column] : ";
		cin >> y;
		board.use(x, y);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "use tiles again?";
		cin >> option;
	}
	
}
