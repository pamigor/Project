#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	string s, obr="abcdefghijklmnopqrstuvwxyz";
	int sum=0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) 
	{
		if (s[i] == '1' && sum == 0) cout << obr[0];
		else if (s[i] == '0') sum++;
		else 
		{
			cout << obr[sum];
			sum = 0;
		}
	}
return 0;
}