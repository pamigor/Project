#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 12) {cout << "Error";}
    if ((n == 12) or (n == 1) or (n == 2)) { cout << "Winter";}
    if ((n >=3) and (n <= 5)) {cout << "Spring";}
    if ((n >= 6) and (n <= 8)) {cout << "Summer";}
    if ((n >= 9) and (n <= 11)) {cout << "Autumn";}
    return 0;
}