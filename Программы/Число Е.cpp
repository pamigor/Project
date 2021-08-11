#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string e = "2.7182818284590452353602875";
	int n;
	cin >> n;
	if(n==25)
	{cout << e;}
	else
	{
		if (n == 0)
		{
			cout << 3;
		}
		else
		{
			if ((e[n + 2] - '0') > 4)
			{
				e[n + 1] = e[n + 1] + 1;
			}
			e.resize(n + 2);
			cout << e;
		}
	}
 return 0;
}