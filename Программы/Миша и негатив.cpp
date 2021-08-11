#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, m, osh = 0;
	char poz[100][100], neg[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> poz[i][j];
	cout << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{cin >> neg[i][j];
	if (poz[i][j] == neg[i][j]) osh++;}
	cout << osh;
return 0;
}