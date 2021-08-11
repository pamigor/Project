#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int k1=0, k2=0, bas[2][4];
	for (int i = 0; i < 4; i++)
	{cin >> bas[0][i] >> bas[1][i];
	k1 += bas[0][i];
	k2 += bas[1][i];}
	if (k1 > k2) cout << '1';
	if (k1 < k2) cout << '2';
	if (k1 == k2) cout << "DRAW";
return 0;
}