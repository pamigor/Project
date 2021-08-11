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
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

int main()
{
	bool endStatement = true;
	std::ofstream statement;
	statement.open("C:\\C++\\WorkingFiles\\statement_new.txt", std::ios::app);
	if (!statement.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return 0;
	}
	do {
		std::string name, surname, date;
		int payment = 0;
		std::cout << "Enter your account: ";
		std::cin >> name >> surname >> date >> payment;

		statement.width(10);
		statement << name;
		statement.width(15);
		statement << surname;
		statement.width(12);
		statement << date;
		statement.width(12);
		statement << payment;
		statement << std::endl;
		
		std::cout << "To continue press any key. To stop typing, press 1: ";
		char stop;
		std::cin >> stop;
		if (stop == '1') {
			endStatement = false;
		}
	} while (endStatement);
	statement.close();
}
