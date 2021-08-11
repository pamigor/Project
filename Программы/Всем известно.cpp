#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string a;
	int i=0;
	cin >> a;
	while ((i + 1) <= a.size())
	{
		if (a[i] == '0')
		{cout << "NO";
		return 0;}
		i++;
	}
	cout << "YES";
	return 0;
}