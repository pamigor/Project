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
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

enum setСommands {
    ADD = 1,
    SUBTRACT,
    SCALE,
    LENGTH,
    NORMALIZE
};

struct matVec { 
	float x, y;
};

void add(matVec& vec1, matVec& vec2) {
	vec2.x = vec1.x + vec2.x;
	vec2.y = vec1.y + vec2.y;
	std::cout << "The result of adding vectors is a vector with coordinates {" << vec2.x << ", " << vec2.y << "}\n";
}

void subtract(matVec& vec1, matVec& vec2) {
    vec2.x = vec1.x - vec2.x;
    vec2.y = vec1.y - vec2.y;
    std::cout << "The result of subtracting vectors is a vector with coordinates {" << vec2.x << ", " << vec2.y << "}\n";
}

void scale(matVec& vec, float &mult) {
    vec.x *= mult;
    vec.y *= mult;
    std::cout << "The result of multiplying a vector by a scalar vector with coordinates {" << vec.x << ", " << vec.y << "}\n";
}

void length(matVec& vec) {
    std::cout << "Vector length " << sqrt(vec.x * vec.x + vec.y * vec.y) << "\n";
}

void normalize(matVec& vec) {
    int length = sqrt(vec.x * vec.x + vec.y * vec.y);
    vec.x /= length;
    vec.y /= length;
    std::cout << "The result of normalization of the vector is a vector with coordinates {" << vec.x << ", " << vec.y << "}\n";
}

int main()
{
    matVec vecOne, vecTwo;
    int command;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    do {
		std::cout << "ADD - 1\n";
        std::cout << "SUBTRACT - 2\n";
        std::cout << "SCALE - 3\n";
        std::cout << "LENGTH - 4\n";
        std::cout << "NORMALIZE - 5\n";
        std::cout << "Select the appropriate command: ";
        std::cin >> command;
        std::cout << "\n";
		if (command < 1 || command > 5) {
			std::cerr << "Wrong command!\n";
		}
	} while (command < 1 || command > 5);

    switch (command) {
    case ADD:
        std::cout << "Enter the coordinates of the first vector: ";
        std::cin >> vecOne.x >> vecOne.y;
        std::cout << "Enter the coordinates of the second vector: ";
        std::cin >> vecTwo.x >> vecTwo.y;
        add(vecOne, vecTwo);
        break;
    case SUBTRACT:
        std::cout << "Enter the coordinates of the first vector: ";
        std::cin >> vecOne.x >> vecOne.y;
        std::cout << "Enter the coordinates of the second vector: ";
        std::cin >> vecTwo.x >> vecTwo.y;
        subtract(vecOne, vecTwo);
        break;
    case SCALE:
        float multiplier;
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> vecOne.x >> vecOne.y;
        std::cout << "Enter the scalar: ";
        std::cin >> multiplier;
        scale(vecOne, multiplier);
        break;
    case LENGTH:
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> vecOne.x >> vecOne.y;
        length(vecOne);
        break;
    case NORMALIZE:
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> vecOne.x >> vecOne.y;
        normalize(vecOne);
    }
}