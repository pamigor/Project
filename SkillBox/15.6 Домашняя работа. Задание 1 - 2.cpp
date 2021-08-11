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
	
	int maxSum = example[0];
	int sum = 0, minSum = 0, currentValue = 0, beginIndex = 0, endIndex = 0, minIndex = -1;
	for (int i = 0; i < arrayLength; i++) {
		sum += example[i];
		currentValue = sum - minSum;
		if (currentValue > maxSum) {
			maxSum = currentValue;
			beginIndex = minIndex + 1,
			endIndex = i;
		}
		if (sum < minSum) {
			minSum = sum;
			minIndex = i;
		}
	}
	std::cout << beginIndex << " " << endIndex << "\n";
}
