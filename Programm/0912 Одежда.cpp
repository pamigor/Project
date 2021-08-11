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

int gor[10000];

int main()
{
	int n, nar = 0, sum = 0, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> gor[i];
	sort(gor, gor + n);
	if (n == 1) nar = gor[0];
	else
		for (int i = 0; i < n; i++)
		{
			if (gor[i] == gor[i + 1]) sum++;
			else sum = 0;
			if (max == sum) nar = 0;
			if (max < sum) { max = sum; nar = gor[i]; }
		}
	cout << nar << endl;
return 0;
}