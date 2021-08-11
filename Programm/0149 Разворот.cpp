#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	int n, mas[1000];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> mas[i];
	for (int i = n-1; i >= 0; i--) cout << mas[i] << " ";
return 0;
}