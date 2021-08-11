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
	int n, m, t, minr = 100001;
	cin >> n >> m;
	string im, min_im;
	for (int i = 0; i < n; i++)
	{
		cin >> im;
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> t;
			sum += t;
		}
		if (sum < minr)
		{
			minr = sum;
			min_im = im;
		}
	}
	cout << min_im << endl;
return 0;
}