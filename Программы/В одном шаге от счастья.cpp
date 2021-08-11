#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>
	using namespace std;
	
	int sum(int test)
	{int s = 0;
		for (int i = 0; i < 3; i++)
		{s += test % 10;
		test /= 10;}
	return s;
	}

	int main()
	{
	int k, vova[10];
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> vova[i];
	for (int i = 0; i < k; i++)
	    {if (sum((vova[i] - 1) % 1000) == sum((vova[i] - 1) / 1000) ||
	     sum((vova[i] + 1) % 1000) == sum((vova[i] + 1) / 1000)) cout << "Yes" << endl;
	     else cout << "No" << endl;}
	return 0;
	}