#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n, ed=0, null=0, mas[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
		if (mas[i] == 1) ed++;
		else null++;
	}
	cout << min(ed, null);
return 0;
}