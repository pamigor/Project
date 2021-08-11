#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int s, p, k, c;
	cin >> s;
	if (s % 6 != 0) {cout << "Error";}
	else 
	{
	 p = s / 6 ;
	 c = p;
	 k = (p + c) * 2;
	 cout << p << ' ' << k << ' ' << c;
	}
	return 0;
}