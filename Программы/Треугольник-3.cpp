#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if((x==y) && (x==z))
	{cout << "YES";}
	else
	if (((x > y) && (x > z)) && (y + z > x)){cout << "YES";}
	else
		if (((y > x) && (y > z)) && (x + z > y)){cout << "YES";}
		else
			if (((z > x) && (z > y)) && (x + y > z)) {cout << "YES";}
			else
				cout << "NO";
	return 0;
}