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

std::vector<int> add(std::vector<int> vec, int plus) {
	std::vector<int> newVec(vec.size() + 1);
	for (int i = 0; i < vec.size(); i++) {
		newVec[i] = vec[i];
	}
	newVec[vec.size()] = plus;
	return newVec;
}

std::vector<int> add_to_position(std::vector<int> vec, int plus, int position) {
	std::vector<int> newVec(vec.size() + 1);
	for (int i = 0; i < position; i++) {
		newVec[i] = vec[i];
	}
	newVec[position] = plus;
	for (int i = position; i < vec.size(); i++) {
		newVec[i + 1] = vec[i];
	}
	return newVec;
}

int main()
{
	int numberRobots, placeQueue;
	std::vector<int> queueRobots(0);
	do  {
		std::cout << "Enter the robot number: ";
		std::cin >> numberRobots;
		if (numberRobots != -1) {
			if (queueRobots.size() < 10) {
				queueRobots = add(queueRobots, numberRobots);
			}
			else {
				std::cout << "Enter a place in the queue: ";
				std::cin >> placeQueue;
				queueRobots = add_to_position(queueRobots, numberRobots, placeQueue);
			}
		}
	} while (numberRobots != -1);
	
	std::cout << "\nThe order of arrival of robots:\n";
	for (int i = 0; i < queueRobots.size(); i++) {
		std::cout << queueRobots[i] << " ";
	}
	std::cout << "\n";
}