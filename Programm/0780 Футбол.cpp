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
	int n, sum=1, gol=0;
	cin >> n;
	if (n == 0) cout << '0';
	else 
	{while (sum <= n) sum += gol++;
	cout << gol - 1 << endl;}
return 0;
}