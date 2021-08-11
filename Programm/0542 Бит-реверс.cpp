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
#include <cmath>

using namespace std;

int main()
{
	int m;
	string s="";
	cin >> m;
	while (m>0)
	{
		s += m % 2 + 48;
		m /= 2;
	}
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) m += (s[i] - 48) * pow(2, i);
	cout << m << endl;
return 0;
}