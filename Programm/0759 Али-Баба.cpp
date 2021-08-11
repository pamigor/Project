#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int ub(const void* a, const void* b)
{return (*(int*)b - *(int*)a);}

int main()
{
	int n, m, k = 0, mas[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> mas[i];
	qsort(mas, n, sizeof(int), ub);
	for (int i = 0; i < m; i++) if (mas[i] > 0) k += mas[i];
	cout << k;
return 0;
}
