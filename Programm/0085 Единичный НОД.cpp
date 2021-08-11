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
	int n, m;
	cin >> n >> m;
	while (n * m > 0)
		if (n >= m) n %= m;
		else m %= n;
	cout << string(m+n,'1') << endl;
return 0;
}