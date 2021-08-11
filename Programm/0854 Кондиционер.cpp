#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int t1, t2;
	string reg;
	cin >> t1 >> t2;
	cin >> reg;
	if (reg == "freeze") cout << min(t1, t2);
	if (reg == "heat") cout << max(t1, t2);
	if (reg == "auto") cout << t2;
	if (reg == "fan") cout << t1;
return 0;
}