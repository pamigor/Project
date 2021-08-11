﻿#include <iostream>
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

string per(int x, int n)
{
	char s[10] = "";
	string s1;
	itoa(x, s, n);
	s1 = s;
	transform(s1.begin(), s1.end(), s1.begin(), toupper);
	return s1;
}

int kol(string s)
{
	set <char> p;
	for (int i = 0; i < s.size(); i++) p.insert(s[i]);
	return p.size();
}

int main()
{
	int n, ch[100];
	cin >> n;
	string s[100];
	for (int i = 0; i < n; i++) 
	{
		cin >> ch[i];
		s[i] = per(ch[i], 2);
		int d = kol(s[i]), ss = 2;
		for (int j = 3; j <= 36; j++)
		{
			if (s[i].size() > per(ch[i], j).size() ||
				(s[i].size() == per(ch[i], j).size() && kol(per(ch[i], j)) < d))
			{
				s[i] = per(ch[i], j);
				d = kol(per(ch[i], j));
				ss = j;
			}
		}
		ch[i] = ss;
	}
	for (int i = 0; i < n; i++) cout << ch[i] << ' ' << s[i] << endl;
return 0;
}