#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int nod(int a, int b)
{
	while (a * b != 0)
		if (a > b) a %= b;
		else b %= a;
	return a + b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a * b / nod(a, b);
return 0;
}