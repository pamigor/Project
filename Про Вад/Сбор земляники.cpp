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
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y >= z) cout << x + y - z << endl;
	else cout "Impossible" << endl;
return 0;
}