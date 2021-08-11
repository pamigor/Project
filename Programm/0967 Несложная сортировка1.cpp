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

int sum(int n, int k)
{
	int s = 0;
	while (n > 0)
	{
		s += n % k;
		n /= k;
	}
	return s;
}

int main()
{
	int n, k1, k2, a, mas[1000];
	cin >> n >> k1 >> k2;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		mas[i] = sum(a,k1) * sum(a,k2);
	}
	sort(mas, mas + n);
	for (int i = 0; i < n; i++) cout << mas[i] << ' ';
	cout << endl;
return 0;
}