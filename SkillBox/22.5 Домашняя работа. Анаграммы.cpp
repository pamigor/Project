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

bool anagrams(std::string s1, std::string s2) {
	if (s1.length() != s2.length()) {
		return false;
	}
	std::map<char, int> str1;
	std::map<char, int> str2;
	for (int i = 0; i < s1.length(); ++i) {
		if (str1.count(s1[i]) == 0) {
			str1.insert(std::pair<char, int>(s1[i], 1));
		}
		else {
			std::map<char, int>::iterator it1;
			it1 = str1.find(s1[i]);
			it1->second++;
		}
		if (str2.count(s2[i]) == 0) {
			str2.insert(std::pair<char, int>(s2[i], 1));
		}
		else {
			std::map<char, int>::iterator it2;
			it2 = str2.find(s2[i]);
			it2->second++;
		}
	}
	return (str1 == str2);
}

int main() {
	std::string str1, str2;
	std::cout << "Enter the first line: ";
	std::cin >> str1;
	std::cout << "Enter the second line: ";
	std::cin >> str2;
	if (anagrams(str1, str2)) {
		std::cout << "\nThe entered strings are anagrams.\n";
	}
	else {
		std::cout << "\nThe entered strings are not anagrams.\n";
	}
}