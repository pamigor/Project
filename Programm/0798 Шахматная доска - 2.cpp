#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int m, n, i, j, c;
	cin >> m >> n >> i >> j >> c;
	if (m=n && m*n % 2 == 0) cout << "equal";
	else
	{
		if ((i + j) % 2 == 0 && c == 0) cout << "black";
		if ((i + j) % 2 == 0 && c == 1) cout << "white";
		if ((i + j) % 2 != 0 && c == 1) cout << "black";
		if ((i + j) % 2 != 0 && c == 0) cout << "white";
	}
return 0;
}