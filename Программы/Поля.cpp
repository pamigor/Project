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
	long long int a,b;
	cin >> a >> b;
	for (long long int i = min(a,b); i <= max(a, b); i++)
		if (i * i == a * b)
	    {cout << i << endl; return 0;}
	cout << '0' << endl;
return 0;
}