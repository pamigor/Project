#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	if (n * m >= k) cout << "YES";
	else cout << "NO";
	return 0;
}