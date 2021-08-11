#include <iostream>
#include "gpu.h"
#include "ram.h"

void gpu(int* mas) {
    for (int i = 0; i < 8; i++) {
        std::cout << *(mas + i) << " ";
	}
	std::cout << "\n";
}