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
	double n, p;
	cin >> n >> p;
	cout.precision(9);
	cout << fixed << 100 / (p + (100 - p) / n) << endl;
return 0;
}