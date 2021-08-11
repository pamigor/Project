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
	int ch1, m1, ch2, m2, ud = 0;
	cin >> ch1 >> m1 >> ch2 >> m2;
	
	while (m1 != m2 || ch1 != ch2)
	{
		if (m1 == 60) { ch1++; m1 = 0;}
		if (m1 == 30) ud++;
		if (ch1 < 13 && m1==0) ud += ch1;
		if (ch1 >= 13 && m1==0) ud += ch1 - 12;
		if (ch1==0 && m1==0) ud += 12;
		if (ch1 == 24) ch1 = 0;
		m1++;
	}
	cout << ud << endl;
return 0;
}