#include <algorithm>
#include <chrono>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque> 
#include <fstream>
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
#include <thread>
#include <vector>
#include <cwchar>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//#pragma warning(disable : 4996)

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
			compute(read());
		}

		if (command == "save") {
			save(read());
		}

		if (command == "load") {
			load();
		}

		if (command == "input") {
			kbd();
		}

		if (command == "display") {
		    gpu(read());
		}

		if (command == "exit") {
			return 0;
		}
	} while (true);
}
