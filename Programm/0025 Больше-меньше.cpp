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
	if (a > b) cout << '>';
	if (a < b) cout << '<';
	if (a == b) cout << '=';
	return 0;
}