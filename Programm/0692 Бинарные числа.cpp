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
	if (n <= 0) cout << "NO";
	else 
	{
		while (n % 2 == 0) n /= 2;
		if (n==1) cout << "YES";
		else cout << "NO";
	}
return 0;
}