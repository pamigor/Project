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

void swap(int* x, int* y) {
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
	std::cout << *x << " " << *y << "\n";
}

int main()
{
	int a = 10, b = 20;
	int* pa = &a;
	int* pb = &b;
	swap(pa, pb);
}