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
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1) cout << '0';
	else
	if (n % 2 == 0) cout << n / 2;
	else cout << n ;
	cout << endl;
return 0;
}