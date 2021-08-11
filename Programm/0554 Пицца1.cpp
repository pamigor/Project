#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int kus(int a)
{
	if (a == 1) return 2;
	else return kus(a - 1) + a;
}

int main()
{
	int n;
	cin >> n;
	cout << kus(n);
	return 0;
}
