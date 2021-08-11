#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{if (s[i] == '8') n += 2;
	 if ((s[i] == '9') || (s[i] == '6') || (s[i] == '0')) n++;}
		cout << n;
return 0;
}