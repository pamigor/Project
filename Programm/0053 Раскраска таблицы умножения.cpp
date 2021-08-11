#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	int n, m, r = 0, g = 0, b = 0, t=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			t = (i + 1) * (j + 1);
			if (t % 2 == 0 && t % 3 != 0 && t % 5 != 0) r++;
			if (t % 3 == 0 && t % 5 != 0) g++;
			if (t % 5 == 0) b++;
		}
	cout << "RED : " << r << endl;
	cout << "GREEN : " << g << endl;
	cout << "BLUE : " << b << endl;
	cout << "BLACK : " << n * m - r - g - b << endl;
return 0;
}
