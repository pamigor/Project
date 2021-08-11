#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int chf(int a)
{
	if (a < 2) return a;
	else return chf(a - 1) + chf(a - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << chf(n);
	return 0;
}
