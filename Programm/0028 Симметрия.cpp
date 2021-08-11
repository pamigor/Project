#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	long int x1, y1, x2, y2, xa, ya;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> xa >> ya;
	if (x1 == x2 && xa >= x1) cout << xa - 2 * (xa - x1) << " " << ya;
	if (x1 == x2 && xa < x1) cout << xa + 2 * (x1 - xa) << " " << ya;
	if (y1 == y2 && ya >= y1) cout << xa << " " << ya - 2 * (ya - y1);
	if (y1 == y2 && ya < y1) cout << xa << " " << ya + 2 * (y1 - ya);
return 0;
}