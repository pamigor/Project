#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int a, b, i;
	cin >> a >> b;
	for (i=min(a,b); i<=max(a,b); i++)
		if (a * b == i * i) 
		{cout << i;
		return 0;}
	cout << "0";
return 0;
}