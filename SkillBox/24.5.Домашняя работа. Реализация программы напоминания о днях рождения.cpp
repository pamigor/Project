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
//cin.get();

#pragma warning(disable : 4996)

int main() {
	std::map<std::string, std::time_t> list;
	bool flag = false;
	
	std::time_t currentDate = time(nullptr);
	std::tm* current = std::localtime(&currentDate);
	std::tm currentLocal = {};
	currentLocal.tm_mon = current->tm_mon;
	currentLocal.tm_mday = current->tm_mday;

	std::time_t rezult = 0;
	std::tm rezultLocal = {};
	rezultLocal.tm_mon = 11;
	rezultLocal.tm_mday = 31;

	do {
		std::string name;
		std::cout << "Enter the name: ";
		std::cin >> name;
		if (name == "end") {
			break;
		}
		std::time_t date = 0;
		std::tm* local = std::localtime(&date);
		std::cout << "Enter the date: ";
		std::cin >> std::get_time(local, "%d.%m.%Y");
		date = std::mktime(local);

		if ((local->tm_mon > currentLocal.tm_mon) || ((local->tm_mon == currentLocal.tm_mon) && (local->tm_mday >= currentLocal.tm_mday))) {
			flag = true;
		}

		if (list.count(name) > 0) {
			std::cout << "This name is already in the calendar!\n";
		}
		else {
			std::pair<std::string, std::time_t> birthdayBoy(name, date);
			list.insert(birthdayBoy);
		}
	} while (true);

	if (flag) {
		std::map<std::string, std::time_t>::iterator it;
		for (it = list.begin(); it != list.end(); it++) {

			std::tm* neares = std::localtime(&it->second);
			std::tm nearesLocal = {};
			nearesLocal.tm_mon = neares->tm_mon;
			nearesLocal.tm_mday = neares->tm_mday;

			if ((nearesLocal.tm_mon > currentLocal.tm_mon) && ((nearesLocal.tm_mon < rezultLocal.tm_mon))) {
				rezultLocal.tm_mon = nearesLocal.tm_mon;
				rezultLocal.tm_mday = nearesLocal.tm_mday;
			}
			else if ((nearesLocal.tm_mon == currentLocal.tm_mon)
				&& (nearesLocal.tm_mday >= currentLocal.tm_mday)
				&& (nearesLocal.tm_mday <= rezultLocal.tm_mday)) {
				rezultLocal.tm_mon = nearesLocal.tm_mon;
				rezultLocal.tm_mday = nearesLocal.tm_mday;
			}
		}
		
		for (it = list.begin(); it != list.end(); it++) {
			std::tm* local = std::localtime(&it->second);
			if ((local->tm_mon == currentLocal.tm_mon) && (local->tm_mday == currentLocal.tm_mday)) {
				std::cout << "\nToday is the birthday of " << it->first << ".";
			}
			else if ((local->tm_mon == rezultLocal.tm_mon) && (local->tm_mday == rezultLocal.tm_mday)) {
				std::cout << "\nThe nearest birthday is for " << it->first << " " << std::put_time(local, "%d %B") << ".";
			}
		}
	}
	else {
		std::cout << "\nUntil the end of the year, no birthday people were found.";
	}
	std::cout << "\n";
}