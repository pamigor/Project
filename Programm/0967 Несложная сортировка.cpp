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
	int n, k1, k2;
	long long int a, a1=0, s1 = 0, s2 = 0, mas[1000];
	cin >> n >> k1 >> k2;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		a1 = a; s1 = 0; s2 = 0;
		while (a > 0)
		{
			s1 += a % k1;
			a /= k1;
		}
		while (a1 > 0)
		{
			s2 += a1 % k2;
			a1 /= k2;
		}
		mas[i] = s1 * s2;
	}
	sort(mas, mas + n);
	for (int i = 0; i < n; i++) cout << mas[i] << ' ';
	cout << endl;
return 0;
}