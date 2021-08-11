#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if (n % 6 != 0) cout << n / 6 + (7 - n % 6) << " " << n * 6;
	else cout << n / 6 << " " << n * 6;
return 0;
}