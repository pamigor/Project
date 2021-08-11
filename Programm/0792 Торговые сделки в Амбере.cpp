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
	long int v1, v2, sum1 = 0, sum2 = 0;
	int s1, s2;
	cin >> v1 >> s1 >> v2 >> s2;
	while (v1 != 0)
	{
		sum1 += v1 % s1;
		v1 = v1 / s1;
	}
	while (v2 != 0)
	{
		sum2 += v2 % s2;
		v2 /= s2;
	}
	if (sum1 == sum2) cout << sum1 << endl;
	else cout << '0' << endl;
return 0;
}