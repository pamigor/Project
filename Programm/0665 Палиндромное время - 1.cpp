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

using namespace std;

int main()
{
	int ch, m;
	scanf("%d%*c%d", &ch, &m);
	do
	{
		if (m == 60) { m = 0; ch++; }
		else m++;
		if (ch == 24) ch = 0;
	} while (ch / 10 != m % 10 || ch % 10 != m / 10 || m == 60);
	printf("%02d%c%02d\n", ch, ':', m);
return 0;
}