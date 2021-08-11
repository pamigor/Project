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
	int n;
	cin >> n;
	for (int i = 0; i <= n/5; i++)
		if ((n - 5 * (n / 5-i)) % 3 == 0) 
		{
			cout << n / 5 - i << ' ' << (n - 5 * (n / 5 - i)) / 3; return 0;
		}
return 0;
}
