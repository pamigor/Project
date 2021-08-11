#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    string s;
    int i = 0, sum = 0, max = 0;
    cin >> s;
    while (s.size() > i)
    {
        if (s[i] == '0') sum++;
        else sum = 0;
        if (sum > max) max = sum;
        i++;
    }
    cout << max;
return 0;
}