#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, ed=0;
	cin >> n;
	if (n == 0) cout << 0;
	else
	{
		while (n / 2 >= 1)
		{if (n % 2 == 1) ed += 1;
		n /= 2;}
		cout << ed + 1;
	}
return 0;
}