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

int sum(int x)
{
	int s = 0;
	while (x>0)
	{
		s += x % 10;
		x /= 10;
	}
	return s;
}

int main()
{
	int n, del=0;
	cin >> n;
	for (int i=1; i<=n; i++) if((sum(i) > sum(del) || sum(i) == sum(del) && i < del) && n % i == 0) del = i;
	cout << del << endl;
return 0;
}