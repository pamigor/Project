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
	string s[3];
	for (int i = 0; i < 3; i++)
		cin >> s[i];

	for (int i = 0; i < 3; i++)
	{
		if ((s[i][0] + s[i][1] + s[i][2] == 264) || (s[0][i] + s[1][i] + s[2][i] == 264) ||
			(s[0][0] + s[1][1] + s[2][2] == 264) || (s[2][0] + s[1][1] + s[0][2] == 264)) {cout << "Win" << endl; return 0;}

		if ((s[i][0] + s[i][1] + s[i][2] == 237) || (s[0][i] + s[1][i] + s[2][i] == 237) ||
			(s[0][0] + s[1][1] + s[2][2] == 237) || (s[2][0] + s[1][1] + s[0][2] == 237)) {cout << "Lose" << endl; return 0;}
	}
	cout << "Draw" << endl;
return 0;
}