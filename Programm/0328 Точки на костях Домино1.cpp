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
	long long int n, sum=0;
	cin >> n;
	for (long long int i = 0; i <= n; i++)
		for (long long int j = i; j <= n; j++) sum += i + j; 
	cout << sum << endl;
return 0;
}