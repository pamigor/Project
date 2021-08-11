#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int s(char x, int y)
{
	string ch = "01234567", r = "4567", g = "2367", b = "1357";
	char z = y + 48;
	if (x == '.' && ch.find(z) != -1) return 1;
	else if (x == 'R' && r.find(z) != -1) return 1;
	else if (x == 'G' && g.find(z) != -1) return 1;
	else if (x == 'B' && b.find(z) != -1) return 1;
	else return 0;
}

int main()
{
	int n, m, t[100][100], f = 0;
	cin >> n >> m;
	string r[100];
	for (int i = 0; i < n; i++) cin >> r[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> t[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) if (s(r[i][j], t[i][j]) == 0) f = 1;
	if (f == 0) cout << "YES";
	else cout << "NO";
return 0;
}
