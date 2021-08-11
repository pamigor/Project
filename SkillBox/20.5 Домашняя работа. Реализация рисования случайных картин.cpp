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
	int width, height;
	std::cout << "Enter the width and height of the picture: ";
	std::cin >> width >> height;
	std::srand(std::time(nullptr));
	std::ofstream picture;
	picture.open("C:\\C++\\WorkingFiles\\pic.txt");
	if (!picture.is_open()) {
		std::cerr << "The file was not found. Check the file path and try again.\n";
		return 0;
	}

	std::vector<std::vector<int>> pic(height);
	for (int i = 0; i < height; i++) {
		pic[i].resize(width);
		for (int j = 0; j < width; j++) {
			pic[i][j] = std::rand() % 2;
			picture << pic[i][j];
		}
		picture << "\n";
	}
	picture.close();
}