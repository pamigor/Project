#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n;
	cin >> n;
	if (n == 1 || n == 2 || n == 12) cout << "Winter";
	else
	if (3 <= n && n <= 5)  cout << "Spring";
	else
	if (6 <= n && n <= 8)  cout << "Summer";
	else
	if (9 <= n && n <= 11)  cout << "Autumn";
	else cout << "Error";
return 0;
}