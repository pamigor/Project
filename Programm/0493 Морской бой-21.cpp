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
	int n, m, sum = 0;
	char mb[102][102];
	
	cin >> n >> m;
	for (int i = 1; i < n + 1; i++)
	{
		mb[i][0] = '.'; 
		mb[i][m + 1] = '.';
		for (int j = 1; j < m + 1; j++)
		{
			mb[0][j] = '.';
			mb[n + 1][j] = '.';
			cin >> mb[i][j];
		}
	}
	for (int i = 1; i < n+1; i++)
		for (int j = 1; j < m+1; j++)
		{
			if (mb[i][j] == '.' && mb[i][j-1]== '.' && mb[i-1][j] == '.' && mb[i][j+1] == '.' && mb[i + 1][j] == '.') sum++;
		}
	cout << sum << endl;
	return 0;
}