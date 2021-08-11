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
	int n;
	string e = "2.7182818284590452353602875";
	cin >> n;
	if (n == 0) cout << 3;
	else 
	{
		if (e[n + 2] > 52) e[n + 1]++;
		cout << e.erase(n + 2);
	}
return 0;
}
