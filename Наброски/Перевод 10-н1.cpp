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
	char s[10] = "";
	string s1;
	cin >> x >> n;
	itoa(x, s, n);
	s1 = s;
	transform(s1.begin(), s1.end(), s1.begin(), toupper);
	cout << s1;
return 0;
}