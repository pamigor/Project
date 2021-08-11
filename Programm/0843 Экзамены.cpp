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
	long long int n, m, f, ns;
	cin >> n >> m >> f >> ns;
	cout << m + f + ns - n << ' ' << n - ns - f << ' ' << n - ns - m;
return 0;
}
