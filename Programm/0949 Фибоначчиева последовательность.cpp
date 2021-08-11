#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int n, sled, pred, hran;
	cin >> n >> pred >> sled;
	for (int i = n - 1; i >= 1; i--)
	{hran = pred; 
	pred = sled - pred;
	sled = hran;}
	cout << pred << " " << sled;
return 0;
}