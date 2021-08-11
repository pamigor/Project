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
	string s1, s2;
	int b = 0, k = 0;
	cin >> s1 >> s2;
	for (int i=0; i<4; i++)
	{
		if (s1[i] == s2[i]) b++;
		if (s1[i] != s2[i] && s2.find(s1[i]) != -1) k++;
	}
	cout << b << ' ' << k << endl;
return 0;
}