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
	int n, m, mas[30000];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		if (n % m < i+1) mas[i] = n / m;
		if (n % m >= i+1) mas[i] = n / m +1;
	}
	for (int i = m - 1; i >= 0; i--) cout << mas[i] << ' ';
return 0;
}
