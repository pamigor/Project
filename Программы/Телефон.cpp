#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, b, c, t;
	cin >> a >> b >> c >> t;
	if (a>=t)
	cout << t * b;
	if (a < t)
	cout << ((t - a) * c + a*b);
	return 0;
} 