#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	string nap, var="123";
	char rez;
	cin >> nap;
	for (int i = 0; i < nap.size(); i++)
	{
		if (nap[i] == 'A') { rez = var[0]; var[0] = var[1]; var[1] = rez; }
		if (nap[i] == 'B') { rez = var[1]; var[1] = var[2]; var[2] = rez; }
		if (nap[i] == 'C') { rez = var[0]; var[0] = var[2]; var[2] = rez; }
	}
	cout << var.find_first_of('1', 0) + 1;
return 0;
}