#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = -100; i <= 100; i++) 
		if (a * i * i * i + b * i * i + c * i + d == 0) cout << i << " ";
return 0;
}