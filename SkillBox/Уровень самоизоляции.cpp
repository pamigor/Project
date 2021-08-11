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
	int totalNumberResidents, totalNumberTenantsFloors = 0, numberResidentsPerFloor[5];
	float levelSelfisolation = 0;
	std::cout << "Enter the total number of tenants in the house: ";
	std::cin >> totalNumberResidents;
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter the number of tenants per " << i + 1 << " floor: ";
		std::cin >> numberResidentsPerFloor[i];
		totalNumberTenantsFloors += numberResidentsPerFloor[i];
	}
	levelSelfisolation = (float)totalNumberTenantsFloors / (float) totalNumberResidents * 100;
	std::cout << "\nGeneral level of self-isolation in the house " << levelSelfisolation << "%\n";
}