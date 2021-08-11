#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int t1, c1, c2, t2;
	cin >> t1 >> c1 >> c2 >> t2;
	if (t1 >= t2) cout << t2 * c1;
	else cout << t1 * c1 + (t2 - t1) * c2;
return 0;
}