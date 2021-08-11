#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int a1, a2, n,b=0;
	cin >> a1 >> a2 >> n;
	b = a1;
	for (int i = 1; i < n; i++)
		b += (a2 - a1);
	cout << b;
	return 0;
}