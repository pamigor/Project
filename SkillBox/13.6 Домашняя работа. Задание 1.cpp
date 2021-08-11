#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h> 

//using namespace std;

std::vector<int> del_to_position(std::vector<int> &vec, int position) {
	std::vector<int> newVec(vec.size() - 1);
	for (int i = 0; i < position; i++) {
		newVec[i] = vec[i];
	}
	for (int i = position + 1; i < vec.size(); i++) {
		newVec[i - 1] = vec[i];
	}
	return newVec;
}

int main()
{
	int numberNumber, number;
	std::vector<int> numberStorage;
		std::cout << "Enter the total number of numbers: ";
		std::cin >> numberNumber;
		std::cout << "\n";
		for (int i = 0; i < numberNumber; i++) {
			std::cout << "Enter a number: ";
			std::cin >> number;
			numberStorage.push_back(number);
		} 
	std::cout << "\n";
	std::cout << "Storage contents:\n";
	for (int i = 0; i < numberStorage.size(); i++) {
		std::cout << numberStorage[i] << " ";
	}
	std::cout << "\n\nSelect the number you want to remove: ";
	std::cin >> number;
	int i = 0;
	bool flag = true;
	while (i < numberStorage.size()) {
		if (numberStorage[i] == number) {
			numberStorage = del_to_position(numberStorage, i);
			flag = false;
		}
		else {
			i++;
		}
	}
	std::cout << "\n";
	if (flag) {
		std::cout << "No such numbers were found in the storage.\n\n";
	}
	std::cout << "Storage contents:\n";
	if (numberStorage.empty()) {
		std::cout << "NULL";
	}
	else {
		for (int i = 0; i < numberStorage.size(); i++) {
			std::cout << numberStorage[i] << " ";
		}
	}
	std::cout << "\n";
}