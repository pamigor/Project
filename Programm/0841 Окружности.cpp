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
	int n;
	cin >> n;
	if (n == 0) cout << '1' << endl;
	else cout << n * n - n + 2 << endl;
return 0;
}