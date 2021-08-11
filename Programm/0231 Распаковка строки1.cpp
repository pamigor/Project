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
	int m = 0;
	string s, n;
	cin >> s;
	char f=s[0];
	
	for (char i : s)
		if (i < 58) { m = m * 10 + (i - 48); f = i;}
		else 
		{
			if (f > 58) m = 1;
			n += string(m,i);
			m = 0; 
			f = i;
		}
	
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if ((i + 1) % 40 == 0) cout << endl;
	}
	cout << endl;
return 0;
}