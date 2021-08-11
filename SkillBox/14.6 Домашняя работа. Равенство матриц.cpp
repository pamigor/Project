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
	int matrixOne[4][4], matrixTwo[4][4];
	std::cout << "Fill in the first matrix.\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cin >> matrixOne[i][j];
		}
	}
	std::cout << "\nFill in the second matrix.\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cin >> matrixTwo[i][j];
			if (matrixOne[i][j] != matrixTwo[i][j]) {
				std::cout << "\nThe matrices are not equal.\n";
				return 0;
			}
		}
	}
	std::cout << "\nThe matrices are equal to.\n";
}
