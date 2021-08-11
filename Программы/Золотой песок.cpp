#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3, maxa, sredna, mina, maxb, srednb, minb;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    mina = min(min(a1, a2), a3);
    maxa = max(max(a1, a2), a3);
    minb = min(min(b1, b2), b3);
    maxb = max(max(b1, b2), b3);
    if ((maxa > a1) && (mina < a1)) {sredna = a1;}
    if ((maxa > a2) && (mina < a2)) {sredna = a2;}
    if ((maxa > a3) && (mina < a3)) {sredna = a3;}
    if ((maxb > b1) && (minb < b1)) {srednb = b1;}
    if ((maxb > b2) && (minb < b2)) {srednb = b2;}
    if ((maxb > b3) && (minb < b3)) {srednb = b3;}
    cout << (mina * minb + sredna * srednb + maxa * maxb);
 return 0;
}