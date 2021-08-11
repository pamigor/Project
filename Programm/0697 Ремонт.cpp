#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int l, w, h;
	cin >> l >> w >> h;
	if ((l + w) * 2 * h % 16 == 0) cout << (l + w) * 2 * h / 16;
	else cout << (l + w) * 2 * h / 16 + 1;
return 0;
}