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
	int n, t, sum = 0, max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		 if (t > 0) 
		 {
		 sum++;
		 if (sum > max) max = sum;
		 }
		else sum = 0;
	}
	cout << max << endl;
return 0;
}