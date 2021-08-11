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
	set <char> p;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) p.insert(s[i]);
	cout << p.size();
return 0;
}