#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int a1, a2, n, d = 0;
	cin >> a1 >> a2 >> n;
	d = a2-a1;
	cout << a1+(n-1)*d;
	return 0;
}