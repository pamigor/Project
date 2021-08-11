#include <fstream>
#include <iostream>
#include <string>

#include "disk.h"
#include "cpu.h"
#include "kbd.h"
#include "gpu.h"
#include "ram.h"


int main() {
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			if (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit") {
				std::cerr << "The command is not correct!\n";
			}
		} while (command != "sum" && command != "save" && command != "load" && command != "input" && command != "display" && command != "exit");
		
		if (command == "sum") {
			compute();
		}

		if (command == "save") {
			save();
		}

		if (command == "load") {
			load();
		}

		if (command == "input") {
			kbd();
		}

		if (command == "display") {
		    gpu();
		}

		if (command == "exit") {
			return 0;
		}
	} while (true);
}
