#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int sum, pr, y=0;
	cin >> sum >> pr;
	for (int x = 1; x <= 1000; x++)
	{
		y = sum - x;
		if (x <= y && x * y == pr) cout << x << " " << y;
	}
return 0;
}