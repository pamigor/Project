#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int x;
	string z;
	cin >> z;
	cin >> x;
	if (z == "School" && x % 2 == 0)
	{cout << "No";}
	else
	{cout << "Yes";}
	return 0;
}