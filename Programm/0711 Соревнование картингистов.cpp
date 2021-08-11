#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int kol_uch, kol_krug, time, sum = 0, min = 100001;
	string name, min_name;
	cin >> kol_uch >> kol_krug;
	for (int i = 0; i < kol_uch; i++)
	{
		cin >> name;
		for (int j = 0; j < kol_krug; j++)
		{
			cin >> time;
			sum += time;
		}
		if (min > sum) { min = sum; min_name=name; }
		sum = 0;
	}
	cout << endl << min_name;
return 0;
}