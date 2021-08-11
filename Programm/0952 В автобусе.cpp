#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int v, d;
	cin >> v >> d;
	if (v == 0 && d > 0) cout << "Impossible";
	else if (d == 0) cout << v << " " << v;
	else if (v < d) cout << d << " " << v + d - 1;
	else cout << v << " " << v+d-1;
return 0;
}