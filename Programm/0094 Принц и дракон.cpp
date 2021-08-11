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
	int n, m, k, u=1;
	cin >> n >> m >> k;
	if (n!=m && n<=k) cout << "NO" << endl;
	else
	while (m > 0)
	{
		if (m - n <= 0) { cout << u << endl; return 0; }
		else {m = m - n + k; u++;}
	}
return 0;
}
