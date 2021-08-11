#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int s, k;
	cin >> s >> k;
	if (k % s == 0) cout << k / s << " " << s;
		else cout << k / s + 1 << " " << k % s;
return 0;
}