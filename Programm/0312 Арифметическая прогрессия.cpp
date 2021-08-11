#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int a1, a2, n, sum=0;
	cin >> a1 >> a2 >> n;
	sum = a1;
	for (int i = 1; i < n; i++)
		sum += a2 - a1;
	cout << sum;
return 0;
}