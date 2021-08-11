#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    char bo;
    int n=0;
    s = "qwertyuiopasdfghjklzxcvbnm";
    cin >> bo;
    if (bo == 'm')
    {cout << 'q';}
    else
    {
        while (s[n] != bo)
        {n = n + 1;}
        cout << (s[n + 1]);
    }
 return 0;
}