#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
	string name;
	string fio[3];
	getline(cin, name);
	for (int i = 0; i < 3; i++) cin >> fio[i];
	sort(fio, fio + 3);
	cout << name << ":" << " " << fio[0] << "," << " " << fio[1] << ',' << ' ' << fio[2];
return 0;
}
