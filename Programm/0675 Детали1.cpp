#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	string d;
	int n, m, sum=0, min=0;
	cin >> n >> m;
	min = m;
	for (int i = 0; i < n; i++) 
	{
	cin >> d;
	sum = count(d.begin(), d.end(), '.');
	if (min > sum) min = sum;
	}
	cout << min;
return 0;
}