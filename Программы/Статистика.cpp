#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	short int nechet=0,chet=0,n, data[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{cin >> data[i];}
	for(int i=0;i<n;i++)
	{if(data[i] % 2 != 0)
	{cout << data[i] << ' ';
	nechet++;}}
	cout << endl;
	for (int i = 0; i < n; i++)
	{if (data[i] % 2 == 0)
	{cout << data[i] << ' ';
	chet++;}}
	cout << endl;
	if(nechet>chet)
	{cout << "NO";}
	else
	{cout << "YES";}
	return 0;
} 