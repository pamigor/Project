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

void add_to_the_directory(std::map<std::string, std::string>& dir, 
	std::map<std::string, std::vector<std::string>>& doubleDir, std::string n, std::string s) {
	
	if (dir.count(n) == 1) {
		std::cerr << "This number is already in the directory!\n";
	}
	else {
		std::pair<std::string, std::string> subscriber(n, s);
		dir.insert(subscriber);
	}
	
	std::map<std::string, std::vector<std::string>>::iterator doubleIt = doubleDir.find(s);
	if (doubleIt != doubleDir.end()) {
		doubleIt->second.push_back(n);

	}
	else {
		std::vector<std::string> doubleN;
		doubleN.push_back(n);
		std::pair<std::string, std::vector<std::string>> doubleSubscriber(s, doubleN);
		doubleDir.insert(doubleSubscriber);
	}
	std::cout << "\n";
}

void surname_search(std::map<std::string, std::string>& dir, std::string n) {
	if (dir.size() == 0) {
		std::cerr << "The directory is empty!\n";
	}
	else if (dir.count(n) == 0) {
		std::cout << "There is no subscriber with this phone number in the directory!\n";
	}
	else {
		std::map<std::string, std::string>::iterator it = dir.find(n);
		std::cout << "Last name of the subscriber with the phone number " << it->first << " - " << it->second << ".\n";
	}
	std::cout << "\n";
}

void number_search(std::map<std::string, std::vector<std::string>>& doubleDir, std::string s) {
	if (doubleDir.size() == 0) {
		std::cerr << "The directory is empty!\n";
	} 
	else if (doubleDir.count(s) == 0) {
		std::cout << "There is no subscriber with such a surname in the directory!\n";
	}
	else {
		std::map<std::string, std::vector<std::string>>::iterator doubleIt = doubleDir.find(s);
		for (int i = 0; i < doubleIt->second.size(); i++) {
			std::cout << "Last name of the subscriber with the phone number " << doubleIt->first << " - " << doubleIt->second[i] << ".\n";
		}
	}
	std::cout << "\n";
}

int main() {
	std::map<std::string, std::string> phoneDirectory;
	std::map<std::string, std::vector<std::string>> surnameNumber;

	std::string request;
	do {
		std::cout << "Exit from the program - \"Exit\". Enter a request: ";
		getline(std::cin, request);
		std::string name, number;
		if ((request[0] >= '1' || request[0] <= '9') && (request.length() == 8)) {
			number = request;
			surname_search(phoneDirectory, number);

		}
		else if ((request[0] >= '1' || request[0] <= '9') && (request.length() > 8)) {
			for (int i = 0; i < request.length(); i++) {
				if (i < 8) {
					number += request[i];
				}
				if (i > 8) {
					name += request[i];
				}
			}
			add_to_the_directory(phoneDirectory, surnameNumber, number, name);
		}
		else if (request == "Exit") {
			return 0;
		} 
		else {
			number_search(surnameNumber, request);
		}
	} while (true);
}