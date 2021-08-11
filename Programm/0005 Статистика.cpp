#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, mas[100], chet=0, nechet=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
		if (mas[i] % 2 != 0)
		{cout << mas[i] << " ";
		nechet++;}
	}
	cout << endl;
	for (int i = 0; i < n; i++) 
		if (mas[i] % 2 == 0)
		{cout << mas[i] << " ";
		chet++;}
	cout << endl;
	if (chet >= nechet) cout << "YES";
	else cout << "NO";
return 0;
}