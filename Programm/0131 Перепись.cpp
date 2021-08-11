#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, v=0, nomer=0, dom[100][2];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> dom[i][0] >> dom[i][1];
			if (dom[i][1] == 1)
				if (dom[i][0] > v)
				{v = dom[i][0];
				 nomer = i + 1;}
		}
		if (nomer == 0) cout << "-1";
		else cout << nomer;
return 0;
}