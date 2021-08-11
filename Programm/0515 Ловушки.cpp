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
	int n, x1=0, y1=0, x2, y2;
	double put=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x2 >> y2;
		put += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		x1 = x2;
		y1 = y2;
	}
	cout.precision(3);
	cout << fixed << put + sqrt(x2 * x2 + y2 * y2) << endl;
return 0;
}