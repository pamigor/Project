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
	int k, h=0, w=0, st=0;
	cin >> k;
	st = k;
	for (int i=1; i<=k; i++)
		if (abs(k / i - i) + (k - k / i * i) < st)
		{
			st = abs(k / i - i) + (k - k / i * i);
			h = k / i;
			w = i;
		}
	cout << w << ' ' << h << endl;
return 0;
}