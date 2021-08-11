#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	int k;
	cin >> k;
	if (k > 145) cout << "NO";
	else if (k % 2 == 0) cout << (k / 2 - 1) / 6 << ' ' << (k / 2 - 1) * 10 % 60 + 5;
	else if (k % 2 != 0) cout << k / 12 << ' ' << k / 2 * 10 % 60;
return 0;
}