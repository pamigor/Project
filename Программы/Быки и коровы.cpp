#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string p,v;
    int b=0,k=0;
    cin >> p >> v;
    for (int i = 0; i <= 3; i++)
    {
        if (p[i] == v[i])
        {b++;}
          
    }
    if ((p[0] == v[1]) || (p[0] == v[2]) || (p[0] == v[3])) 
    {k = k + 1;}
    if ((p[1] == v[0]) || (p[1] == v[2]) || (p[1] == v[3]))
    {k = k + 1;}
    if ((p[2] == v[0]) || (p[2] == v[1]) || (p[2] == v[3]))
    {k = k + 1;}
    if ((p[3] == v[0]) || (p[3] == v[1]) || (p[3] == v[2]))
    {k = k + 1;}
    cout << b << ' ' << k;
 return 0;
}