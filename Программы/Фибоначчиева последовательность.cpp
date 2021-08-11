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
#include <map>

using namespace std;

int main()
{
	int n, pr, sl, hran = 0;
	cin >> n >> pr >> sl;
	for (int i = n; i > 1; i--)
	{
		hran = pr;
		pr = sl - pr;
		sl = hran;
	}
	cout << pr << ' ' << sl << endl;
		return 0;
}