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

int main()
{
	std::ifstream statement;
	statement.open("C:\\C++\\WorkingFiles\\statement.txt");
	if (!statement.is_open()) {
		std::cout << "The file was not found. Check the file path and try again.\n";
		return 0;
	}

	std::string nameMaxAmount;
	std::string surnameMaxAmount;
	float sum = 0, max = 0;

	while (!statement.eof()) {
		std::string name;
		std::string surname;
		float award = 0;
		std::string date;
		statement >> name >> surname >> award >> date;
		sum += award;
		if (award > max) {
			max = award;
			nameMaxAmount = name;
			surnameMaxAmount = surname;
		}
	}
	std::cout << "Total amount of payments: " << sum << "\n";
	std::cout << "The recipient of the highest payout: " << nameMaxAmount << " " << surnameMaxAmount << "\n";
	statement.close();
}