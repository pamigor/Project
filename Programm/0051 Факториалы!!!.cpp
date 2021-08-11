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
	int n, k = 0, pr=1;
	string s;
	cin >> n >> s;
	k = s.size();
	while (n > 0)
	{
		pr *= n;
		n -= k;
	}
	cout << pr << endl;
return 0;
}