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

int p[4950][2];

int main()
{
	int n, m, ch=0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> p[i][0] >> p[i][1];

	for (int i = 1; i <= n; i++)
	{
		ch = 0;
		for (int j = 0; j < m; j++)
			if (p[j][0] == i || p[j][1] == i) ch++;
		cout << ch << ' ';
	}
	cout << endl;
return 0;
}