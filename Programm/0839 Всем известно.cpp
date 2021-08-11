#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i=0; i<s.size(); i++) 
		if (s[i] == '0')
		{cout << "NO";
		return 0;}
	cout << "YES";
return 0;
}