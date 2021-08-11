#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int a1, a2, a3, b1, b2, b3, prom=0;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	if (a3 > a2) { prom = a2; a2 = a3; a3 = prom; }
	if (a2 > a1) { prom = a1; a1 = a2; a2 = prom; }
	if (a3 > a2) { prom = a2; a2 = a3; a3 = prom; }
	if (b3 > b2) { prom = b2; b2 = b3; b3 = prom; }
	if (b2 > b1) { prom = b1; b1 = b2; b2 = prom; }
	if (b3 > b2) { prom = b2; b2 = b3; b3 = prom; }
	cout << a1 * b1 + a2 * b2 + a3 * b3;
return 0;
}