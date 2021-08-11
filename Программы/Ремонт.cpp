#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int l, w, h;
	cin >> l >> w >> h;
	if ((l * h * 2 + w * h * 2) % 16 != 0)
	{cout<<1 + (l * h * 2 + w * h * 2) / 16;}
	else
	cout << (l * h * 2 + w * h * 2) / 16;
	return 0;
}