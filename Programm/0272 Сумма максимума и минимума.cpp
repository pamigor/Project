#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n, i = 0, chet=-10000, nechet=10000;
	while (cin >> n)
	{
		i++;
		if (i % 2 == 0)
		{
			if (n > chet) chet = n;
		}
		else
		{
			if (n < nechet) nechet = n;
		}
	}
	cout << chet + nechet << endl;
return 0;
}