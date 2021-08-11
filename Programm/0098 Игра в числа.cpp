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

using namespace std;

int main()
{
	int n, s1=0, s2=0;
	cin >> n;
	deque<int> d(n);
	for (int i = 0; i < n; i++) cin >> d[i];
	
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			if (d[0] >= d[d.size() - 1]) { s1 += d[0]; d.pop_front(); }
			else { s1 += d[d.size() - 1]; d.pop_back(); }
		else
			if (d[0] >= d[d.size() - 1]) { s2 += d[0]; d.pop_front(); }
			else { s2 += d[d.size() - 1]; d.pop_back(); }
	}
	cout << s1 << ':' << s2 << endl;
return 0;
}