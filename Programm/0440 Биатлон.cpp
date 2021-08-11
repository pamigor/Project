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

using namespace std;

int main()
{
	int x, y;
	int m[5] = { 0,0,0,0,0 };
	for (int j = 1; j <= 5; j++)
	{
		cin >> x >> y;
		for (int i = 0; i < 5; i++)
		{
			if (((x - i * 25) * (x - i * 25) + (y * y)) <= 100)
				if (m[i] == 0) m[i] = 1;
		}
	}
	cout << m[0] + m[1] + m[2] + m[3] + m[4] << endl;
return 0;
}