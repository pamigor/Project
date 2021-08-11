#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n,i,sum = 0;
    cin >> n;
    if (n > 0)
    {
    for (i = 1; i <= n; i++)
        sum+=i;
    }
    else
    {
    for (i=1; i>=n; i--)
        sum+=i;
    }
    cout << sum;
	return 0;
}