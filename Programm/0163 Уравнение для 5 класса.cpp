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
	string u;
	int a1=0, a2=0, a3=0;
	cin >> u;
	if (u[0] != 120) a1 = u[0] - 48;
	if (u[2] != 120) a2 = u[2] - 48;
	if (u[4] != 120) a3 = u[4] - 48;
	if (u[1] == 43 && u[0] == 120) cout << a3 - a2 << endl;
	if (u[1] == 43 && u[2] == 120) cout << a3 - a1 << endl;
	if (u[1] == 43 && u[4] == 120) cout << a1 + a2 << endl;
	if (u[1] == 45 && u[0] == 120) cout << a2 + a3 << endl;
	if (u[1] == 45 && u[2] == 120) cout << a1 - a3 << endl;
	if (u[1] == 45 && u[4] == 120) cout << a1 - a2 << endl;
return 0;
}