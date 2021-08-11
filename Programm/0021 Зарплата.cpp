#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	int minz = min(min(a1, a2), a3);
	int maxz = max(max(a1, a2), a3);
	cout << maxz - minz;
return 0;
}