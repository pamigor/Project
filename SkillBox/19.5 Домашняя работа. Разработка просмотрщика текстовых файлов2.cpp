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
	do {
		std::cout << "Specify the path to the file: ";
		getline(std::cin, way);
		std::cout << "\n";
		text.open(way, std::ios::binary/*"C:\\C++\\WorkingFiles\\words.txt"*/);
		if (!text.is_open()) {
			std::cout << "The file was not found. Check the file path and try again.\n";
		}
	} while (!text.is_open());
	
	int const length = 64;
	char buf[length];
	int counter = 0;
	
	do {
		text.read(buf, length - 1);
		counter += (int)text.gcount();
		buf[text.gcount()] = '\0';
		std::cout << buf;
	} while (!text.eof());
	
	std::cout << "\n\nFile size: " << counter << " byte.\n";
	text.close();
}