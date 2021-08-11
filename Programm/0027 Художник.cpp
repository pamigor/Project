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

int m[100][100];

int main()
{
	int w, h, n, x1, y1, x2, y2, sum = 0;
	cin >> w >> h >> n;
	for (int i=0; i<n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++)
			for (int z = y1; z < y2; z++)
				m[j][z] = 1;
	}
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++) if (m[i][j] == 1) sum++;
    cout << w*h - sum << endl;
return 0;
}