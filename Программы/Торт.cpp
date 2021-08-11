#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1) {n = 0;}
	if (n % 2 == 0) {n = n / 2;}
	cout << n;
	return 0;
} 