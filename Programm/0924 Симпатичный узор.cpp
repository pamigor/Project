#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	char u[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) cin >> u[i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (u[i][j] == u[i][j + 1] && u[i][j] == u[i + 1][j] && u[i][j] == u[i + 1][j + 1])
			{cout << "No"; return 0;}
	cout << "Yes";
	return 0;
}
