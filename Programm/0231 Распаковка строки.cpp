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

using namespace std;

int main()
{
	int m = 0, x=0;
	string s, n;
	cin >> s;
	char f=s[0];
	for (int i=0; i<s.size(); i++)
	{
		
		if (s[i] < 58) { m = m * 10 * x + (s[i] - 48); x++; f = s[i];}
		else 
		{
			if (f > 58) m = 1;
			for (int j = 0; j < m; j++) n += s[i];
			m = 0; 
			x = 0;
			f = s[i];
		}
	}
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if ((i + 1) % 40 == 0) cout << endl;
	}
	cout << endl;
return 0;
}