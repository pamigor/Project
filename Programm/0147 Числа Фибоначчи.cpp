#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, chf1=0, chf2=1;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		chf2 = chf2 + chf1;
		chf1 = chf2 - chf1;
	}
		if (n < 2) cout << n;
		else cout << chf2;
return 0;
}