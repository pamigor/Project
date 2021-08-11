#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, summa=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			summa = summa + i;
		}
	}
	cout << summa;
 return 0;
}