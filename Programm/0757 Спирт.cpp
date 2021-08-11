#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	long long int c, h, o;
	cin >> c >> h >> o;
	cout << min(min(c / 2, h / 6), o);
return 0;
}