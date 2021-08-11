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
	int n, k;
	long long int v, boch=0, os=0;
	cin >> n >> v >> k;
	for (int i=0; i<n; i++)
	{
		os = v - i * k;
		if (os < 0) os = 0;
		boch += os;
	}
	if (os == 0) cout << "NO" << " " << boch;
	else cout << "YES" << " " << boch;
return 0;
}