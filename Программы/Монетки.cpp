#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n,mas[100],a=0,b=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
		if (mas[i] == 0)
		    a++;
		else
		    b++;
	}
	cout<< min(a, b);
	return 0;
} 