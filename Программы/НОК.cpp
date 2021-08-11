#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int nod(int a, int b)
{
	while (a * b > 0)
		if (a >= b) a %= b;
		else b %= a;
	return a + b;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << m * n / nod(m, n);
return 0;
}