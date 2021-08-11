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
#include <map>

using namespace std;

int main()
{
	string s, pr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	getline(cin, s);
	if (s.find_first_not_of(pr) == -1)
	{
		sort(s.begin(), s.end());
		int n = s.size()-1;
		if (s[n] == 48) cout << '2' << endl;
		    else
		       if (s[n] > 48 && s[n] < 58) cout << s[n] - 47 << endl;
		          else cout << s[n] - 54 << endl;					 
	}
	else
		cout << "-1" << endl;
return 0;
}