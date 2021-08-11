#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int mas[10000][2], k, d;
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> mas[i][1] >> mas[i][2];
	    cout << endl;
		for (int i = 0; i < k; i++)
			cout << (d = 19 * mas[i][2] + (mas[i][1] + 239) * (mas[i][1] + 366) / 2) << endl;
 return 0;
}