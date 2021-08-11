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
	int kol=1, max=0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++)
	{
		for (int j = i + 1; j < s.size(); j++)
			if (s[i] == s[j]) kol++;
		if (kol > max) max = kol;
		kol = 1;
	}
	cout << max;
return 0;
}