#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, k, itog = 0, kom[10000];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> kom[i];
	cin >> k;
	for (int i=0; i<n; i++)
		if (kom[i] <= k) itog += kom[i];
		else itog += k;
	cout << itog;
return 0;
}