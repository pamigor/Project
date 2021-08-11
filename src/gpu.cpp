#include <iostream>
#include "gpu.h"
#include "ram.h"

void gpu() {
    int* arr = read();
    for (int i = 0; i < 8; i++) {
        std::cout << *(arr + i) << " ";
	}
	std::cout << "\n";
}