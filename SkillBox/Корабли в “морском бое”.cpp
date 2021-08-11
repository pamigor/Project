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

int main() {
	bool tinyShip[] = { true };
	bool smallShip[] = { true, true};
	bool mediumShip[] = { true, true, true };
	bool bigShip[] = { true, true, true, true };

	std::cout << tinyShip[0] << " - array size " << sizeof(tinyShip) << ";\n\n";
	
	for (int i = 0; i < sizeof(smallShip); i++) {
		std::cout << smallShip[i];
	}
	std::cout << " - array size " << sizeof(smallShip) << ";\n\n";
	
	for (int i = 0; i < sizeof(mediumShip); i++) {
		std::cout << mediumShip[i];
	}
	std::cout << " - array size " << sizeof(mediumShip) << ";\n\n";
	
	for (int i = 0; i < sizeof(bigShip); i++) {
		std::cout << bigShip[i];
	}
	std::cout << " - array size " << sizeof(bigShip) << ";\n";
}