#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, most[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> most[i];
		if (most[i] <= 437)
		{
			cout << "Crash" << " " << i + 1;
			return 0;
		}
	}
		cout << "No crash";
return 0;
}