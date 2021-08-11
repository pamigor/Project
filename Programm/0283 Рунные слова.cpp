#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	char c=' ';
	int i = 0;
	while ((c=getchar()) != 10)
	{
		i++;
		if (i == 1 && c > 90 || i == 2 && c < 91 || i==5 && c > 90) { cout << "No" << endl; return 0; }
		if (i > 2 && c < 91) i = 1;
	}
	if (i==1) cout << "No" << endl; 
	else cout << "Yes" << endl;
return 0;
}