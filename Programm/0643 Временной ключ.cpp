#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int kluch(int n)
{
	int ed = 0;
	if (n == 0) return 0;
	else
		while (n / 2 >= 1)
		{if (n % 2 == 1) ed += 1;
		n /= 2;}
	return ed+1;
}
int main()
{
	int m;
	cin >> m;
	cout << m + kluch(m);
return 0;
}