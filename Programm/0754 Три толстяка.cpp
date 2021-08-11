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
	if (a < 94 || a > 727 || b < 94 || b > 727 || c < 94 || c > 727) cout << "Error";
	else cout << max(max(a, b), c);
return 0;
}