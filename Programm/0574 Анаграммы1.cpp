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
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() != s2.size()) cout << "NO" << endl;
	else
	{
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if (s1.find(s2) == -1) cout << "NO" << endl;
			else cout << "YES" << endl; 
	}
return 0;
}