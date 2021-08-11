#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

string nom(string a)
{
	string buk = "ABCEHKMOPTXY", cif = "0123456789";
	if (a.size() > 6) return "No";
	if (buk.find(a[0]) == -1 || buk.find(a[4]) == -1 || buk.find(a[5]) == -1) return "No";
	if (cif.find(a[1]) == -1 || cif.find(a[2]) == -1 || cif.find(a[3]) == -1) return "No";
	return "Yes";
}

int main()
{
	int n;
	string mas[50];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> mas[i];
	cout << endl;
	for (int i = 0; i < n; i++) cout << nom(mas[i]) << endl;
return 0;
}