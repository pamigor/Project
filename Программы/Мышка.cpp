#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int w, h, r;
    cin >> w >> h >> r;
    if ((h >= r + r) and (w >= r + r))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}