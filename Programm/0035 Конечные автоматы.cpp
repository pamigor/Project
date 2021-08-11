#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int k;
	cin >> k;
	int avt[10000][2];
	for (int i = 0; i < k; i++) cin >> avt[i][0] >> avt[i][1];
	for (int i = 0; i < k; i++) cout << 19 * avt[i][1] + (avt[i][0] + 239) * (avt[i][0] + 366) / 2 << endl;
return 0;
}