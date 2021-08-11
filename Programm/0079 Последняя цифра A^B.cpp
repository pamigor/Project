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
	int a, b, st=1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) st = st % 10 * a % 10;
	cout << st % 10;
return 0;
}
