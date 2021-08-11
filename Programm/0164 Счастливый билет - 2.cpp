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

int upr(string x)
{
	int sum = 0;
	string y;
	for (int i = 0; i < x.size(); i++)
		sum += x[i] - 48;
	if (sum > 9)
	{
		while (sum > 0)
		{
			y += sum % 10 + 48;
			sum /= 10;
		}
		return upr(y);
	}
	else return sum;
}


int main()
{
	string s, s1, s2;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++)
	{
		s1 = s.substr(0, i+1);
		s2 = s.substr(i + 1);
		if (upr(s1) == upr(s2)) { cout << "YES" << endl; return 0; }
	}
	cout << "NO" << endl;
return 0;
}