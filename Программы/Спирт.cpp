#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	unsigned long long c, h, o;
	cin >> c >> h >> o;
	c = c / 2;
	h = h / 6;
	if (c == 0 || h == 0 || o == 0) { cout << 0; }
	else
	if (c<o && c<h || c<o && c==h || c==o && c<h) { cout << c; }
	else
	if (h < o && h < c || h < o && h == c || h == o && h < c) { cout << h; }
	else
	{cout << o;}
	return 0;
}