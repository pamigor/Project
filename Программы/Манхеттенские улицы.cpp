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
	long long int n, m, d, k;
	cin >> n >> m >> d >> k;
	cout << d * k * (n + m) - n * m * d * d << endl;
return 0;
}