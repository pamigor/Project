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

using namespace std;

int main()
{
	string n, m;
	cin >> n;
	sort(n.begin(), n.end());
	m = n;
	for (int i=0; i<n.size(); i++)
		if (n[i] != '0') {swap(n[0], n[i]); break;}
	reverse(m.begin(), m.end());
	cout << n << ' ' << m << endl;
return 0;
}