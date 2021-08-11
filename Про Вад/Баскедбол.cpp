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
	int a, b, k1=0, k2=0; 
	for (int i = 1; i <= 4; i++)
	{
		cin >> a >> b;
		k1 += a; 
		k2 += b;
	}
	if (k1 > k2) cout << '1' << endl;
	if (k1 < k2) cout << '2' << endl;
	if (k1 == k2) cout << "DRAW" << endl;
return 0;
}