#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, m;
	long long int osn[1000], pod[100][2];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> osn[i];
	cin >> m;
	for (int j = 0; j < m; j++) cin >> pod[j][0] >> pod[j][1];
	cout << endl;
	for (int z = 0; z < m; z++)
	{
		for (int y = 0; y <= (pod[z][1] - pod[z][0]); y++)
			cout << osn[pod[z][0] + y-1] << " ";
			cout << endl;
	}
return 0;
}