#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int k;
	cin >> k;
	string s = "GCV";
	for (int i = 1; i <= k; i++)
	{
		char rez = s[1];
		s[1] = s[2];
		s[2] = rez;
		rez = s[1];
		s[1] = s[0];
		s[0] = rez;
    }
	cout << s;
 return 0;
}