#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
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
	std::ofstream basket;
	basket.open("C:\\C++\\WorkingFiles\\basket.txt", std::ios::app);
	if (!basket.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return 0;
	}
	int numberСasts = 0;
	std::cout << "Enter the number of casts: ";
	std::cin >> numberСasts;
	for (int i = 0; i < numberСasts; i++) {

		std::ifstream river;
		river.open("C:\\C++\\WorkingFiles\\river.txt");
		if (!river.is_open()) {
			std::cerr << "The file was not found. Check the file path and try again.\n";
			return 0;
		}

		std::string biting;
		std::cout << "What kind of fish do you catch?: ";
		std::cin >> biting;
		int counter = 0;
		while (!river.eof()) {
			std::string fish;
			river >> fish;
			if (biting == fish) {
				basket << biting << "\n";
				counter++;
			}
		}
		river.close();
		if (counter > 0) {
			std::cout << "You have caught " << counter << " fish.\n";
		}
		else {
			std::cout << "You haven't caught a single fish.\n";
		}
	}
	basket.close();
}