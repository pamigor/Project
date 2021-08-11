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

int* revers(int* abc, int l) {
	for (int i = 0; i < l / 2; i++) {
		int buf = *(abc + i);
		*(abc + i) = *(abc + (l - 1) - i);
		*(abc + (l - 1) - i) = buf;
	}
	return abc;
}

int main()
{
	int abc[10];
	int* pMas;
	int ligthMas = sizeof(abc) / sizeof(int);
	std::cout << "Enter " << ligthMas << " array elements: ";
	for (int i = 0; i < ligthMas; i++) {
		std::cin >> abc[i];
	}
	std::cout << "\n";
	pMas = revers(abc, ligthMas);
	for (int i = 0; i < ligthMas; i++) {
		std::cout << *(pMas + i) << " ";
	}
	std::cout << "\n";
}