#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int comp1(const void* a, const void* b)
{return (*(int*)a - *(int*)b);}

int main()
{
	int k1[3], k2[3];
	for (int i = 0; i < 3; i++) cin >> k1[i];
	qsort(k1, 3, sizeof(int), comp1);
		
	for (int i = 0; i < 3; i++) cin >> k2[i];
	qsort(k2, 3, sizeof(int), comp1);

	if (k1[0] == k2[0] && k1[1] == k2[1] && k1[2] == k2[2]) cout << "Boxes are equal";
	else if (k1[0] >= k2[0] && k1[1] >= k2[1] && k1[2] >= k2[2]) cout << "The first box is larger than the second one";
	else if (k1[0] <= k2[0] && k1[1] <= k2[1] && k1[2] <= k2[2]) cout << "The first box is smaller than the second one";
	else cout << "Boxes are incomparable";
return 0;
}