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
	int n, min=0, max=0, k[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> k[i];
	sort(k, k + n);
	for (int i = 0; i < n; i++)
		if (i < n / 2) min += k[i];
		else max += k[i];
	cout << max - min << endl;
return 0;
}