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

int p(int x)
{
	int rez = 0;
	while (x > 2)
	{
		if (x % 2 == 0) x /= 2;
		else x = x * 3 + 1;
		rez++;
	}
	return rez;
}

int main()
{
	int n, k, sum=0;
	cin >> n >> k;
	for (int i = n; i <= k; i++) sum += p(i);
	cout << sum << endl;
return 0;
}