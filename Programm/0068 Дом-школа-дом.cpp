#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	string s;
	int x;
	cin >> s >> x;
	if (s == "School" && x % 2 == 0) cout << "No";
	else cout << "Yes";
return 0;
}
