//#include <algorithm>
#include <chrono>
//#include <climits>
//#include <cmath>
//#include <conio.h>
//#include <cstdio>
//#include <cstdlib>
#include <ctime>
//#include <deque> 
//#include <dos.h>
//#include <fstream>
#include <iomanip>
#include <iostream>
//#include <iterator>
//#include <locale.h>
//#include <map>
//#include <math.h>
//#include <set>
//#include <stdlib.h>
//#include <stdio.h>
//#include <sstream>
//#include <string>
//#include <vector>
#include <thread>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//cin.get();

#pragma warning(disable : 4996)

int main() {
	std::time_t timer = 0;
	std::tm* local = std::localtime(&timer);
	std::cout << "Set the timer time: ";
	std::cin >> std::get_time(local, "%M:%S");
	int sec = (local->tm_min * 60) + local->tm_sec;

	for (int i = 0; i < sec; i++) {
		system("cls");
		std::cout << "Left " << std::put_time(local, "%M:%S");
		std::this_thread::sleep_for(std::chrono::seconds(1));
		if (local->tm_sec > 0) {
			local->tm_sec--;
		}
		else if ((local->tm_sec == 0) && (local->tm_min > 0)) {
			local->tm_min--;
			local->tm_sec = 59;
		}
	}
	system("cls");
	std::cout << "DING! DING! DING!\n";
}