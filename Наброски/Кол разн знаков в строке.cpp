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
	int x, n;
	string s;
	cin >> x >> n;
	while (x > 0)
	{
		if (x % n < 10) s += x % n + 48;
		else s += x % n + 55;
		x /= n;
	}
	reverse(s.begin(), s.end());
	cout << s;
return 0;
}