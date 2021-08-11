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
	int a, b, c = 1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) c = c * a % 10;
	cout << c % 10 << endl;
return 0;
}