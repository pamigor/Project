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
	int numberRobots;
	std::vector<int> queueRobots;
	bool flag = false;
	do {
		std::cout << "Enter the robot number: ";
		std::cin >> numberRobots;
		queueRobots.push_back(numberRobots);
		if (queueRobots.capacity() - queueRobots.size() == 2) {
			std::cout << "\nThere are only two empty seats left in the room!\n\n";
		}
	} while (numberRobots != -1);
	
	std::cout << "\n";
	std::cout << "Remaining robots:\n";
	for (int i = 0; i < queueRobots.size(); i++) {
		std::cout << queueRobots[i] << " ";
	}
	std::cout << "\n";
}