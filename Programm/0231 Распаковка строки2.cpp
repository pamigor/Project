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

	for (char i : s)
		if (i < 58) m = m * 10 + (i - 48);
		else 
			if (m == 0) n += i; 
			else {n += string(m, i); m = 0; }
	
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if ((i + 1) % 40 == 0) cout << endl;
	}
	cout << endl;
return 0;
}