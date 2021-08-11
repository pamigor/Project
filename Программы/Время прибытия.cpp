#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int h, m, h2, m2, s=0;
	scanf("%d%*c%d", &h, &m);
	scanf("%d%d", &h2, &m2);
	if (m + m2 > 59) h2 += 1;
	printf("%02d%c%02d", (h + h2) % 24, ':', (m + m2) % 60);
return 0;
}