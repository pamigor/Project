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
	int mina = (a + 1) / 2;
	int minb = (b + 1) / 2;
	cout << max(mina, minb) << ' ' << min(a,b);
return 0;
}