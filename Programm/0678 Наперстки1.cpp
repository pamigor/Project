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
	string nap, var = "100";
	cin >> nap;
	for (int i = 0; i < nap.size(); i++)
	{
		if (nap[i] == 'A') swap(var[0],var[1]);
		if (nap[i] == 'B') swap(var[1],var[2]);
		if (nap[i] == 'C') swap(var[0],var[2]);
	}
	cout << var.find('1') + 1;
return 0;
}
