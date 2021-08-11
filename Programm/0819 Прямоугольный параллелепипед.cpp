#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	long long int a, b, c;
	cin >> a >> b >> c;
	cout << 2 * a * b + 2 * a * c + 2 * b * c << " " << a * b * c;
return 0;
}