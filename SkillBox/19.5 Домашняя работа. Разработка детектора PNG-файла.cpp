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
	std::ifstream text;
	std::string way;
	bool name = false;
	do {
		std::cout << "Specify the path to the file: ";
		getline(std::cin, way);
		std::cout << "\n";
		if (way.length() < 5) {
			std::cerr << "\nThe file name is incorrect.\n\n";
			name = true;
		}
		else {
			text.open(way, std::ios::binary/*"C:\\C++\\WorkingFiles\\example.png"*/);
			if (!text.is_open()) {
				std::cerr << "\nThe file was not found. Check the file path and try again.\n\n";
			}
		}
	} while (!text.is_open() || name);
	
	if (way.substr(way.size() - 4) != ".png") {
		std::cout << "The file extension is not .PNG.\n";
		return 0;
	} 
	
	char buf[4];
	text.read(buf, sizeof(buf));
	if ((buf[0] != -119) || (buf[1] != 'P') || (buf[2] != 'N') || (buf[3] != 'G')) {
		std::cout << "The file extension is not .PNG.\n";
		return 0;
	}
	
	std::cout << "The .PNG file you specified. Its first four bytes are - ";
	for (int i = 0; i < sizeof(buf); i++) {
		std::cout << buf[i];
	}
	std::cout << "\n";
}