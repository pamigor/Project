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
	int n, i = 3, chf2 = 1, chf1=1;
	cin >> n;
	while(chf2<n)
	{
		chf2 = chf2 + chf1;
		chf1 = chf2 - chf1;
		if (chf2 == n) { cout << '1' << endl << i; return 0; }
		i++;
	}
	cout << '0';
	return 0;
}
