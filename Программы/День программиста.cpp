#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "12/09/";
	else
		cout << "13/09/";
	cout.width(4);
	cout.fill('0');
	cout << year;
	return 0;
}