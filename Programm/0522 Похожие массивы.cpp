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
	int m, n, a;
	cin >> m >> n;
	set <int> sm, sn;
	for (int i = 0; i < m; i++) { cin >> a; sm.insert(a); }
	for (int i = 0; i < n; i++) { cin >> a; sn.insert(a); }
	if (sm == sn) cout << '1' << endl;
	else cout << '0' << endl;
return 0;
}