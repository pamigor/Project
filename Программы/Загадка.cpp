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
	int s, p;
	cin >> s >> p;
	for (int x = 0; x <= s; x++)
		for (int y = 0; y <= s; y++)
			if (x + y == s && x * y == p)
			{
				cout << min(x, y) << ' ' << max(x, y) << endl;
				return 0;
			}
return 0;
}