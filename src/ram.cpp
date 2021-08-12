#include "ram.h"

int buffer[8];
int mas[8];

int* read() {
    for (int i = 0; i < 8; i++) {
    mas[i] = buffer[i];
    }
    int* m = mas;
    return m;
}

void write(int* m) {
    for (int i = 0; i < 8; i++) {
    buffer[i] = *(m + i);
    }
}