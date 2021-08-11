#include <algorithm>
#include <chrono>
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
#include <thread>
#include <vector>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//#pragma warning(disable : 4996)

#include "operating.h"
#include "coordinates.h"

int main() {
    point beginPathScalpel, endPathScalpel, beginPathSuture, endPathSuture, clampingLocation;
    std::string command;
    bool flag = true;
    do {
        do {
            std::cout << "Enter the command: ";
            std::cin >> command;
            if (command != "scalpel" && command != "hemostat" && command != "tweezers" && command != "suture") {
                std::cerr << "The command is not correct!\n";
            }
        } while (command != "scalpel" && command != "hemostat" && command != "tweezers" && command != "suture");

        if (command == "scalpel") {
            input_coordinates(beginPathScalpel, 1);
            input_coordinates(endPathScalpel, 2);
            scalpel(beginPathScalpel, endPathScalpel);
            flag = false;
        }
        else if (command == "hemostat") {
            if (flag) {
                std::cout << "First you need to make an incision!\n";
            }
            else {
                input_coordinates(clampingLocation, 1);
                hemostat(clampingLocation);
            }
        }
        else if (command == "tweezers") {
            if (flag) {
                std::cout << "First you need to make an incision!\n";
            }
            else {
                input_coordinates(clampingLocation, 1);
                tweezers(clampingLocation);
            }
        }
        else if (command == "suture") {
            if (flag) {
                std::cout << "First you need to make an incision!\n";
            }
            input_coordinates(beginPathSuture, 1);
            input_coordinates(endPathSuture, 2);
            if (comparison_coordinates(beginPathScalpel, endPathScalpel, beginPathSuture, endPathSuture)) {
                suture(beginPathSuture, endPathSuture);
                return 0;
            }
            else {
                std::cout << "The seam did not match the incision!\n";
            }
        }
    } while (true);
}
