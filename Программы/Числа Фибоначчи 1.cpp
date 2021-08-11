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

int f(int m)
{
	if (m == 0) return 0;
	else
		if (m == 1) return 1;
		else
			return f(m - 1) + f(m - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
return 0;
}