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
	int n, g[1000], gol=0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> g[i];
	sort(g, g + n);
	for (int i = 0; i < n / 2 + 1; i++) gol += g[i] / 2 + 1;
	cout << gol << endl;
return 0;
}