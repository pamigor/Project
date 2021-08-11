#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n, m;
	cin >> n >> m;
	if (m > n) cout << m - n;
	else cout << 12 - n + m;
return 0;
}