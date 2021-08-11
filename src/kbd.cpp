#include <iostream>
#include "kbd.h"
#include "ram.h"

void kbd() {
    int mas[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int* m = mas;
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter a number: ";
        std::cin >> mas[i];
	}
    write(m);
}