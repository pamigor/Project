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
			}
	}
	std::vector<float> vec(4);
	std::cout << "\nFill in the vector.\n";
	for (int i = 0; i < 4; i++) {
		std::cin >> vec[i];
	}
	
	std::vector<float> r(4);
	for (int i = 0; i < 4; i++) {
		float sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += vec[j] * matrix[i][j];
		}
		r[i] = sum;
	}
	std::cout << "\nComposition.\n";
	for (int i = 0; i < 4; i++) {
		std::cout << r[i] << " ";
	}
	std::cout << "\n";
}
