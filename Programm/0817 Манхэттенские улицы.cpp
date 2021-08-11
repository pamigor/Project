#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	long long int av, st, sh, dl;
	cin >> av >> st >> sh >> dl;
	cout << av * sh * dl + st * sh * dl - av * st * sh * sh;
return 0;
}