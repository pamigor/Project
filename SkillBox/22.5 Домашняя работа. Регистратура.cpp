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

int main() {
	std::string command;
	std::map<std::string, int> queue;
	std::map<std::string, int>::iterator it;
	do {
		std::cout << "Enter the command: ";
		std::cin >> command;
		if (command == "Exit") {
			return 0;
		}
		else if (command == "Next") {
			if (queue.size() == 0) {
				std::cerr << "There are no visitors in the queue!\n";
			}
			else {
				it = queue.begin();
				std::cout << it->first << "\n";
				if (it->second > 1) {
					it->second--;
				}
				else {
					queue.erase(it);
				}
			}
		}
		else {
			if (queue.count(command) == 0) {
				std::pair<std::string, int> visitor(command, 1);
				queue.insert(visitor);
			}
			else {
				it = queue.find(command);
				it->second++;
			}
		}
	} while (true);
}