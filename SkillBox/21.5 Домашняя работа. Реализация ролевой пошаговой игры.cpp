#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <deque> 
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

struct character {
	std::string name;
	int life;
	int armor;
	int damage;
	int x;
	int y;
};

bool saving_game(std::ofstream& file, character* c) {
	bool save = false;
	file.open("C:\\C++\\WorkingFiles\\my_game.bin", std::ios::binary);
	if (!file.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return save;
	}
	for (int i = 0; i < 6; i++) {
		size_t len = c[i].name.length();
		file.write((char*)&len, sizeof(len));
		file.write(c[i].name.c_str(), len);
		file.write((char*)&c[i].life, sizeof(c[i].life));
		file.write((char*)&c[i].armor, sizeof(c[i].armor));
		file.write((char*)&c[i].damage, sizeof(c[i].damage));
		file.write((char*)&c[i].x, sizeof(c[i].x));
		file.write((char*)&c[i].y, sizeof(c[i].y));
	}
	file.close();
	exit(0);
}

bool loading_game(std::ifstream& file, character* c) {
	bool load = false;
	file.open("C:\\C++\\WorkingFiles\\my_game.bin", std::ios::binary);
	if (!file.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		std::cerr << "Create a new game.\n\n";
		load = true;
		return load;
	}
	for (int i = 0; i < 6; i++) {
		size_t len;
		file.read((char*)&len, sizeof(len));
		c[i].name.resize(len);
		file.read((char*)c[i].name.c_str(), len);
		file.read((char*)&c[i].life, sizeof(c[i].life));
		file.read((char*)&c[i].armor, sizeof(c[i].armor));
		file.read((char*)&c[i].damage, sizeof(c[i].damage));
		file.read((char*)&c[i].x, sizeof(c[i].x));
		file.read((char*)&c[i].y, sizeof(c[i].y));
	}
	file.close();
	return load;
}

void creating_characters(character* c) /*Создание персонажей*/ {
	for (int i = 0; i < 6; i++) {
		if (i == 0) {
			std::cout << "Enter the name of the hero: ";
			std::cin >> c[i].name;
			do {
				std::cout << "Enter the hero's life level: ";
				std::cin >> c[i].life;
				if (c[i].life < 50 || c[i].life > 150) {
					std::cout << "The standard of living can not be less than 50 and more than 150!\n";
				}
			} while (c[i].life < 50 || c[i].life > 150);
			do {
				std::cout << "Enter the hero's armor level: ";
				std::cin >> c[i].armor;
				if (c[i].armor < 0 || c[i].armor > 50) {
					std::cout << "The armor level can not be less than 0 and more than 50!\n";
				}
			} while (c[i].armor < 0 || c[i].armor > 50);
			do {
				std::cout << "Enter the hero's damage level: ";
				std::cin >> c[i].damage;
				if (c[i].damage < 15 || c[i].damage > 30) {
					std::cout << "The damage level can not be less than 15 and more than 30!\n";
				}
			} while (c[i].damage < 15 || c[i].damage > 30);
			c[i].x = (std::rand() % 40) + 2;
			c[i].y = (std::rand() % 38) + 2;
		}
		else {
			c[i].name = "Enemy #" + std::to_string(i);
			c[i].life = (std::rand() % 101) + 50;
			c[i].armor = std::rand() % 51;
			c[i].damage = (std::rand() % 16) + 15;
			bool check = false;
			do {
				bool check = false;
				c[i].x = (std::rand() % 41) + 2;
				for (int j = 0; j < i - 1; j++) {
					if (c[i].x == c[j].x) {
						check = true;
					}
				}
			} while (check);
			do {
				bool check = false;
				c[i].y = (std::rand() % 39) + 1;
				for (int j = 0; j < i - 1; j++) {
					if (c[i].y == c[j].y) {
						check = true;
					}
				}
			} while (check);
		}
	}
}

void field_of_play(character* c) /*Вывод поля игры с текущей ситуацией*/ {
	std::cout << "\n";
	for (int i = 0; i < 42; i++) {
		for (int j = 0; j < 44; j++) {
			if (i == 0 || i == 41) {
				std::cout << "=";
			}
			else if (j == 0 || j == 43) {
				std::cout << "|";
			}
			else if (j == 1 || j == 42) {
				std::cout << " ";
			}
			else if ((c[0].x == j) && (c[0].y == i)) {
				std::cout << 'P';
			}
			else if ((c[1].x == j) && (c[1].y == i)) {
				std::cout << 'E';
			}
			else if ((c[2].x == j) && (c[2].y == i)) {
				std::cout << 'E';
			}
			else if ((c[3].x == j) && (c[3].y == i)) {
				std::cout << 'E';
			}
			else if ((c[4].x == j) && (c[4].y == i)) {
				std::cout << 'E';
			}
			else if ((c[5].x == j) && (c[5].y == i)) {
				std::cout << 'E';
			}
			else {
				std::cout << ".";
			}
		}
		std::cout << "\n";
	}
}

int player_attack(character* c) /*Атака игрока*/ {
	int rezult = 1;
	for (int i = 1; i < 6; i++) {
		int damageRemaining = 0;
		if (((c[0].x - 1 == c[i].x) && (c[i].y == c[0].y)) ||
			((c[0].x + 1 == c[i].x) && (c[i].y == c[0].y)) ||
			((c[0].y - 1 == c[i].y) && (c[i].x == c[0].x)) ||
			((c[0].y + 1 == c[i].y) && (c[i].x == c[0].x))) {
			
			if (c[i].armor - c[0].damage > 0) {
				c[i].armor -= c[0].damage;
				rezult = 0;
			}
			else {
				c[i].life -= c[0].damage - c[i].armor;
				c[i].armor = 0;
				rezult = 0;
			}
			if (c[i].life < 0) {
				c[i].x = -1;
				c[i].y = -1;
				rezult = 1;
			}
		}
	}
	return rezult;
}

