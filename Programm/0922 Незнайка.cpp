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
	double t1, t2, s1, s2, s, dv=0, tv=0;
	cin >> t1 >> t2 >> s1 >> s2 >> s;
	cout.precision(2);
	if (s1 <= s2 && s1 < s) cout << "NO";
	else
		if (s1 > s) cout << fixed << s / (s1 / t1);
		else
		while (dv<s)
		{
			dv += s1;
			if (dv < s) { dv -= s2; tv += t1 + t2; }
			else cout << fixed << tv + (s1-(dv - s)) / (s1 / t1);
		}
	cout << endl;
return 0;
}