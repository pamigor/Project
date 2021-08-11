#include <algorithm>
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
#include <vector>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

#pragma warning(disable : 4996)


int main() {
	std::map<std::string, std::time_t> list;
	std::time_t start = 0, finish = 0;
	std::string command, title;
	do {
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			if ((command != "begin") && (command != "end") && (command != "status") && (command != "exit")) {
				std::cout << "The command is incorrect!\n";
			}
		} while ((command != "begin") && (command != "end") && (command != "status") && (command != "exit"));

		if (command == "begin") {
			if (list.count(title) > 0) {
				std::map<std::string, std::time_t>::iterator it = list.find(title);
				if (it->second == 0) {
					finish = std::time(nullptr);
					it->second = finish - start;
				}
			}
			std::cout << "Enter the name of the task: ";
			std::cin >> title;
			start = std::time(nullptr);
			std::pair<std::string, std::time_t> titlePair(title, 0);
			list.insert(titlePair);
		}

		if (command == "end") {
			if (list.count(title) > 0) {
				std::map<std::string, std::time_t>::iterator it = list.find(title);
				if (it->second == 0) {
					finish = std::time(nullptr);
					it->second = finish - start;
				}
			}
		}

		if (command == "status") {
			std::map<std::string, std::time_t>::iterator it;
			std::cout << "\nList of completed tasks:\n";
			for (it = list.begin(); it != list.end(); it++) {
				if (it->second > 0) {
					std::tm* gm = std::gmtime(&it->second);
					std::cout << "Task \"" << it->first << "\" execution time - " << std::put_time(gm, "%H:%M:%S") << "\n";
				}
			}
			std::cout << "\n";
			for (it = list.begin(); it != list.end(); it++) {
				if (it->second == 0) {
					std::tm* gm = std::gmtime(&it->second);
					std::cout << "Current task \"" << it->first << "\"\n\n";
				}
			}
		}
		
		if (command == "exit") {
			return 0;
		}
	} while (true);
}
