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
	int n, k, p, c[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> c[i];
	cin >> k;
	for (int i = 1; i <= k; i++) { cin >> p; c[p - 1]--; }
	cout << endl;
	for (int i = 0; i < n; i++) if (c[i] < 0) cout << "yes" << endl;
	else cout << "no" << endl;
return 0;
}