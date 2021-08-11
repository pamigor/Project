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
	int in, zl, sm=0, km[10000];
	cin >> in;
	for (int j = 0; j < in; j++) cin >> km[j];
	cin >> zl;

	for (int i = 0; i < in; i++)
		if (zl > km[i]) sm += km[i];
		else sm += zl;
	cout << sm << endl;
return 0;
}