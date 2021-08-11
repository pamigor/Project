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

int rabbit(int quantity, int number = 3) {
	if (quantity == 0) {
		return 1;
	}
	int counter = 0;
	for (int i = 1; i <= min(number, quantity); i++) {
		counter += rabbit(quantity - i, number);
	}
	return counter;
}

int main()
{
	int n, k;
	std::cout << "Enter the total number of steps: ";
	std::cin >> n;
	std::cout << "Enter the number of steps to overcome in one jump: ";
	std::cin >> k;

	std::cout << "Number of options: " << rabbit(n, k) << "\n";
}