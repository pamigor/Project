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
	int patientAge, numberPatient = 0, sumAge = 0;
	float averageAgePatient = 0;
	std::vector<int> queuePatient(0);
	do  {
		std::cout << "Enter the patient's age: ";
		std::cin >> patientAge;
		if (patientAge > 0) {
			queuePatient = add(queuePatient, patientAge);
			sumAge += patientAge;
		}
	} while (patientAge > 0);
	std::cout << "\nAge of patients who came in a day\n";
	for (int i = 0; i < queuePatient.size(); i++) {
		std::cout << queuePatient[i] << " ";
	}
	numberPatient = queuePatient.size();
	std::cout << "\nThe number of patients who came in a day - " << numberPatient << "\n";
	averageAgePatient = (float)sumAge / numberPatient;
	std::cout << "The average age of the patients was - " << averageAgePatient << " years.\n";
}