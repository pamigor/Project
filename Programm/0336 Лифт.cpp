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
	string s;
	int x=0, max=0, min=0;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') x++; 
		else x--;
		if (x > 0 && x > max) max = x;
		if (x < 0 && x < min) min = x;
	}
	cout << max - min + 1 << endl;
return 0;
}