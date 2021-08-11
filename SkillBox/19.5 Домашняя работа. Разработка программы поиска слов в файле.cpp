#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
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

int main()
{
	std::ifstream text;
	text.open("C:\\C++\\ОП\\SkillBox\\Working files\\words.txt");
	if (!text.is_open()) {
		std::cout << "The file was not found. Check the file path and try again.\n";
	}

	std::string pattern;
	std::cout << "Enter a substring to search for: ";
	std::cin >> pattern;
	int counter = 0;
	while (!text.eof()) {
		std::string substring;
		text >> substring;
		if (substring == pattern) {
			counter++;
		}
	}
	std::cout << "\nThe word occurs " << counter << " times in the specified file.\n";
	text.close();
}