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
#include <map>

using namespace std;

int main()
{
	int n, w, d, p, pp=0;
	cin >> n >> w >> d >> p;
	for (int i = 1; i < n; i++) pp += i;
	if (pp*w - p > 0) cout << (pp*w-p)/d << endl;
	else cout << n << endl;
return 0;
}