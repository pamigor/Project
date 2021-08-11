#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a;
    a = b - 1;
    b = c - 1;
    cout << a <<' '<< b;
    return 0;
}