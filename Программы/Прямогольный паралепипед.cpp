#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	unsigned long long int a, b, c;
	cin >> a >> b >> c;
	cout << (a * c + c * b + a * b) * 2 << ' ' << a * b * c;
	return 0;
} 