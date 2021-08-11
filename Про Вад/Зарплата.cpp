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
	int z1, z2, z3;
	cin >> z1 >> z2 >> z3;
	cout << max(max(z1, z2), z3) - min(min(z1, z2), z3) << endl;
return 0;
}