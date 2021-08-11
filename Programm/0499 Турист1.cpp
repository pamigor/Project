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
	int k, w, m[6];
	cin >> k >> w;
	for (int i = 0; i < 6; i++) cin >> m[i];
	for (int i = 0; i < 6; i += 2) if (m[i] <= w && m[i + 1] >= k) { cout << "YES" << endl; return 0; }
	if ((m[0] + m[2] <= w && m[1] + m[3] >= k) || 
		(m[0] + m[4] <= w && m[1] + m[5] >= k) || 
		(m[2] + m[4] <= w && m[3] + m[5] >= k) ||
		(m[0] + m[2] + m[4] <= w && m[1] + m[3] + m[5] >= k)) cout << "YES" << endl;
	else cout << "NO" << endl;
return 0;
}
