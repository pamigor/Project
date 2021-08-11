#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, dor, kol=0;
	cin >> n;
	for (int i=1; i<=n*n; i++)
	{cin >> dor;
	kol += dor;}
	cout << kol / 2;
return 0;
}