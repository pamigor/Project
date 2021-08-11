#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

bool ikv(int x)
{
	int s = sqrt(x);
	return (s * s == x);
}

bool chf(int n)
{
	return ikv(5 * n * n + 4) || ikv(5 * n * n - 4);
}

int main()
{
	int n;
	cin >> n;
	if (chf(n)) cout << "1";
	else cout << '0';
return 0;
}
