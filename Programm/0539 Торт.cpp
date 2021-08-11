#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n;
	cin >> n;
	if (n == 1) cout << '0';
	else
	{
		if (n % 2 == 0) cout << n / 2;
		if (n % 2 != 0) cout << n;
	}
return 0;
}