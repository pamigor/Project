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
	int fitnessClub[2], shop[1], cottage[3], apartmentBuilding[15], skyscraper[50];
	float numberFloors = (float) (sizeof(fitnessClub) / sizeof(int) + sizeof(shop) / sizeof(int) + sizeof(cottage) / sizeof(int)
		+ sizeof(apartmentBuilding) / sizeof(int) + sizeof(skyscraper) / sizeof(int)) / 5;
	std::cout << "\nAverage number of floors in a block " << numberFloors << "\n";
}