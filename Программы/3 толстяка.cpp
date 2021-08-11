#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int m1, m2, m3;
	cin >> m1>> m2>> m3;
	if ((94 > m1) || (m1 > 727) || (94 > m2) || (m2 > 727) || (94 > m3) || (m3 > 727)) {cout << "Error";}
	else
	{
		if (((m1 > m2) || (m1 == m2)) && (m1 > m3)) {cout << m1;}
		if (((m2 > m1) || (m2 == m3)) && (m2 > m3)) {cout << m2;}
		if (((m3 > m1) || (m3 == m1)) && (m3 > m2)) {cout << m3;}
		if ((m1 == m2) && (m1 == m3)) {cout << m1;}
	}
	return 0;
}