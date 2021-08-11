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
	int n, sum=0, pr=1, imin=0, imax=0, min=100, max=-100, m[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
		if (m[i] > 0) sum += m[i];
		if (m[i] < min) { min = m[i]; imin = i; }
		if (m[i] > max) { max = m[i]; imax = i; }
	}
	for (int i = imin + 1; i < imax; i++) pr *= m[i];
	for (int i = imax + 1; i < imin; i++) pr *= m[i];
	cout << sum << ' ' << pr << endl;
return 0;
}