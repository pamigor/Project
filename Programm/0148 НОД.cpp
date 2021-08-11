#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int a, b;
	cin >> a >> b;
	while (a * b > 0)
		if (a >= b) a %= b;
		else b %= a;
	cout << a + b;
return 0;
}