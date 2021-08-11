#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int vz, vp;
    cin >> vz >> vp;
    if (vp > vz)
    {
        cout << vp - vz;
    }
    if (vp == vz)
    {
        cout << "Error";
    }
    if (vp < vz)
    {
        cout << 12 + vp - vz;
    }
    return 0;
}