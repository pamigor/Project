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
	double n, s, l, sum=0, p[30][2];
	cin >> n >> s >> l;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i][0] >> p[i][1];
		sum += p[i][1];
	}
	cout.precision(2);
	cout << fixed << l / s * 60 + sum << endl;
return 0;
}