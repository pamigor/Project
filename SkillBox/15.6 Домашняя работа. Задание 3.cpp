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

int main() {
	int number = 0;
	std::vector<int> example;
	std::cout << "Enter the number: ";
	std::cin >> number;

	while (number != -2) {
		if (number == -1) {
			if (example.size() < 5) {
				std::cout << "\nYou have entered an insufficient number of numbers. Continue typing.\n\n";
			}
			else {
				sorting_array(example);
				std::cout << "\n";
				std::cout << "Sorted array: ";
				for (int i = 0; i < example.size(); i++) {
					std::cout << example[i] << " ";
				}
				std::cout << "The fifth highest number among those entered: " << example[4] << "\n\n";
			}
		}
		else {
			example.push_back(number);
		}
		std::cout << "Enter the number: ";
		std::cin >> number;
	}
	std::cout << "\n";
}
