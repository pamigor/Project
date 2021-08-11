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
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

int drum(std::vector<int>& vec, int n, int& cS) {
	for (int i = 0; i < vec.size(); i++) {
		if ((cS + n % 13) % 13 == vec[i]) {
			n++;
			drum(vec, n, cS);
			return 0;
		}
	}
	cS = (cS + n % 13) % 13;
	std::cout << "Sector " << cS + 1 << " on the drum.\n";
	vec.push_back(cS);
	return 0;
}

int main()
{
	std::ifstream text;
	std::vector<int> number;
	int currentSector = 0, offset, expertsPoints = 0, audiencePoints = 0;

	do {
		system("cls");
		std::cout << "Current game score: TV VIEWERWS " << audiencePoints << " - EXPERTS " << expertsPoints << "\n\n";
		std::cout << "Enter the drum offset: ";
		std::cin >> offset;
		drum(number, offset, currentSector);
		
		text.open("C:\\C++\\WorkingFiles\\game_questions.txt");
		if (!text.is_open()) {
			std::cout << "The file was not found. Check the file path and try again.\n";
			return 0;
		}

		for (int i = 0; i < 13; i++) {
			std::string questions;
			getline(text, questions);
			if (i == currentSector) {
				std::cout << "\nViewers ' question:\n" << questions << "\n";
				break;
			}
		}
		text.close();

		std::string expertsResponse;
		std::cout << "\nEnter the answer to the question: ";
		std::cin >> expertsResponse;
		
		text.open("C:\\C++\\WorkingFiles\\game_answers.txt");
		if (!text.is_open()) {
			std::cout << "The file was not found. Check the file path and try again.\n";
			return 0;
		}
		
		for (int i = 0; i < 13; i++) {
			std::string answers;
			text >> answers;
			if (i == currentSector && expertsResponse == answers) {
				std::cout << "The answer is correct.\n\n";
				std::cout << "Press enter to continue.\n";
				system("pause");
				expertsPoints++;
				break;
			}
			if (i == 12) {
				std::cout << "The answer is not correct.\n\n";
				std::cout << "Press enter to continue.\n";
				system("pause");
				audiencePoints++;
			}
		}
		text.close();
	} while (expertsPoints < 6 && audiencePoints < 6);
	
	system("cls");
	if (expertsPoints == 6) {
		std::cout << "Current game score: TV VIEWERWS " << audiencePoints << " - EXPERTS " << expertsPoints << "\n";
		std::cout << "The victory was won by a team of experts!\n";
	}
	else {
		std::cout << "Current game score: TV VIEWERWS " << audiencePoints << " - EXPERTS " << expertsPoints << "\n";
		std::cout << "The victory was won by the team of viewers!\n";
	}
}