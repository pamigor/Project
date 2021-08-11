#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	if (r2 + r3 <= r1) cout << "YES";
	else cout << "NO";
return 0;
}