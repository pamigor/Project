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

	std::vector<int>::iterator it = numberStorage.begin();
	bool flag = true;
	while (it != numberStorage.end()) {
		if (*it == number) {
			numberStorage.erase(it);
			flag = false;
 			it = numberStorage.begin();
		}
		else {
			it++;
		}		
	}
	std::cout << "\n";
	if (flag) {
		std::cout << "No such numbers were found in the storage.\n";
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