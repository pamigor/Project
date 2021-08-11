#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	if (r1 < r2 + r3)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}