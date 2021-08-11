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

bool isChessSymbol(char c)
{
	int val = c - 65;
	return val >= 0 && val <= 7;
}

bool isNumber(char c)
{
	int val = c - 49;
	return val >= 0 && val <= 7;
}

int dx[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

int main()
{
	string s;
	cin >> s;
	if (s.size() < 5 || !isChessSymbol(s[0]) || !isChessSymbol(s[3]) || !isNumber(s[1]) || !isNumber(s[4]) || s[2] != '-')
	{
		cout << "ERROR";
		return 0;
	}
	int x1, y1, x2, y2;
	x1 = s[0] - 65;
	y1 = s[1] - 49;
	x2 = s[3] - 65;
	y2 = s[4] - 49;
    for (int i = 0; i < 8; ++i)
	{
		if (x1 + dx[i] == x2 && y1 + dy[i] == y2)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
return 0;
}