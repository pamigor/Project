#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	string bil;
	cin >> bil;
	if (bil[0]+bil[1]+bil[2] == bil[3] + bil[4] + bil[5]) cout << "YES";
	else cout << "NO";
return 0;
}