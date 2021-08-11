#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int ch1, m1, ch2, m2;
	scanf("%d%*c%d", &ch1, &m1);
	scanf("%d%d", &ch2, &m2);
	if ((m1 + m2) / 60 > 0) ch2 += 1;
	printf("%02d%c%02d", (ch1 + ch2) % 24, ':', (m1 + m2) % 60);
return 0;
}