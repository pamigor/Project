#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	int n, kus=1;
	cin >> n;
	for (int i = 1; i <= n; i++) kus = kus + i;
	cout << kus;
return 0;
}