#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b) >= c) cout << a + b - c;
	else cout << "Impossible";
return 0;
}