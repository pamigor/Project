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

struct accounting {
	std::string name;
	std::string surname;
	std::string date;
	float award = 0;
};

void add_statement(std::ofstream& file) {
	accounting chapter;

	std::cin >> chapter.name >> chapter.surname >> chapter.date >> chapter.award;

	file.setf(std::ios::fixed);
	file.precision(2);
	file.width(10);
	file << chapter.name;

	file.width(15);
	file << chapter.surname;

	file.width(12);
	file << chapter.date;
	
	file.width(12);
	file << chapter.award;

	file << std::endl;
}

void list_statement(std::ifstream& file) {
	accounting chapter;

	file >> chapter.name;

	if (chapter.name == "") {
		return;
	}

	file >> chapter.surname >> chapter.date >> chapter.award;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	std::cout.setf(std::ios::right);
	std::cout.width(10);
	std::cout << chapter.name << " ";
	
	std::cout.width(15);
	std::cout << chapter.surname << " ";

	std::cout.width(12);
	std::cout << chapter.date << " ";

	std::cout.width(12);
	std::cout << chapter.award << " ";

	std::cout << "\n";
}

int main()
{
	std::ifstream statementIn;
	std::ofstream statementOut;
	std::string command;
	do {
		std::cout << "Enter the command: ";
		std::cin >> command;
		if ((command != "add") && (command != "list")) {
			std::cerr << "The entered command is incorrect!\n";
		}
	} while ((command != "add") && (command != "list"));

	if (command == "add") {
		statementOut.open("C:\\C++\\WorkingFiles\\statement.txt", std::ios::app);
		if (!statementOut.is_open()) {
			std::cout << "The file was not found. Check the file path and try again.\n";
			return 0;
		}
		std::cout << "Enter your account: ";		
		add_statement(statementOut);
		statementOut.close();
	}
	else {
		statementIn.open("C:\\C++\\WorkingFiles\\statement.txt");
		if (!statementIn.is_open()) {
			std::cout << "The file was not found. Check the file path and try again.\n";
			return 0;
		}
		std::cout << "\n";

		while (!statementIn.eof()) {
			list_statement(statementIn);
		}

		statementIn.close();
	}
}