#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int comp1(const void* a, const void* b)
{return (*(long long int*)a - *(long long int*)b);}

int main()
{
	long long int n, sum, kol=0, kup=0, avto[100];
	cin >> n >> sum;
	for (int i = 0; i < n; i++) cin >> avto[i];
	qsort(avto, n, sizeof(long long int), comp1);
	while (kup <= sum)
	{kup += avto[kol];
	if (kup > sum) cout << kol;
	else kol++;}
return 0;
}