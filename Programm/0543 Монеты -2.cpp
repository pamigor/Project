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
	int n, w, d, p;
	cin >> n >> w >> d >> p;
	for (int i = 1; i < n; i++)
	{
		int pp = 0;
		for (int j = 1; j < n; j++) pp += j * w;
		pp -= i * d;
		if (pp == p) { cout << i << endl; return 0; }
	}
	cout << n << endl;
return 0;
}