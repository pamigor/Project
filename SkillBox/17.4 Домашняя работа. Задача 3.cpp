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

int lengthMas(char* x) {
	int i = 0;
	while (*(x + i) != '\0') {
		i++;
	}
	return i;
}

bool comparison(char* a, char* b) {
	bool flag = false;
	int lengthA = lengthMas(a);
	int lengthB = lengthMas(b);
	if (lengthA < lengthB) {
		flag = false;
	}
	else {
		for (int i = 0; i < (lengthA - lengthB + 1); i++) {
			int counter = 0;
			for (int j = 0; j < lengthB; j++) {
				if (*(a + j + i) != *(b + j)) {
					break;
				}
				else {
					counter++;
				}
			}
			if (counter == lengthB) {
				flag = true;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	char base[] = "Hello, world!";
	char subStringOne[] = "wor";
	char subStringTwo[] = "banana";

	std::cout << comparison(base, subStringOne) << " " << comparison(base, subStringTwo) << "\n";
}