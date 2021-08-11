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

//using namespace std;

int main()
{
	int banquet[2][6] = { {8, 6, 6, 6, 6, 6}, {8, 6, 6, 6, 6, 6} };
	std::cout << "We complete each place according to the etiquette.\n\n";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			std::cout << banquet[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	std::cout << "\nAfter minor accidents.\n\n";

	banquet[0][4] = 7;
	banquet[0][0] = 6;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			std::cout << banquet[i][j] << " ";
		}
		std::cout << "\n";
	}
}