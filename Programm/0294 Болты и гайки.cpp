#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int k1, l1, m1, k2, l2, m2, pot1=0, pot2=0;
	cin >> k1 >> l1 >> m1;
	cin >> k2 >> l2 >> m2;
	pot1 = k1 * l1 / 100;
	pot2 = k2 * l2 / 100;
	if (k1 - pot1 > k2 - pot2) cout << pot1 * m1 + pot2 * m2 + ((k1-pot1) - (k2-pot2)) * m1;
	if (k1 - pot1 < k2 - pot2) cout << pot1 * m1 + pot2 * m2 + ((k2 - pot2) - (k1 - pot1)) * m2;
	if (k1 - pot1 == k2 - pot2) cout << pot1 * m1 + pot2 * m2;
return 0;
}