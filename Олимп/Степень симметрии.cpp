#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string chislo;
	int sum = 0;
	cin >> chislo;
	for (int i = 0; i < chislo.size() / 2; i++)
		if (chislo[i] == chislo[(chislo.size() - 1) - i]) sum++;
	if (chislo.size() % 2 == 0) cout << sum;
	else cout << sum + 1;
	return 0;
}