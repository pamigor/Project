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
	int number;
	std::vector<int> database;
	std::vector<int>::iterator it;
	//it = database.begin();

	do {
		std::cout << "Enter number: ";
		std::cin >> number;
		database.push_back(number);
		if (database.size() == 20) {
			database.erase(database.begin());
		}
	} while (number != -1);
	std::cout << "\n";

	std::cout << "Database:\n";
	if (database.empty()) {
		std::cout << "NULL";
	}
	else {
		for (it = database.begin(); it != database.end(); it++) {
			std::cout << *it << " ";
		}
	}
	std::cout << "\n";
}