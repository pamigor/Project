#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int n, mas[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
		if (mas[i] <= 437) 
		{
			cout << "Crash " << i + 1;
			return(0);
		}
	}
	cout << "No crash";
	return 0;
}