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

	std::cout << "\nHhorizontal snake.\n";
	std::cout << "\n";
	for (int i = 0; i < numberString; i++) {
		for (int j = 0; j < numberColumn; j++) {
			if (i % 2 == 0) {
				std::cout << ((i + 1) * numberColumn - 1) - (numberColumn - (j + 1)) << "\t";
			}
			else {
				std::cout << ((i + 1) * numberColumn - 1) - j << "\t";
			}
		}
		std::cout << "\n";
	}
	
	std::cout << "\nVertical snake.\n";
	std::cout << "\n";
	for (int i = 0; i < numberString; i++) {
		for (int j = 0; j < numberColumn; j++) {
			if (j % 2 == 0) {
				std::cout << ((j+1) * numberString - 1) - (numberString - (i + 1)) << "\t";
			}
			else {
				std::cout << ((j + 1) * numberString - 1) - i << "\t";
			}
		}
		std::cout << "\n";
	}
}
