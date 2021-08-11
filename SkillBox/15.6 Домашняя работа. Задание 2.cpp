#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h>
#include <conio.h>

//using namespace std;

int main() {
	int arrayLength;
	std::cout << "Enter the length of the array: ";
	std::cin >> arrayLength;

	std::vector<int> example(arrayLength);
	std::cout << "Enter the " << arrayLength << " elements of the array: ";
	for (int i = 0; i < arrayLength; i++) {
		std::cin >> example[i];
	}

	int result;
	std::cout << "Enter the result: ";
	std::cin >> result;
	std::cout << "\n";

	for (int i = 0; i < arrayLength; i++) {
		for (int j = i + 1; j < arrayLength; j++) {
			if (example[i] + example[j] == result) {
				std::cout << example[i] << " " << example[j] << "\n";
				return 0;
			}
		}
	}
	std::cout << "No numbers satisfying the condition were found.\n";
}
