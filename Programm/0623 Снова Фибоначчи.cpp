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

using namespace std;

int main()
{
	long long int n, chf1=1, chf2=1;
	cin >> n;
	for (int i = 2; i <= n % 60; i++)
	{
		chf2 = chf2 + chf1;
		chf1 = chf2 - chf1;
	}
	if (n < 2) cout << "1";
	else cout << chf2 % 10 << endl;
return 0;
}