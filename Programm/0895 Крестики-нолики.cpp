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
	string k[3];
	for (int i = 0; i < 3; i++) cin >> k[i];
	for (int i = 0; i < 3; i++)
	{
		if (k[i][0] + k[i][1] + k[i][2] == 264 || k[0][i] + k[1][i] + k[2][i] == 264 ||
			k[0][0] + k[1][1] + k[2][2] == 264 || k[0][2] + k[1][1] + k[2][0] == 264) { cout << "Win" << endl; return 0; }
		if (k[i][0] + k[i][1] + k[i][2] == 237 || k[0][i] + k[1][i] + k[2][i] == 237 ||
			k[0][0] + k[1][1] + k[2][2] == 237 || k[0][2] + k[1][1] + k[2][0] == 237) { cout << "Lose" << endl; return 0; }
	}
	cout << "Draw" << endl;
return 0;
}