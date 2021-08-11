#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>

using namespace std;

string prov(string s)
{
	string cif = "0123456789", buk = "ABCEHKMOPTXY";
	if (s.size() > 6) return "No";
	if (buk.find(s[0]) == -1 || buk.find(s[4]) == -1 || buk.find(s[5]) == -1) return "No";
	if (cif.find(s[1]) == -1 || cif.find(s[2]) == -1 || cif.find(s[3]) == -1) return "No";
	return "Yes";
}

int main()
{
	int n;
	string nom[50];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> nom[i];
	cout << endl;
	for (int i = 0; i < n; i++) cout << prov(nom[i]) << endl;
return 0;
}
