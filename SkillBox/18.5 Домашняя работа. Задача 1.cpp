#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <deque>        
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
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");

void swapMas(std::vector<int>& a, int* b) {
	for (int i = 0; i < a.size(); i++) {
		int buf = a[i];
		a[i] = *(b + i);
		*(b + i) = buf;
	}
}

int main()
{
	std::vector<int> masOne = { 1, 2, 3, 4 };
	int masTwo[] = { 10, 20, 30 , 40};
	std::cout << "The original version.\n";
	for (int i = 0; i < 4; ++i) {
		std::cout << masOne[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < 4; ++i) {
		std::cout << masTwo[i] << " ";
	}
	std::cout << "\n\n";

	swapMas(masOne, masTwo);
	std::cout << "The result of the conversion.\n";
	for (int i = 0; i < 4; ++i) {
		std::cout << masOne[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < 4; ++i) {
		std::cout << masTwo[i] << " ";
	}
	std::cout << "\n\n";
}