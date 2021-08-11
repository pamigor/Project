#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a1, a2, a3, minim, maxim;
	cin >> a1 >> a2 >> a3;
	if (((a1 > a2) && (a1 > a3)) || ((a1 == a2) && (a1 > a3)))
	{maxim = a1;}
	if (((a2 > a1) && (a2 > a3)) || ((a2 == a3) && (a2 > a1)))
	{maxim = a2;}
	if (((a3 > a1) && (a3 > a2)) || ((a3 == a1) && (a3 > a2)))
	{maxim = a3;}
	if (((a1 < a2) && (a1 < a3)) || ((a1 == a2) && (a1 < a3)))
	{minim = a1;}
	if (((a2 < a1) && (a2 < a3)) || ((a2 == a3) && (a2 < a1)))
	{minim = a2;}
	if (((a3 < a1) && (a3 < a2)) || ((a3 == a1) && (a3 < a2)))
	{minim = a3;}
	if ((a1 == a2) && (a1 == a3))
	{cout << "0";}
	else
	{cout << maxim - minim;}
 return 0;
}