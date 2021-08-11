#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	int n, m, sum=0;
	string mb[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> mb[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (mb[i][j] == '.')
			{
				if (i != 0 && i != n - 1 && j != 0 && j != m - 1)
					if (mb[i][j - 1] != '*' && mb[i][j + 1] != '*' && mb[i - 1][j] != '*' && mb[i + 1][j] != '*') sum++;
				if (i == 0 && j != 0 && j != m - 1) if (mb[i][j - 1] != '*' && mb[i][j + 1] != '*' && mb[i + 1][j] != '*') sum++;
				if (i == n - 1 && j != 0 && j != m - 1) if (mb[i][j - 1] != '*' && mb[i][j + 1] != '*' && mb[i - 1][j] != '*') sum++;
				if (i != 0 && j == 0 && i != n - 1) if (mb[i - 1][j] != '*' && mb[i + 1][j] != '*' && mb[i][j + 1] != '*') sum++;
				if (i != 0 && j == m - 1 && i != n - 1) if (mb[i - 1][j] != '*' && mb[i + 1][j] != '*' && mb[i][j - 1] != '*') sum++;
				if (i == 0 && j == 0) if (mb[i + 1][j] != '*' && mb[i][j + 1] != '*') sum++;
				if (i == n - 1 && j == 0) if (mb[i - 1][j] != '*' && mb[i][j + 1] != '*') sum++;
				if (i == 0 && j == m - 1) if (mb[i + 1][j] != '*' && mb[i][j - 1] != '*') sum++;
				if (i == n - 1 && j == m - 1) if (mb[i - 1][j] != '*' && mb[i][j - 1] != '*') sum++;
			}
		}
	cout << sum;
return 0;
}
