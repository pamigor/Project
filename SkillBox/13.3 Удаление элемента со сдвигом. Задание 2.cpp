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

bool check_Array(std::vector<int> &vec, int index) {
	if (index < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	else if (index >= vec.size()) {
		std::cout << "The index is larger than the array size!\n";
		return true;
	}
	else {
		return false;
	}
}

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
	
	std::cout << "\nEnter the number of requests: ";
	int numberRequests;
	std::cin >> numberRequests;
	std::string firstPart, secondPart;
	bool flag = false;
	for (int i = 0; i < numberRequests; i++) {
		do {
			std::cout << "Enter a request: ";
			std::cin >> firstPart >> secondPart;
			int number = stoi(secondPart);
			if (firstPart == "1") {
				queueRobots.resize(queueRobots.size() + 1);
				queueRobots[queueRobots.size() - 1] = number;
				flag = false;
			}
			else if (firstPart == "2") {
				flag = check_Array(queueRobots, number);
				if (flag == false) {
					queueRobots = del_to_position(queueRobots, number);
				}
			}
		} while (flag);
	}
	std::cout << "\n";
	std::cout << "Remaining robots:\n";
	for (int i = 0; i < queueRobots.size(); i++) {
		std::cout << queueRobots[i] << " ";
	}
	std::cout << "\n";
}