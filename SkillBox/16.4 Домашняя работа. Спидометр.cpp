#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <deque>        
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>

//using namespace std;
//setlocale(LC_ALL, "RUS");

bool check(float value, float sample, float deviation) {
	return ((value >= sample - deviation) && (value <= sample + deviation));
}

int main() {
	float speed = .0f, speedChange;
	std::string speedGraph = "Speed change graph: 0.0km/h";
	do {
		do {
			std::cout << "Enter the speed change: ";
			std::cin >> speedChange;
			if (speed + speedChange > 150.0f) {
				std::cout << "\nExceeding the maximum speed limit!\n\n";
			}
			else if (speed + speedChange < .0f) {
				std::cout << "\nThe speed value cannot be negative.!\n\n";
			}
		} while ((speed + speedChange > 150.0f) || (speed + speedChange < .0f));
		speed += speedChange;
		char buf[100];
		std::sprintf(buf, " %.1fkm/h", speed);
		speedGraph += buf;
	} while (!check(speed, .0f, 0.01f));
	std::cout << "\n" << speedGraph << "\n";
}
 