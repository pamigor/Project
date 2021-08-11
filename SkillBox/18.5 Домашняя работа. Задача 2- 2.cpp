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

int f(int i) {
	if (i == 0 || i == 1) {
		return 1;
	}
	if ((i - 4) < 0) {
		return 2 * f(i - 1);
	}
	return 2 * f(i - 1) - f(i - 4);
}

int main()
{
	int n;
	std::cout << "Enter the number of steps: ";
	std::cin >> n;
	std::cout << "Number of options: " << f(n) << "\n";
}