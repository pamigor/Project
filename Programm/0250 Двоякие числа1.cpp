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

int f(string s)
{
	set <char> p;
	for (int i = 0; i < s.size(); i++) p.insert(s[i]);
	return p.size();
}

int main()
{
	int x, i=0;
	char ch[6]="";
	cin >> x;
	i = x;
	while (i >= 0 && x <= 30000)
	{
		itoa(i, ch, 10);
		if (f(ch) < 3) { cout << ch << endl; return 0; }
		i--;
		itoa(x, ch, 10);
		if (f(ch) < 3) { cout << ch << endl; return 0; }
		x++;
	}
return 0;
}