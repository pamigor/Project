#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h>
#include<conio.h>

//using namespace std;

bool checking_progress(char m[][3], int x, int y) {
	if (x < 0 || y < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	if (x > 2 || y > 2) {
		std::cout << "The index is larger than the array size!\n";
		return true;
	}
	if (m[x][y] != ' ') {
		std::cout << "The cell is already occupied!\n";
		return true;
	} 
	return false;
}


bool victory(char m[][3]) {
	int checkDiagonalOne = 0, checkDiagonalTwo = 0, checkDraw = 0;
	for (int i = 0; i < 3; i++) {
		int checkString = 0, checkColumn = 0;
		for (int j = 0; j < 3; j++) {
			checkString += (int) m[i][j];
			checkColumn += (int) m[j][i];
			if (j == 2 && ((checkString == 264) || (checkColumn == 264))) {
				std::cout << "\nThe first player won!\n";
				return false;
			}
			else if (j == 2 && ((checkString == 237) || (checkColumn == 237))) {
				std::cout << "\nThe second player won!\n";
				return false;
			}
			if (m[i][j] == ' ') {
				checkDraw++;
			}
		}
		checkDiagonalOne += (int) m[i][i];
		checkDiagonalTwo += (int) m[2 - i][i];
		if ((checkDiagonalOne == 264) || (checkDiagonalTwo == 264)) {
			std::cout << "\nThe first player won!\n";
			return false;
		}
		else if ((checkDiagonalOne == 237) || (checkDiagonalTwo == 237)) {
			std::cout << "\nThe second player won!\n";
			return false;
		}
	}
	if (checkDraw == 0) {
		std::cout << "\nFriendship won!\n";
		return false;
	}
	else {
		return true;
	}
}

void print_field(char m[][3]) {
	std::cout << "\nCurrent situation in the game.\n\n";
	std::cout << "=========\n";
	for (int i = 0; i < 3; i++) {
		std::cout << "| ";
		for (int j = 0; j < 3; j++) {
			std::cout << m[i][j] << " ";
		}
		std::cout << "|\n";
	}
	std::cout << "=========\n";
}

int main()
{
	char game[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
	bool end = true;
	int playerTurn = 0;
	
	while (end) {
		system("cls");
		print_field(game);
		int coordinateX, coordinateY;
		bool flag = false;
		if (playerTurn == 0) {
			do {
			std::cout << "\nThe first player's turn.\n";
			std::cout << "Enter the coordinates of the cell: ";
			std::cin >> coordinateX >> coordinateY;
			flag = checking_progress(game, coordinateX, coordinateY);
			} while (flag);
			game[coordinateX][coordinateY] = 'X';
			end = victory(game);
			playerTurn++;
		}
		else if (playerTurn == 1) {
			do {
				std::cout << "\nThe second player's turn.\n";
				std::cout << "Enter the coordinates of the cell: ";
				std::cin >> coordinateX >> coordinateY;
				flag = checking_progress(game, coordinateX, coordinateY);
			} while (flag);
			game[coordinateX][coordinateY] = 'O';
			end = victory(game);
			playerTurn--;
		}
	}
	print_field(game);
}