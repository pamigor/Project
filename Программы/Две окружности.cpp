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
	int x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	double rmc = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if ((rmc == 0 && r1 != r2) || (rmc > r1 + r2) || (rmc < max(r1, r2) && rmc + min(r1, r2) < max(r1, r2))) cout << "NO" << endl;
	else cout << "YES" << endl;
return 0;
}