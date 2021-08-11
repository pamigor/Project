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
	int sum=0, b=0;
	string s;
	cin >> s;
	while (s.size() > 1)
	{
		for (int i = 0; i < s.size(); i++) sum += s[i] - 48;
		s.clear();
		while (sum > 0)
		{
			s+=sum%10 + 48;
			sum /= 10;
		}
		reverse(s.begin(), s.end());
		b++;
	}
	cout << s << ' ' << b << endl;
return 0;
}