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

int main()
{
	int numberString, numberColumn;
	std::cout << "Enter the array dimensions: ";
	std::cin >> numberString >> numberColumn;

	std::vector<std::vector<int>> horizontalSnake(numberString);
	std::vector<std::vector<int>> verticalSnake(numberString);
	
	std::cout << "\nHorizontal snake.\n";
	std::cout << "\n";
	for (int i = 0; i < numberString; i++) {
		horizontalSnake[i].resize(numberColumn);
		for (int j = 0; j < numberColumn; j++) {
			if (i % 2 == 0) {
				horizontalSnake[i][j] = ((i + 1) * numberColumn - 1) - (numberColumn - (j + 1));
				std::cout << horizontalSnake[i][j] << "\t";
			}
			else {
				horizontalSnake[i][j] = ((i + 1) * numberColumn - 1) - j;
				std::cout << horizontalSnake[i][j] << "\t";
			}
		}
		std::cout << "\n";
	}
	
	std::cout << "\nVertical snake.\n";
	std::cout << "\n";
	for (int i = 0; i < numberString; i++) {
		verticalSnake[i].resize(numberColumn);
		for (int j = 0; j < numberColumn; j++) {
			if (j % 2 == 0) {
				verticalSnake[i][j] = ((j + 1) * numberString - 1) - (numberString - (i + 1));
				std::cout << verticalSnake[i][j] << "\t";
			}
			else {
				verticalSnake[i][j] = ((j + 1) * numberString - 1) - i;
				std::cout << verticalSnake[i][j] << "\t";
			}
		}
		std::cout << "\n";
	}
}
