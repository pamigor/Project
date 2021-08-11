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
	int n, sum = 0;
	string s[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (s[i][0] == s[i][3]) sum++;
	}
	cout << sum;
return 0;
}
