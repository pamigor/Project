#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int k;
	char hr, g[] = "GCV";
	cin >> k;
	for (int i = 0; i < k; i++) 
	   {hr = g[1]; g[1] = g[2]; g[2] = hr;
		hr = g[1]; g[1] = g[0]; g[0] = hr;}
	cout << g;
return 0;
}