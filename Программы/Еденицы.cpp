#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, sum=0;
	cin >> n;
	while (n > 0)
	{
		sum = sum + n % 2;
		n = n / 2;
	}
	cout << sum;
 return 0;
}