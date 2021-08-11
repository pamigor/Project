#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	int god;
	cin >> god;
	if (god % 400 == 0 || god % 4 == 0 && god % 100 != 0) printf("12/09/%04u", god);
	else printf("13/09/%04u", god);
return 0;
}