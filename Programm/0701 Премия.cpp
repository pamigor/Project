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
	int v, ch=0, mn=1, sum=0;
	string p;
	cin >> v >> p;
	for (int i=p.size()-1; i>=0; i--)
	{
		if (p[i] < 58) ch = p[i] - 48;
		else ch = p[i] - 55;
		sum += ch * mn;
		mn *= v % 10 + 2;
	}
	cout << sum << endl;
return 0;
}