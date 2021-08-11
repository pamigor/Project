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

std::vector<int> del_to_position(std::vector<int> vec, int position) {
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
	int numberRobots, totalNumberRobots;
	std::vector<int> queueRobots;

	std::cout << "Enter the total number of robots: ";
	std::cin >> totalNumberRobots;

	for (int i = 0; i < totalNumberRobots; i++) {
		std::cout << "Enter the robot number: ";
		std::cin >> numberRobots;
		queueRobots.resize(queueRobots.size() + 1);
		queueRobots[queueRobots.size() - 1] = numberRobots;
	} 
	
	std::cout << "\nEnter the number of robots sold: ";
	std::cin >> totalNumberRobots;

	for (int i = 0; i < totalNumberRobots; i++) {
		std::cout << "Enter the location of the sold robot: ";
		std::cin >> numberRobots;
		queueRobots = del_to_position(queueRobots, numberRobots);

		std::cout << "Remaining robots:\n";
		for (int i = 0; i < queueRobots.size(); i++) {
			std::cout << queueRobots[i] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}