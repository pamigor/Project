﻿#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n[0] + n[1] + n[2] == n[3] + n[4] + n[5])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
 return 0;
}