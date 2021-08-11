#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, kol=0, kip;
	cin >> n;
	for (int i=0; i<n; i++) 
	{cin >> kip;
	kol += kip;}
	cout << kol - (n-1);
return 0;
}