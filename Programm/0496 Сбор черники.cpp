#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, sum=0, max=0, cher[1000];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> cher[i];
	for (int i = 0; i < n; i++)
	{
		if (i == 0) sum = cher[0] + cher[1] + cher[n - 1];
		else
		if (i == n-1) sum = cher[0] + cher[n-2] + cher[n - 1];
		else sum = cher[i-1] + cher[i] + cher[i + 1];
		if (max < sum) max = sum;
	}
	cout << max;
return 0;
}