#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int a, b, r;
	cin >> a >> b >> r;
	if (min(a, b) >= r*2) cout << "YES";
	else cout << "NO";
return 0;
}