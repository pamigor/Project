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
	double n, sum=0, x=2;
	int k = 0;
	cin >> n;
	while (sum<n)
	{
		sum += 1 / x++;
		k++;
	}
	cout << k << " card(s)" << endl;
return 0;
}