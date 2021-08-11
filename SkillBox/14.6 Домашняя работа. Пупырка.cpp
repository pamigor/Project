#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <set>
#include <deque>        
#include <iterator>
#include <vector>
#include <map>
#include <locale.h>
#include <conio.h>

//using namespace std;

bool creatingPupyrka(bool m[][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			m[i][j] = true;
		}
	}
	return m;
}

bool viewPupyrka(bool m[][12]) {
	bool flag = false;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			std::cout << (m[i][j] ? "O " : "X ");
			if (m[i][j]) {
				flag = true;
			}
		}
		std::cout << "\n";
	}
	return flag;
}

bool check_Array(int x1, int y1, int x2, int y2) {
	if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0) {
		std::cout << "Index less than zero!\n";
		return true;
	}
	else if (x1 > 11 || y1 > 11 || x2 > 11 || y2 > 11) {
		std::cout << "The index is larger than the array size!\n";
		return true;
	}
	return false;
}

bool bubblePopping(bool m[][12], int x1, int y1, int x2, int y2) {
	for (int i = x1; i <= x2; i++) {
		for (int j = y1; j <= y2; j++) {
			if (m[i][j]) {
				m[i][j] = false;
				std::cout << "Pop! ";
			}
		}
	}
	return m;
}

int main() {
	bool pupyrka[12][12], end = true;
	int beginX, beginY, endX, endY;
	creatingPupyrka(pupyrka);
	end = viewPupyrka(pupyrka);
	
	while (end) {
		do {
			std::cout << "\nEnter the coordinates of the beginning of the region: ";
			std::cin >> beginX >> beginY;
			std::cout << "Enter the coordinates of the end of the region: ";
			std::cin >> endX >> endY;
		} while (check_Array(beginX, beginY, endX, endY));
		std::cout << "\n";
		bubblePopping(pupyrka, beginX, beginY, endX, endY);
		std::cout << "\n\n";
		end = viewPupyrka(pupyrka);
	}
	std::cout << "\n";
}
