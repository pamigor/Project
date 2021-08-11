#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout.precision(1);
    cout << fixed << 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
return 0;
}