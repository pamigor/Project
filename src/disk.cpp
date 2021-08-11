#include <fstream>
#include <iostream>
#include "disk.h"
#include "ram.h"

void save(int* mas) {
	std::ofstream file;
	file.open("C:\\C++\\WorkingFiles\\data.txt"/*, std::ios::app*/);
	if (!file.is_open()) {
		std::cout << "The file was not found. Check the file path and try again.\n";
		return;
	}
	for (int i = 0; i < 8; i++) {
		file << mas[i] << " ";
	}
	file.close();
}

void load() {
	std::ifstream file;
	int mas[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int* m = mas;
	file.open("C:\\C++\\WorkingFiles\\data.txt");
	if (!file.is_open()) {
		std::cout << "The file was not found. Check the file path and try again.\n";
		return;
	}
	for (int i = 0; i < 8; i++) {
		file >> mas[i];
	}
	file.close();
	write(m);
}