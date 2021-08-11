#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
            sum += i;
    }
    else
    {
        for (int i = 1; i >= n; i--)
            sum += i;
    }
    cout << sum;
return 0;
}