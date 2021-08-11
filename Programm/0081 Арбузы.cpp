#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, mina=0, maxa=0, arbus[30000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arbus[i];
		if (i == 0) mina = arbus[i];
		else mina = min(arbus[i], mina);
		maxa = max(arbus[i], maxa);
	}
	cout << mina << " " << maxa;
return 0;
}