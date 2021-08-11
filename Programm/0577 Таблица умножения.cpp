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
	int n, m, mn = 0, ch[10] = { 0,0,0,0,0,0,0,0,0,0 };
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			mn = i * j;
			while(mn>0)
			{
				ch[mn % 10]++;
				mn /= 10;
			}
		}
	for (int i = 0; i < 10; i++) cout << ch[i] << endl;
return 0;
}