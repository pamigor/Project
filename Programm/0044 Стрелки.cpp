#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
	string s;
	int kol = 0;
	cin >> s;
	if (s.size()>4) 
	for (int i = 0; i < s.size() - 4; i++)
		if (s.substr(i, 5) == "<--<<" || s.substr(i, 5) == ">>-->") kol++;
	cout << kol;
	return 0;
}
