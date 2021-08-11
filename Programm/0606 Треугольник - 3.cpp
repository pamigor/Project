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
	if (a >= b + c || b >= a + c || c >= a + b) cout << "NO";
	else cout << "YES";
return 0;
}