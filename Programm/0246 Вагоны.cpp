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
	int n, m=0, vag, sum=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> vag;
		if (m + 1 != vag && i>0) sum++;
		m = vag;
	}
	cout << sum << endl;
return 0;
}