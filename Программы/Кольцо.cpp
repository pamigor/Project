#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	double s, r1;
	cin >> s >> r1;
	cout.precision(3);
	cout << fixed << sqrt(r1*r1 - s / 3.141593);
return 0;
}