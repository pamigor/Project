#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	short int n, maxa=0, mina=0, ves[30000]; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ves[i];
		maxa = max(ves[i], maxa);
		if (i == 0) {mina = ves[0]; }
		else
		{mina = min(ves[i], mina);}
	}
	cout << mina << ' ' << maxa;
	return 0;
} 