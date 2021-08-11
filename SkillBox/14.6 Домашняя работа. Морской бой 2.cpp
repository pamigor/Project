#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h>
#include <conio.h>

//using namespace std;

void creatingFild(char m[][10]) { /*Инициализация массива*/
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			m[i][j] = ' ';
		}
	}
}

void creatingCheck(char m[][12]) { /*Инициализация шаблона*/
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			m[i][j] = ' ';
		}
	}
}

void fieldOutput(char m[][10], int n) { /*Вывод игрового поля на экран*/
	system("cls");
	std::cout << "Weaving situation on the field of the " << n << " player.\n\n";
	std::cout << "  0123456789\n";
	std::cout << " ============\n";
	for (int i = 0; i < 10; i++) {
		std::cout << i << "|";
		for (int j = 0; j < 10; j++) {
			std::cout << m[i][j];
		}
		std::cout << "|\n";
	}
	std::cout << " ============\n";
}

bool check_cells(char m[][12], char simbol, int x, int y) { /*Проверка соседних клеток*/
	int dY[] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	int dX[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	for (int i = 0; i < 8; i++) {
		if ((m[x + dX[i]][y + dY[i]] != ' ') && (m[x + dX[i]][y + dY[i]] != simbol)) {
			std::cout << "There is another ship nearby.\n";
			std::cout << "Press enter to continue.\n";
			system("pause");
			return true;
		}
	}
	return false;
}

bool check_input(char m[][12], int x1, int y1, int x2, int y2, int kolDeck, int kShip) { /*Проверка ввода*/
	if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	else if (x1 > 9 || y1 > 9 || x2 > 9 || y2 > 9) {
		std::cout << "The index is larger than the input size!\n";
		return true;
	}
	else if (x1 != x2 && y1 != y2) {
		std::cout << "Invalid ship shape!\n";
		return true;
	}
	else if ((x1 == x2) && (abs(y2 - y1) != (kolDeck - 1))) {
		std::cout << "Invalid ship shape!\n";
		return true;
	}
	else if ((y1 == y2) && (abs(x2 - x1) != (kolDeck - 1))) {
		std::cout << "Invalid ship shape!\n";
		return true;
	}

	for (int i = x1 + 1; i <= x2 + 1; i++) {
		for (int j = y1 + 1; j <= y2 + 1; j++) {
			if (m[i][j] != ' ') {
				std::cout << "The cell is already occupied!\n";
				return true;
			}
		}
	}

	for (int i = std::min(x1 + 1, x2 + 1); i <= std::max(x1 + 1, x2 + 1); i++) {
		for (int j = std::min(y1 + 1, y2 + 1); j <= std::max(y1 + 1, y2 + 1); j++) {
			if ((kolDeck == 3) && (kShip == 1)) {
				return check_cells(m, 'A', i, j);
			}
			else if ((kolDeck == 3) && (kShip == 2)) {
				return check_cells(m, 'B', i, j);
			}
			else if ((kolDeck == 2) && (kShip == 1)) {
				return check_cells(m, 'C', i, j);
			}
			else if ((kolDeck == 2) && (kShip == 2)) {
				return check_cells(m, 'D', i, j);
			}
			else if ((kolDeck == 2) && (kShip == 3)) {
				return check_cells(m, 'E', i, j);
			}
			else if (kolDeck == 1) {
				return check_cells(m, ' ', i, j);
			}
		}
	}
	return false;
}

bool check_progress(char m[][10], int x, int y) { /*Проверка хода*/
	if (x < 0 || y < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	else if (x > 9 || y > 9) {
		std::cout << "The index is larger than the input size!\n";
		return true;
	}
	else if (m[x][y] == '*') {
		std::cout << "Repeat move!\n";
		return true;
	}
	return false;
}

void check_vin(char m[][10], int n) { /*Проверка победителя*/
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (m[i][j] == 'X') {
				sum++;
			}
		}
	}
	if (sum == 20) {
		fieldOutput(m, n);
		std::cout << "==========================================\n";
		std::cout << "|| Congratulations!!! The " << n << " player won. ||\n";
		std::cout << "==========================================\n";
		exit(0);
	}
}

