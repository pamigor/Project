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

bool check_Array(int index) {
	if (index < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	else if (index > 9) {
		std::cout << "The index is larger than the array size!\n";
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int landscape[5][5][10], columnHeight;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			do {
				std::cout << "Enter the height of the columns: ";
				std::cin >> columnHeight;
			} while (check_Array(columnHeight));
			for (int k = 0; k < 10; k++) {
				landscape[i][j][k] = (k <= columnHeight ? 1 : 0);
			}
		}
	}
	int sliceLevel;
	do {
	std::cout << "\nEnter the slice level: ";
	std::cin >> sliceLevel;
	} while (check_Array(sliceLevel));

	std::cout << "\n\n" << sliceLevel << " slice level.\n\n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
				std::cout << landscape[i][j][sliceLevel] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
