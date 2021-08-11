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
	int n;
	cin >> n;
	if (n == 1) cout << n + 1 << ' ' << n + 8 << endl;
	else
	if (n == 8) cout << n - 1 << ' ' << n + 8 << endl;
	else
	if (n == 57) cout << n - 8 << ' ' << n + 1 << endl;
	else
	if (n == 64) cout << n - 8 << ' ' << n - 1 << endl;
	else
	if (n >= 2 && n <= 7) cout << n - 1 << ' ' << n + 1 << ' ' << n + 8 << endl;
	else
	if (n >= 58 && n <= 63) cout << n - 8 << ' ' << n - 1 << ' ' << n + 1 << endl;
	else
	if (n%8==0) cout << n - 8 << ' ' << n - 1 << ' ' << n + 8 << endl;
	else
	if ((n-1)%8==0) cout << n - 8 << ' ' << n + 1 << ' ' << n + 8 << endl;
	else
		cout << n - 8 << ' ' << n - 1 << ' ' << n + 1 << ' ' << n + 8 << endl;
	return 0;
}