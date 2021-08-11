#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	string p;
	cin >> p;
	if (p[0] == p[3] && p[1] == p[2]) cout << "YES";
	else cout << "NO";
return 0;
}