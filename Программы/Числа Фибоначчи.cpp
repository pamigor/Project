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
	int n, a1 = 1, a0 = 0;
	cin >> n;
	if (n == 0) cout << "0" << endl;
	else
	if (n == 1) cout << "1" << endl;
	else
	{for (int k = 2; k <= n; k++)
		{a1 += a0;
		 a0 = a1 - a0;}
		cout << a1 << endl;}
return 0;
}