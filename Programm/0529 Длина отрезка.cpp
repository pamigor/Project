#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout.precision(5);
	cout << fixed << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
return 0;
}