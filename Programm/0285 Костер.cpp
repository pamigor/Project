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
	int n, m, p, sum=0;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
	{
		cin >> p;
		if (p > m) { cout << "no" << endl; return 0; }
		sum += p - 1;
	}
	if (sum + 1 >= m) cout << "yes" << endl;
	else cout << "no" << endl;
return 0;
}