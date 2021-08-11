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
	string d;
	int n, m, sum = 0, min = 0;
	cin >> n >> m;
	min = m;
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		for (int j = 0; j < m; j++) if (d[j] == '.') sum++;
		if (min > sum) min = sum;
		sum = 0;
	}
	cout << min;
return 0;
}