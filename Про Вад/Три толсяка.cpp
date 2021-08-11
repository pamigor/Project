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
	int m1, m2, m3;
	cin >> m1 >> m2 >> m3;
	if (94 <= m1 && m1 <= 727 && 94 <= m2 && m2 <= 727 && 94 <= m3 && m3 <= 727) cout << max(max(m1, m2), m3) << endl;
	else cout << "Error" << endl;
return 0;
}