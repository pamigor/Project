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

void sorting_array(std::vector<int>& v) {
	for (int i = v.size() - 1; i >= 0; i--) {
		int maxInd = 0;
		for (int j = 0; j <= i; j++) {
			if (v[j] > v[maxInd]) {
				maxInd = j;
			}
		}
		int buffer = v[i];
		v[i] = v[maxInd];
		v[maxInd] = buffer;
	}
}

void sorting_array_module(std::vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size() - 1 - i; j++) {
			if (abs(v[j]) > abs(v[j+1])) {
				int buffer = v[j];
				v[j] = v[j + 1];
				v[j + 1] = buffer;
			}
		}
	}
}

int main() {
	int numberNumber;
	std::cout << "Enter the number of array elements: ";
	std::cin >> numberNumber;
	std::vector<int> example(numberNumber);

	for (int i = 0; i < numberNumber; i++) {
		std::cout << "Enter the number: ";
		std::cin >> example[i];
	}
	std::cout << "\n";

	sorting_array(example);
	std::cout << "Sorted array: ";
	for (int i = 0; i < numberNumber; i++) {
		std::cout << example[i] << " ";
	}
	std::cout << "\n";

	sorting_array_module(example);
	std::cout << "Sorted array by module: ";
	for (int i = 0; i < numberNumber; i++) {
		std::cout << example[i] << " ";
	}
	std::cout << "\n";
}
