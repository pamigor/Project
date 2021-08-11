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
	std::cout << "\n";
	int maxSum = 0, beginIndex = 0, endIndex = 0;
	for (int i = 0; i < arrayLength; i++) {
		for (int j = i; j < arrayLength; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += example[k];
			}
			if (sum > maxSum) {
				maxSum = sum;
				beginIndex = i, endIndex = j;
			}
		}
	}
	std::cout << beginIndex << " " << endIndex << "\n";
}
