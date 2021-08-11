#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n, yag[1000], hran = 0, max = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> yag[i];

		for (int i = 0; i < n; i++)
		{
			if (i == 0) hran = yag[n - 1] + yag[i] + yag[i + 1];
			else
				if (i == n - 1) hran = yag[i - 1] + yag[i] + yag[0];
				else
					hran = yag[i - 1] + yag[i] + yag[i + 1];
			if (hran > max) max = hran;
		}
		cout << max << endl;

return 0;
}