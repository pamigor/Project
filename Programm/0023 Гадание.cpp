#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) sum += i;
	cout << sum;
return 0;
}