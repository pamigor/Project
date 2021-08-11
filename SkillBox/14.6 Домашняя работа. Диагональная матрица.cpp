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
	float matrix[4][4];
	std::cout << "Fill in the matrix.\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cin >> matrix[i][j];
			if (i != j) {
				matrix[i][j] = 0;
			}
		}
	}
	std::cout << "\nDiagonal matrix.\n\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << "\n";
	}
}
