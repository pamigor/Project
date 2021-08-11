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
	int k;
	cin >> k;
	if (k > 145) cout << "NO";
	else cout << (k * 5 - 5) / 60 << ' ' << (k * 5 - 5) % 60;
return 0;
}