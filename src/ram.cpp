#include "ram.h"

int buffer[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

int* read() {
    int mas[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < 8; i++) {
    mas[i] = buffer[i];
    }
    int* m = mas;
    return m;
}

void write(int* mas) {
    for (int i = 0; i < 8; i++) {
    buffer[i] = *(mas + i);
    }
}