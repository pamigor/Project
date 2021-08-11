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

struct task {
	std::string title;
	std::time_t time;
};

void command_end(std::vector<task>& list, time_t* start) {
	if (list.size() != 0) {
		if (list.back().time == 0) {
			std::time_t finish = std::time(nullptr);
			list.back().time = finish - *start;
		}
	}
}

void command_begin(std::vector<task>& list, time_t* start) {
	command_end(list, start);
	task taskOne;
	taskOne.time = 0;
	std::cout << "Enter the name of the task: ";
	std::cin >> taskOne.title;
	*start = std::time(nullptr);
	list.push_back(taskOne);
}

int main() {
	std::vector<task> list;
	std::time_t start = 0;
	std::string command;
	do {
		do {
			std::cout << "Enter the command: ";
			std::cin >> command;
			if ((command != "begin") && (command != "end") && (command != "status") && (command != "exit")) {
				std::cout << "The command is incorrect!\n";
			}
		} while ((command != "begin") && (command != "end") && (command != "status") && (command != "exit"));

		if (command == "begin") {
			command_begin(list, &start);
		}

		else if (command == "end") {
			command_end(list, &start);
		}

		else if (command == "status") {
			std::cout << "\nList of completed tasks:\n";
			for (int i = 0; i < list.size(); i++) {
				if (list[i].time > 0) {
					std::tm* gm = std::gmtime(&list[i].time);
					std::cout << "Task \"" << list[i].title << "\" execution time - " << std::put_time(gm, "%H:%M:%S") << "\n";
				}
			}
			std::cout << "\n";
			for (int i = 0; i < list.size(); i++) {
				if (list[i].time == 0) {
					std::cout << "Current task \"" << list[i].title << "\"\n\n";
				}
			}
		}
		
		else if (command == "exit") {
			return 0;
		}
	} while (true);
}
