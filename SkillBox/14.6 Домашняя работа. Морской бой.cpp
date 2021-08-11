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
#include <conio.h>

//using namespace std;

for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {
		m[i][j] = ' ';
	}
}
}

void creatingFild(char m[][10]) { /*Инициализация массива*/
	void fieldOutput(char m[][10], int n) { /*Вывод поля на экран*/
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

	bool check_input(char m[][10], int x1, int y1, int x2, int y2, int kol) { /*Проверка ввода*/
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
		else if ((x1 == x2) && (abs(y2 - y1) != (kol - 1))) {
			std::cout << "Invalid ship shape!\n";
			return true;
		}
		else if ((y1 == y2) && (abs(x2 - x1) != (kol - 1))) {
			std::cout << "Invalid ship shape!\n";
			return true;
		}

		for (int i = x1; i <= x2; i++) {
			for (int j = y1; j <= y2; j++) {
				if (m[i][j] == 'X') {
					std::cout << "The cell is already occupied!\n";
					return true;
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

	int check_vin(char m[][10], int n) { /*Проверка победителя*/
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (m[i][j] == 'O') {
					sum++;
				}
			}
		}
		if (sum == 20) {
			fieldOutput(m, n);
			std::cout << "Congratulations! The " << n << " player won.\n";
			exit(0);
		}
	}

	void creatingShip(char m[][10], int n, int kolDeck, int kShip) { /*Создание корабля*/
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
			} while (check_input(m, x1, y1, x2, y2, kolDeck));
			if (kolDeck == 1) {
				x2 = x1;
				y2 = y1;
			}
			for (int i = std::min(x1, x2); i <= std::max(x1, x2); i++) {
				for (int j = std::min(y1, y2); j <= std::max(y1, y2); j++) {
					m[i][j] = 'X';
				}
			}
			system("cls");
			fieldOutput(m, n);
		}
	}

	void shipPlacement(char m[][10], int n) { /*Расстановка кораблей*/
		int deck = 4;
		int kolShip = 1;
		creatingShip(m, n, deck, kolShip);
		deck--;
		kolShip++;
		creatingShip(m, n, deck, kolShip);
		deck--;
		kolShip++;
		creatingShip(m, n, deck, kolShip);
		deck--;
		kolShip++;
		creatingShip(m, n, deck, kolShip);
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
		if (ship[x][y] == 'X') {
			game[x][y] = 'O';
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
		char firstPlayerGame[10][10];
		char secondPlayerGame[10][10];
		creatingFild(firstPlayerField); //Инициализация массива расстановки кораблей 1 игрока
		creatingFild(secondPlayerField); //Инициализация массива расстановки кораблей 2 игрока
		creatingFild(firstPlayerGame); //Инициализация массива игрового поля 1 игрока
		creatingFild(secondPlayerGame); //Инициализация массива игрового поля 2 игрока

		fieldOutput(firstPlayerField, playerNumber);
		shipPlacement(firstPlayerField, playerNumber); //Расстановка кораблей 1 игрока
		playerNumber++;

		fieldOutput(secondPlayerField, playerNumber);
		shipPlacement(secondPlayerField, playerNumber); //Расстановка кораблей 2 игрока
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
