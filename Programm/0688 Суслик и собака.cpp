#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

double dl(int x1, int y1, int x2, int y2)
{return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));}

int main()
{
	int xz, yz, xs, ys, nor[1000][2];
	int n;
	cin >> xz >> yz;
	cin >> xs >> ys;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> nor[i][0] >> nor[i][1];
	for (int i = 0; i < n; i++)
		if (dl(xz, yz, nor[i][0], nor[i][1]) * 2 <= dl(xs, ys, nor[i][0], nor[i][1]))
		{cout << i + 1;
		return 0;}
	cout << "NO";
return 0;
}