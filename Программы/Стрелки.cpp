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
	string s, sp = ">>-->", sl = "<--<<";
	int hran = 0;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		if (s.substr(i, 5) == sp || s.substr(i, 5) == sl) hran++;
	cout << hran << endl;
return 0;
}