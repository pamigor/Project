#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int zap=0, v;
	char g;
	scanf("%c%d", &g, &v);
	if (g == 'A' || g == 'C' || g == 'E' || g == 'G') zap = 1;
	else zap = 2;
	if ((zap + v) % 2 == 0) cout << "BLACK";
	else cout << "WHITE";
return 0;
}