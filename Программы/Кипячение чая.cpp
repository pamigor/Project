#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int n,a,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	    {cin >> a;
		sum += a;}
	cout << sum - (n - 1);
	return 0;
}