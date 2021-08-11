#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int k;
	string s;
	cin >> k;
	cin >> s;
	s.erase(k - 1,1);
	cout << s;
	return 0;
}