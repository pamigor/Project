#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	string s, nap="100";
	char rez;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A') { rez = nap[0]; nap[0] = nap[1]; nap[1] = rez; }
		if (s[i] == 'B') { rez = nap[2]; nap[2] = nap[1]; nap[1] = rez; }
		if (s[i] == 'C') { rez = nap[2]; nap[2] = nap[0]; nap[0] = rez; }
	}
	cout << nap.find_first_of('1') + 1;
return 0;
}
