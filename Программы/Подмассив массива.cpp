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
    int n, m, pmas[100][2];
	long long int mas[1000];
	cin >> n;
	for (int a = 0; a < n; a++) cin >> mas[a];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> pmas[i][0] >> pmas[i][1];
	cout << endl;
	for (int i = 0; i < m; i++)
	{for (int j = pmas[i][0] - 1; j <= pmas[i][1] - 1; j++) cout << mas[j] << " ";
	cout << endl;}
return 0;
}