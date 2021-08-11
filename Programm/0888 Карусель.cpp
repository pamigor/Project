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
	int n, k, ball = 3;
	long long int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k) sum += ball++;
		else ball = max(ball - 3, 3);
	}
	cout <<  sum << endl;
return 0;
}
