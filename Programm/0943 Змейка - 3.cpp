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
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	if (x % 2 != 0) cout << (x * m - 1) - (m - y) << endl;
	else cout << (x * m - 1) - (y - 1) << endl;
return 0;
}