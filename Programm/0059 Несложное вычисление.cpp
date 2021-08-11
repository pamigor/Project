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
	long long int n, ch = 0, pr = 1, sum=0, i=1;
	int k;
	cin >> n >> k;
	while (n > 0)
	{
		ch += n % k * i;
		pr *= ch / i;
		sum += ch / i;
		n /= k;
		i *= 10;
	}
	cout << pr - sum << endl;
return 0;
}