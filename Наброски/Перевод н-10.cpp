#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string ch;
	int ss, d=0, f=0;
	cin >> ch >> ss;
	int mn = ss;
	reverse(ch.begin(), ch.end());
	for (int i=0; i<ch.size(); i++)
	{
		if (ch[i] < 58) f = 48;
		else f = 55;
		if (i == 0) d = ch[i] - f;
		else
			if (i == 1) d += (ch[i] - f) * ss;
			else
			{
				mn *= ss;
				d += (ch[i] - f) * mn;
			}
	}
	cout << d;
return 0;
}