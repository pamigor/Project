#include <algorithm>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <deque>        
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

//using namespace std;
//setlocale(LC_ALL, "RUS");

int main() {
	double result;
	std::string partNumber, number;
	std::cout << "Enter the integer part of the number: ";
	std::cin >> partNumber;
	number += partNumber;
	number += ".";
	std::cout << "Enter the fractional part of the number: ";
	std::cin >> partNumber;
	number += partNumber;
	result = std::stod(number);
	std::cout << "\nResult: " << result << "\n";
}
 