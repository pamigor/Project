#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, ott=0, max=0, grad[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> grad[i];
		if (grad[i] > 0) ott++;
		else ott = 0;
		if (max < ott) max = ott;
	}
	cout << max;
return 0;
}