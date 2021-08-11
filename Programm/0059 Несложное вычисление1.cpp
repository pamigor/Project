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
	long long int n, pr = 1, sum=0;
	int k;
	cin >> n >> k;
	while (n > 0)
	{
		pr *= n % k;
		sum += n % k;
		n /= k;
	}
    cout << pr - sum << endl;
return 0;
}