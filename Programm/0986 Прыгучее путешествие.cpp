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
	int n, x0, y0, l, x1, y1;
	cin >> n >> x0 >> y0 >> l;
	for (int i=1; i<=n; i++)
	{
		cin >> x1 >> y1;
		if (((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0)) <= l * l) 
		{
			cout << i << endl; 
			return 0;
		}
	}
	cout << "Yes" << endl;
return 0;
}