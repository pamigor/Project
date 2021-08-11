#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int a, b;
	cin >> a >> b;
	cout << max((a + 1) / 2, (b + 1) / 2) << ' ' << min(a,b);
return 0;
}