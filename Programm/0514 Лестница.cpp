#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	int n, s=0, i=0;
	cin >> n;
	do
	{i++;
	s = (2 + (i - 1)) * i / 2;}
	while (s < n);
	if (s == n) cout << i;
	else cout << i - 1;
return 0;
}
