#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int srt(int a, int b)
{
	int m[4];
	for (int j = 0; j < 4; j++) { m[j] = a % 10; a = a / 10; }
	sort(m, m + 4);
	if (b==0) return m[3] + m[2] * 10 + m[1] * 100 + m[0] * 1000;
	if (b==1) return m[0] + m[1] * 10 + m[2] * 100 + m[3] * 1000;
}

int main()
{
	int n;
	cin >> n;
	if (n==6174) cout << 6174 << endl << '0';
	else for (int i=1; i<=7; i++)
		    if (srt(n, 1) - srt(n, 0) == 6174) { cout << 6174 << endl << i; return 0; }
		    else n = srt(n, 1) - srt(n, 0);
return 0;
}
