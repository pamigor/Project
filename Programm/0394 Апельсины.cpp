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

long long int nod( long long int a, long long int b)
{
	while (a * b != 0)
		if (a > b) a %= b;
		else b %= a;
	return a + b;
}

int main()
{
	long long int a, b;
	cin >> a >> b;
	cout << a / nod(a, b) << endl;
return 0;
}