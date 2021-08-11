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
	string n, s = "1";
	cin >> n;
	if (n[n.size() - 1] != '0') cout << '1' << endl;
	else
	{
		int i = n.size() - 1;
		while (n[i] == '0') { s += '0'; i--;	}
		cout << s << endl;
	}
return 0;
}