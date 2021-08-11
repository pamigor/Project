#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
	
int main()
{
	char sim, s[] = "qwertyuiopasdfghjklzxcvbnm";
	int i = 0;
	cin >> sim;
	while (s[i] != sim) i++;
	if (i == 25) cout << 'q';
	else cout << s[i + 1];
return 0;
}