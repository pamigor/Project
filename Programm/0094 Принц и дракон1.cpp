#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	int n, m, k, u=1;
	cin >> n >> m >> k;
	if (n >= m) cout << 1 << endl;
	else if (n <= k) cout << "NO" << endl;
	else cout << (m - n - 1) / (n - k) + 2 << endl;
return 0;
}
