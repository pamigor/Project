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
	string vr;
	cin >> vr;
	int ch1=vr[0]-48, ch2=vr[1]-48, m1=vr[3]-48, m2=vr[4]-48;
	do
	{
		if (m2 == 10) { m2 = 0; m1++; }
		else m2++;
		if (m1 == 6) { m1 = 0; ch2++; }
		if (ch1 < 2 && ch2 == 10) { ch2 = 0; ch1++; }
		if (ch1==2 && ch2 == 4) { ch2 = 0; ch1=0; }
	} 
	while (ch1 != m2 || ch2 != m1);
	cout << ch1 << ch2 << ':' << m1 << m2 << endl;
return 0;
}