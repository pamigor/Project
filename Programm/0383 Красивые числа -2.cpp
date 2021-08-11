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

int k(int x)
{
	int sum = 0, kol = 0;
	while (x>0)
	{
		sum += x % 10;
		kol++;
		x /= 10;
	}
	if (sum % kol == 0) return 1;
	else return 0;
}

int main()
{
	int n, ch = 0, i=0;
	cin >> n;
	while (i<n)
	{
		ch++;
		i += k(ch);
	}
	cout << ch << endl;
return 0;
}