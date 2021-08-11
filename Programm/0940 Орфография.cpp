#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int k;
	string s;
	cin >> k >> s;
	s.erase(k - 1, 1);
	cout << s;
return 0;
}