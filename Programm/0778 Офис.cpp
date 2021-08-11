#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int sotr, kol=0;
	for (int i = 1; i <= 31; i++) { cin >> sotr; kol += sotr;}
	cout << kol / 27;
return 0;
}