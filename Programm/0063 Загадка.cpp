#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int sum, pr;
	cin >> sum >> pr;
	for (int i=1; i<=1000; i++)
		for (int j=1; j<=1000; j++)
			if (i + j == sum && i * j == pr)
			{cout << min(i, j) << " " << max(i, j);
			return 0;}
return 0;
}