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

bool checkingCorrectnessMail(std::string part, std::string sample, int lengthString) {
	int lengthPart = part.length();
	if (lengthPart < 1 || lengthPart > lengthString) {
		return false;
	}
	else if ((part[0] == '.') || (part[lengthPart - 1] == '.')) {
		return false;
	}
	else {
		for (int i = 0; i < lengthPart; i++) {
			if (((part[i] < 'A' || part[i] > 'Z') &&
				(part[i] < 'a' || part[i] > 'z')) &&
				(sample.find(part[i]) == -1)) {
				return false;
			}
			else if ((i > 2)  && (part[i - 1] == '.') && (part[i] == '.')) {
				return false;
			}
		}
		return true;
	}
}


int main() {
	std::string mail;
	std::string	sampleFirstPart = ".-!#$%&'*+-/=?^_`{|}~";
	std::string sampleSecondPart = ".-";
	bool flag = true;
	std::cout << "Enter email addresses: ";
	std::cin >> mail;
	
	if (mail.find("@") == -1) {
		flag = false;
	}
	else {
		std::string firstPartMail = mail.substr(0, mail.find("@"));
		flag = checkingCorrectnessMail(firstPartMail, sampleFirstPart, 64);
		
		if (flag) {
			std::string secondPartMail = mail.substr(mail.find("@") + 1);
			flag = checkingCorrectnessMail(secondPartMail, sampleSecondPart, 63);
		}
	}
	std::cout << std::endl << (flag ? "Yes" : "No") << std::endl;
}