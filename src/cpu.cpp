#include <iostream>
#include "cpu.h"
#include "ram.h"

void compute() {
    int sum = 0;
    int* mas = read();
	for (int i = 0; i < 8; i++) {
	    sum += *(mas + i);
	}
	std::cout << "The sum of the numbers is equal to " << sum << "\n";
}