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
	int a, b, ch=0, n=0;
	cin >> a >> b;
	for (long long int i = a; i <= b; i++)
	{
		ch = 1;
		n = i;
		while (n > 0)
		{
			n /= 10;
			ch *= 10;
		}
		if (i == i * i % ch) cout << i << ' ';
	}
		cout << endl;
return 0;
}