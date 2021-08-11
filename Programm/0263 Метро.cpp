#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int kol, so, sn;
	cin >> kol >> so >> sn;
	if (so < sn) cout << min(sn - so - 1, (kol - sn) + so - 1);
	if (so > sn) cout << min(so - sn - 1, (kol - so) + sn - 1);
return 0;
}