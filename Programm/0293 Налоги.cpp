#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	double n, max = 0, fir=0, f[3][100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> f[0][i];
	for (int i = 0; i < n; i++)
	{
		cin >> f[1][i];
		f[2][i] = f[0][i] * f[1][i] / 100;
		if (f[2][i] > max)
		{
			max = f[2][i];
			fir = i;
		}
	}
	cout << fir+1;
return 0;
}