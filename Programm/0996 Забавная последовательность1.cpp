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
	int n, ch = 1;
	set <int> s;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		s.insert(ch);
		if (s.find(i) != s.end())
		{
			ch += 3;
			s.erase(s.begin(), s.find(i)); 
		}
		else ch += 2;
	}
	cout << ch << endl;
return 0;
}