void creatingShip(char m[][10], char m1[][12], int n, int kolDeck, int kShip) { /*Создание корабля*/
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	for (int k = 0; k < kShip; k++) {
		do {
			std::cout << "\nPlacement of the " << n << " player's ships.";
			std::cout << "\nEnter the coordinates of the " << kolDeck << "-deck ship: ";

			if (kolDeck == 1) {
				std::cin >> x1 >> y1;
				x2 = x1;
				y2 = y1;
			}
			else {
				std::cin >> x1 >> y1 >> x2 >> y2;
			}
		} while (check_input(m1, x1, y1, x2, y2, kolDeck, kShip));
		for (int i = std::min(x1 + 1, x2 + 1); i <= std::max(x1 + 1, x2 + 1); i++) {
			for (int j = std::min(y1 + 1, y2 + 1); j <= std::max(y1 + 1, y2 + 1); j++) {
		 		if (kolDeck == 4) {
					m1[i][j] = 'F';
				}
				else if ((kolDeck == 3) && (kShip == 1)) {
					m1[i][j] = 'A';
				}
				else if ((kolDeck == 3) && (kShip == 2)) {
					m1[i][j] = 'B';
				}
				else if ((kolDeck == 2) && (kShip == 1)) {
					m1[i][j] = 'C';
				}
				else if ((kolDeck == 2) && (kShip == 2)) {
					m1[i][j] = 'D';
				}
				else if ((kolDeck == 2) && (kShip == 3)) {
					m1[i][j] = 'E';
				}
				else if (kolDeck == 1) {
					m1[i][j] = 'G';
				}
				m[i - 1][j - 1] = 'O';
			}
		}
		system("cls");
		fieldOutput(m, n);
	}
}


void shipPlacement(char m[][10], char m1[][12], int n) { /*Расстановка кораблей*/
	int deck = 4; 
	int kolShip = 1;	
	creatingShip(m, m1, n, deck, kolShip);
	deck--;
	kolShip++;
	creatingShip(m, m1, n, deck, kolShip);
	deck--;
	kolShip++;
	creatingShip(m, m1, n, deck, kolShip);
	deck--;
	kolShip++;
	creatingShip(m, m1, n, deck, kolShip);
	std::cout << "Press enter to continue.\n";
	system("pause");

}

bool playersTurn(char ship[][10], char game[][10], int n) { /*Ход игрока*/
	system("cls");
	fieldOutput(game, n);
	int x, y;
	bool conclusion = false;
	std::cout << "\n" << n << " player's turn.\n";
	do {
		std::cout << "Enter the coordinates of the impact: ";
		std::cin >> x >> y;
	} while (check_progress(game, x, y));
	if (ship[x][y] == 'O') {
		game[x][y] = 'X';
		std::cout << "You are a real gunner. Target hit!\n";
		std::cout << "Press enter to continue.\n";
		system("pause");
		check_vin(game, n);
		conclusion = true;
	}
	else if (ship[x][y] == ' ') {
		game[x][y] = '*';
		std::cout << "Your kick missed the target!\n";
		std::cout << "Press enter to continue.\n";
		system("pause");
		conclusion = false;
	}
	return conclusion;
}

int main() {
	int playerNumber = 1;
	char firstPlayerField[10][10]; 
	char secondPlayerField[10][10];

	char firstPlayerCheck[12][12];
	char secondPlayerCheck[12][12];

	char firstPlayerGame[10][10];
	char secondPlayerGame[10][10];

	creatingFild(firstPlayerField); //Инициализация массива расстановки кораблей 1 игрока
	creatingFild(secondPlayerField); //Инициализация массива расстановки кораблей 2 игрока

	creatingCheck(firstPlayerCheck); //Инициализация массива проверки кораблей 1 игрока
	creatingCheck(secondPlayerCheck); //Инициализация массива проверки кораблей 2 игрока

	creatingFild(firstPlayerGame); //Инициализация массива игрового поля 1 игрока
	creatingFild(secondPlayerGame); //Инициализация массива игрового поля 2 игрока

	fieldOutput(firstPlayerField, playerNumber);
	shipPlacement(firstPlayerField, firstPlayerCheck, playerNumber); //Расстановка кораблей 1 игрока
	playerNumber++;
	
	fieldOutput(secondPlayerField, playerNumber);
	shipPlacement(secondPlayerField, secondPlayerCheck, playerNumber); //Расстановка кораблей 2 игрока
	playerNumber--;
	
	bool flag = true;
	while (true) {
		if (playerNumber == 1) {
			flag = playersTurn(firstPlayerField, firstPlayerGame, playerNumber);
			if (flag == false) { 
				playerNumber++; 
			}
		}
		else if (playerNumber == 2) {
			flag = playersTurn(secondPlayerField, secondPlayerGame, playerNumber);
			if (flag == false) {
				playerNumber--;
			}
		}
	}
}
