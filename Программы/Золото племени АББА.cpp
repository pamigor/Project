#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

string maxstr(string a, string b) 
{if (a.length() > b.length())
return a;
if (a.length() < b.length())
return b;
for (int i = 0; i < a.length(); i++)
{if (a[i] > b[i]) return a;
 if (a[i] < b[i]) return b;}
return a;
}

int main()
{
	string m1, m2, m3;
	cin >> m1 >> m2 >> m3;
	cout << maxstr(maxstr(m1, m2), m3);
	return 0;
} 