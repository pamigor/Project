#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    if (n % k == 0)
    {
        cout << n / k << ' ' << k;
    }
    else
    {
        cout << n / k + 1 << ' ' << n % k;
    }
 return 0;
}