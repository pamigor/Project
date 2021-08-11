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

#define FOR(i, n, m) for (int (i) = (n); (i) < (m); i++)  
#define CHECK_MAX completionMax 
#define CHECK_MIN completionMin 

bool completionMax(int n) {
	if (n > 20) {
		return true;
	}
	else {
		return false;
	}
}

bool completionMin(int n) {
	if (n < 20) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int von[20], counter = 0, counterMax = 0, counterMin = 0;
	FOR(i, 0, 3) {
		std::cout << "Enter the number of passengers in " << i + 1 << " the car: ";
		std::cin >> von[i];
		if (CHECK_MAX(von[i])) {
			counterMax++;
		}
		if (CHECK_MIN(von[i])) {
			counterMin++;
		}
		counter += von[i];
	}
	std::cout << "\nNumber of crowded cars - " << counterMax << ".\n";
	std::cout << "Number of unfilled cars - " << counterMin << ".\n";
	std::cout << "Total number of passengers - " << counter << ".\n";
}