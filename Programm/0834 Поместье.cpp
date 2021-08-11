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
	double x1, y1, x2, y2, r, h, k, a;
	cin >> x1 >> y1 >> x2 >> y2 >> r;
	h = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout.precision(5);
	if (h <= r) cout << fixed << 3.14159265 * r * r << endl;
	else
	{
		k = sqrt(h * h - r * r);
		a = 360 - 2 * atan(k / r)*180/3.14159265;
		cout << fixed << r * k + 3.14159265 * r * r / 360 * a << endl;
	}
return 0;
}