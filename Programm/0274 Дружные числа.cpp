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

using namespace std;

int main()
{
	int n;
	string m[10][2];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> m[i][0] >> m[i][1];
	cout << endl;
	for (int i = 0; i < n; i++)
		if (m[i][0].find_first_not_of(m[i][1]) == -1 &&
			m[i][1].find_first_not_of(m[i][0]) == -1) cout << "YES" << endl;
		else cout << "NO" << endl;
return 0;
}