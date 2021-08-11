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

	do {
		std::cout << "Enter number of robots: ";
		std::cin >> numberRobots;
		while (queueRobots.size() != 0 && queueRobots[queueRobots.size() - 1] < numberRobots) {
			queueRobots.pop_back();
		}
		queueRobots.push_back(numberRobots);
	} while (numberRobots != -1);
	
	std::cout << "\n";
	std::cout << "Remaining robots:\n";
	for (int i = 0; i < queueRobots.size(); i++) {
		std::cout << queueRobots[i] << " ";
	}
	std::cout << "\n";
}