int enemy_attack(character* c, int i) /*Атака врага*/ {
	int rezult = 1;
		int damageRemaining = 0;
		if (((c[i].x - 1 == c[0].x) && (c[i].y == c[0].y)) ||
			((c[i].x + 1 == c[0].x) && (c[i].y == c[0].y)) ||
			((c[i].y - 1 == c[0].y) && (c[i].x == c[0].x)) ||
			((c[i].y + 1 == c[0].y) && (c[i].x == c[0].x))) {
			
			if (c[0].armor - c[i].damage > 0) {
				c[0].armor -= c[i].damage;
				rezult = 0;
			}
			else {
				c[0].life -= c[i].damage - c[0].armor;
				c[0].armor = 0;
				rezult = 0;
			}
			if (c[0].life < 0) {
				c[0].x = -1;
				c[0].y = -1;
				rezult = 1;
			}
		}
	return rezult;
}

void enemy_move(character* c) /*Ход врагов*/ {
	for (int i = 1; i < 6; i++) {
		int motion = std::rand() % 4;

		if (motion == 0 && (c[i].x - 1 > 1)) {
			c[i].x -= enemy_attack(c, i);
		}
		if (motion == 1 && (c[i].x + 1 < 42)) {
			c[i].x += enemy_attack(c, i);
		}
		if (motion == 2 && (c[i].y - 1 > 0)) {
			c[i].y -= enemy_attack(c, i);
		}
		if (motion == 3 && (c[i].y + 1 < 40)) {
			c[i].y += enemy_attack(c, i);
		}
	}
}

void player_move(std::ofstream& file, character* c) /*Ход игрока*/ {
	std::string motion;
	do {
		std::cout << "To save and exit the game, enter - save.\n";
		std::cout << "To continue the game, specify the direction of the player's movement: ";
		std::cin >> motion;
		if (motion != "left" && motion != "right" && motion != "top" && motion != "bottom" && motion != "save") {
			std::cerr << "The command is specified incorrectly!\n";
		}
	} while (motion != "left" && motion != "right" && motion != "top" && motion != "bottom" && motion != "save");
	if (motion == "left" && (c[0].x - 1 > 1)) {
		c[0].x -= player_attack(c);
	}
	if (motion == "right" && (c[0].x + 1 < 42)) {
		c[0].x += player_attack(c);
	}
	if (motion == "top" && (c[0].y - 1 > 0)) {
		c[0].y -= player_attack(c);
	}
	if (motion == "bottom" && (c[0].y + 1 < 40)) {
		c[0].y += player_attack(c);
	}
	if (motion == "save") {
		saving_game(file, c);
	}
}

void player_status(character* c) /*Состояние игрока*/ {
	std::cout << "The current state of the player:\n";
	std::cout << "The name of the hero : " << c[0].name << "\n";
	std::cout << "The hero's life level: " << c[0].life << "\n";
	std::cout << "The hero's armor level: " << c[0].armor << "\n";
	std::cout << "The hero's damage level: " << c[0].damage << "\n";
}

bool checking_enemies(character* c) /*Проверка врагов*/ {
	int counter = 0;
	bool victory = false;
	for (int i = 1; i < 6; i++) {
		if (c[i].x == -1 && c[i].y == -1) {
			std::cout << "The enemy " << c[i].name << " is destroyed!\n";
			counter++;
		}
	}
	if (counter == 5) {
		system("cls");
		field_of_play(c);
		std::cout << "\nCONGRATULATIONS, YOU HAVE DEALT WITH ALL THE ENEMIES!\nYOUR FEAT WILL LIVE FOR CENTURIES!\n";
		victory = true;
	}
	return victory;
}

bool checking_player(character* c) /*Проверка игрока*/ {
	bool victory = false;
	if (c[0].x == -1 && c[0].y == -1) {
		system("cls");
		field_of_play(c);
		std::cout << "\nYOU FELL IN AN UNEQUAL STRUGGLE, BUT THE MEMORY OF YOU WILL LIVE FOR CENTURIES!\n";
		victory = true;
	}
	return victory;
}

int main() {
	std::srand(std::time(nullptr));
	std::ifstream fileIn;
	std::ofstream fileOut;
	character currentPlacement[6];
	bool end = true, load = false;

	std::string command;
	do {
		do {
			std::cout << "load - continue the saved game.\n";
			std::cout << "new - start a new game.\n";
			std::cout << "Enter the command: ";
			std::cin >> command;
			if ((command != "new") && (command != "load")) {
				std::cerr << "The entered command is incorrect!\n";
			}
		} while ((command != "new") && (command != "load"));
		std::cout << "\n";
		if (command == "new") {
			creating_characters(currentPlacement);
		}
		else {
			load = loading_game(fileIn, currentPlacement);
		}
	} while (load);
	
	do {
		system("cls");
		player_status(currentPlacement);
		field_of_play(currentPlacement);
		player_move(fileOut, currentPlacement);
		enemy_move(currentPlacement);
		if (checking_enemies(currentPlacement)) {
			end = false;
		}
		else if (checking_player(currentPlacement)) {
			end = false;
		}
	} while (end);
}