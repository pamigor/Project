﻿#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int nod(long long int a, long long int b)
{
	if (a * b == 0) return (a + b);
	if (a < b) return nod(a, b % a);
	else return nod(a % b, b);
}

int main()
{
	long long int a, b;
	cin >> a >> b;
	cout << nod(a, b);
return 0;
}