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
	double result = 0, numberOne, numberTwo;
	char sign;
	std::string str;
	std::stringstream action;
	std::cout << "Enter the numbers and act on them: ";
	std::cin >> str;
	action << str;
	action >> numberOne >> sign >> numberTwo;

	switch (sign) {
	case '+':
		result = numberOne + numberTwo;
		break;
	case '-':
		result = numberOne - numberTwo;
		break;
	case '*':
		result = numberOne * numberTwo;
		break;
	case '/':
		result = numberOne / numberTwo;
		break;
	default:
		std::cout << "The calculator does not perform this action.\n";
	}
	std::cout << "\nResult: " << result << "\n";
}
 