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
	int n, m[4];
	cin >> n;
	if (n==6174) cout << 6174 << endl << '0';
	else 
	for (int i = 1; i < 8; i++)
	{
		for (int j = 0; j < 4; j++) { m[j] = n % 10; n = n / 10; }
		sort(m, m + 4);
		if ((m[0] + m[1] * 10 + m[2] * 100 + m[3] * 1000) - (m[3] + m[2] * 10 + m[1] * 100 + m[0] * 1000) == 6174)
		{cout << 6174 << endl << i << endl; return 0;}
		else n = (m[0] + m[1] * 10 + m[2] * 100 + m[3] * 1000) - (m[3] + m[2] * 10 + m[1] * 100 + m[0] * 1000);
	}
return 0;
}
