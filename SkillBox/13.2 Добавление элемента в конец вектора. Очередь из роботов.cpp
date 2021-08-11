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

int main()
{
	int numberRobots;
	std::vector<int> queueRobots(0);
	do  {
		std::cout << "Enter the robot number: ";
		std::cin >> numberRobots;
		queueRobots = add(queueRobots, numberRobots);
	} while (numberRobots != -1);
	
	std::cout << "\nThe order of arrival of robots:\n";
	for (int i = 0; i < queueRobots.size(); i++) {
		std::cout << queueRobots[i] << " ";
	}
}