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

//using namespace std;

bool checkingNumber(std::string str) {
	int number = 0;
	if ((str.length() > 3) || ((str.length() > 1) && (str[0] == '0'))) {
		return false;
	}
	else {
		number = stoi(str);
		return (number < 256);
	}
}

int main() {
	std::string addressIP, partIPaddress;
	std::cout << "Enter the IP address: ";
	std::cin >> addressIP;
	bool flag = true;
	int counterNumber = 1;

	if (addressIP.length() > 15) {
		flag = false;
	}
	else if ((addressIP[0] == '.') || (addressIP[addressIP.length() - 1] == '.')) {
		flag = false;
	}
	else {
		for (int i = 0; i < addressIP.length(); i++) {
			if ((addressIP[i] < '0' || addressIP[i] > '9') && (addressIP[i] != '.')) {
				flag = false;
				break;
			}
			else if ((i > 2) && (addressIP[i - 1] == '.') && (addressIP[i] == '.')) {
				flag = false;
				break;
			}
			else if (addressIP[i] != '.') {
				partIPaddress += addressIP[i];
				if (checkingNumber(partIPaddress) == false) {
					flag = false;
					break;
				}
			}
			else  {
				partIPaddress.clear();
				counterNumber++;
			}
		}
		if (counterNumber < 4) {
			flag = false;
		}
	}
	std::cout << std::endl << (flag ? "Yes" : "No") << std::endl;
}