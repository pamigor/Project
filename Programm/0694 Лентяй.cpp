#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	int n, d1, d2, maxmin = 0, minmax = 31;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> d1 >> d2;
		if (d1 > maxmin) maxmin = d1;
		if (d2 < minmax) minmax = d2;
	}
	if (maxmin <= minmax) cout << "YES";
	else cout << "NO";
return 0;
}
