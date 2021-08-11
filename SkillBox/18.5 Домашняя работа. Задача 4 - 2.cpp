#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <deque>        
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");

void even_numbers(long long int n, int& a) {
	if (n > 0) {
		if (n % 2 == 0) {
			a++;
		}
	even_numbers(n / 10, a);
	}
}

int main()
{
	long long int n;
	int ans = 0;
	std::cout << "Enter a number: ";
	std::cin >> n;
	even_numbers(n, ans);
	std::cout << "The number of even digits in the number: " << ans << "\n";
}