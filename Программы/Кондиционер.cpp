#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int tr, tc;
	string s;
	cin >> tr >> tc;
	cin >> s;
	if(s=="freeze")
	{cout << min(tr, tc);}
	if (s == "heat")
	{cout << max(tr, tc);}
	if (s == "auto")
	{cout << tc;}
	if (s == "fan")
	{cout << tr;}
	return 0;
} 