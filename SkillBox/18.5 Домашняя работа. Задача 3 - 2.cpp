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

int f(int i, int k = 3) {
	if (i == 0 || i == 1) {
		return 1;
	}
	if ((i - k - 1) < 0) {
		return 2 * f(i - 1, k);
	}
	return 2 * f(i - 1, k) - f(i - k - 1, k);
}

int main()
{
	int n, k;
	std::cout << "Enter the total number of steps: ";
	std::cin >> n;
	std::cout << "Enter the number of steps to overcome in one jump: ";
	std::cin >> k;

	std::cout << "Number of options: " << f(n, k) << "\n";
}