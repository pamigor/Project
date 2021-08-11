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

int prov(int x)
{
	for (int i = 1; i < 3; i++) x /= 8;
      if (x % 10 % 2 != 0) return 1;
   else return 2;
}

int main()
{
	int n, a, f=0;
	cin >> n;
	vector <int> rez;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		if (a % 2 == 0 && prov(a) == 1) { rez.push_back(a); f++; }
	}
	sort(rez.begin(), rez.end());
	cout << f << endl;
	for (int i = 0; i < rez.size(); i++) cout << rez[i] << ' ';
	cout << endl;
return 0;
}