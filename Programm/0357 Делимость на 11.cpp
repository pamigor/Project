#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	string ch;
	int chet = 0, nechet = 0, rez=0;
	cin >> ch;
	for (int i = 0; i < ch.size(); i++)
	{
		if (i % 2 == 0) nechet += ch[i] - '0';
		if (i % 2 == 1) chet += ch[i] - '0';
	}
	if ((chet - nechet) % 11 == 0) cout << "YES";
	else cout << "NO";
return 0;
}
