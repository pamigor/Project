#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    string a;
    int i=0, sum=0, max=0;
        cin >> a;
        while (a.size() > i)
        {
            if (a[i] == '0') sum++;
            else sum = 0;
            if (sum > max) max = sum;
            i++;
        }
        cout << max;
return 0;
}