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
	int n, m, kap = 0, mas[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> mas[i];
	sort(mas,mas+n);
	for (int i = n - 1; i > n - m - 1; i--) if (mas[i] > 0) kap += mas[i];
	cout << kap;
return 0;
}
