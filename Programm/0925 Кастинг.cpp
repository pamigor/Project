#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int mm, n, a, b, c;
	cin >> mm >> n >> a >> b >> c;
	if (mm == 1) if (a + b + c - 2 * n > 0) cout << a + b + c - 2 * n;
	else cout << "0";
	if (mm == 2) cout << min(min(a, b), c);
return 0;
}