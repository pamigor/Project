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

void sorting_array_module(std::vector<int>& v, std::vector<int>& v1) {
	int j = 0;
	while (j < v.size() && v[j] < 0) {
		++j;
	}
	int i = j--;
	while (j >= 0 || i < v.size()) {
		int res = 0;
		if (j >= 0 && i < v.size()) {
			if (v[i] > -v[j]) {
				res = v[j--];
			}
			else {
				res = v[i++];
			}
		}
		else if (j >= 0) {
			res = v[j--];
		}
		else {
			res = v[i++];
		}
		v1.push_back(res);
	}
}

int main() {
	int numberNumber;
	std::cout << "Enter the number of array elements: ";
	std::cin >> numberNumber;
	std::vector<int> example(numberNumber);
	std::vector<int> exampleSort(0);

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

	sorting_array_module(example, exampleSort);
	std::cout << "Sorted array by module: ";
	for (int i = 0; i < numberNumber; i++) {
		std::cout << exampleSort[i] << " ";
	}
	std::cout << "\n";
}
