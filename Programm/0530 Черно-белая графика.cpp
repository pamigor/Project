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
	int w, h;
	string p[100], n[100], o;
	cin >> w >> h;
	for (int i = 0; i < h; i++) cin >> p[i];
	for (int i = 0; i < h; i++) cin >> n[i];
	cin >> o;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
		{
			if (p[i][j] == '0' && n[i][j] == '0') p[i][j] = o[0];
			else
			if (p[i][j] == '0' && n[i][j] == '1') p[i][j] = o[1];
			else
			if (p[i][j] == '1' && n[i][j] == '0') p[i][j] = o[2];
			else
			if (p[i][j] == '1' && n[i][j] == '1') p[i][j] = o[3];
		}
	cout << endl;
	for (int i = 0; i < h; i++) cout << p[i] << endl;
return 0;
}