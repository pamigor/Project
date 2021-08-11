#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	double x1, y1, r1, x2, y2, r2, r;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	r = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (r<=r1 + r2 && r1<=r+r2 && r2<=r+r1) cout << "YES";
	else cout << "NO";
return 0;
}