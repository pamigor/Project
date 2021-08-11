#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    int n, v[100][3], s[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
        s[i] = v[i][0] * 3600 + v[i][1] * 60 + v[i][2];
    }
    sort(s, s + n);
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << s[i] / 3600 << " " << s[i] / 60 % 60 << " " << s[i] % 60 << endl;
return 0;
}