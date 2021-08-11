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

//using namespace std;

bool check(std::string s) {
	bool flag = false;
	if (s.length() != 3) {
		flag = true;
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != 'O' && s[i] != 'X' && s[i] != '.') {
				flag = true;
			}
		}
	}
	return flag;
}

char search_coordinates(int x, int y, std::string s) {
	char result;
	if (y == 1) {
		result = s[x - 1];
	}
	else if (y == 2) {
		result = s[x + 2];
	}
	else if (y == 3) {
		result = s[x + 5];
	}
	return result;
}

int determining_winner_line(std::string fild) {
	
	int counter = 0, winner = 3, checkDiagonalOne = 0, checkDiagonalTwo = 0;

	for (int i = 1; i <= 3; i++) {
		int checkString = 0, checkColumn = 0;
		for (int j = 1; j <= 3; j++) {
			checkString += (int) search_coordinates(j, i, fild);
			checkColumn += (int)search_coordinates(i, j, fild);
			if ((j == 3) && ((checkString == 264) || (checkColumn == 264))) {
				winner = 1;
				counter++;
			}
			if ((j == 3) && ((checkString == 237) || (checkColumn == 237))) {
				winner = 2;
				counter++;
			}
		}
		checkDiagonalOne += (int)search_coordinates(i, i, fild);
		checkDiagonalTwo += (int)search_coordinates(4 - i, i, fild);
		if ((checkDiagonalOne == 264) || (checkDiagonalTwo == 264)) {
			winner = 1;
			counter++;
		}
		if ((checkDiagonalOne == 237) || (checkDiagonalTwo == 237)) {
			winner = 2;
			counter++;
		}
	}
	return (counter > 1 ? 0 : winner);
}

int main() {
	std::string str1, str2, str3;
	int numberCrosses = 0, numberZeros = 0;
	
	do {
		std::cout << "Enter the first line: ";
		std::cin >> str1;
	} while (check(str1));
	do {
		std::cout << "Enter the second line: ";
		std::cin >> str2;
	} while (check(str2));
	do {
		std::cout << "Enter the third line: ";
		std::cin >> str3;
	} while (check(str3));

	std::cout << "\nGame result\n\n";
	std::cout << "  -------\n";
	std::cout << "  | " << str1 << " |\n";
	std::cout << "  | " << str2 << " |\n";
	std::cout << "  | " << str3 << " |\n";
	std::cout << "  -------\n";

	std::string playingField = str1 + str2 + str3;

	for (int i = 0; i < playingField.length(); i++) {
		if (playingField[i] == 'X') {
			numberCrosses++;
		}
		else if (playingField[i] == 'O') {
			numberZeros++;
		}
	}

	if ((determining_winner_line(playingField) == 0) ||
		((determining_winner_line(playingField) == 1) && (numberCrosses <= numberZeros)) ||
		((determining_winner_line(playingField) == 2) && (numberCrosses != numberZeros))) {
		std::cout << "\nIncorrect.\n";
	}
	else if ((determining_winner_line(playingField) == 1) && (numberCrosses > numberZeros)) {
		std::cout << "\nPetya won!\n";
	}
	else if ((determining_winner_line(playingField) == 2) && (numberCrosses == numberZeros)) {
		std::cout << "\nVanya won!\n";
	}
	else if ((numberCrosses < numberZeros) || (numberCrosses - numberZeros > 1)) {
		std::cout << "\nIncorrect.\n";
	}
	else {
		std::cout << "\nNobody.\n";
	}
}