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

std::string encrypt_caesar(std::string str, int pos)
{
	if (pos > 0) {
		for (int i = 0; i < str.length(); i++) {
			if ((str[i] != ' ') && (str[i] >= 'A') && (str[i] <= 'Z') && (str[i] + pos % 26 > 'Z')) {
				str[i] += pos % 26 - 26;
			}
			else if ((str[i] != ' ') && (str[i] >= 'a') && (str[i] <= 'z') && (str[i] + pos % 26 > 'z')) {
				str[i] += pos % 26 - 26;
			}
			else if (str[i] != ' ') {
				str[i] += pos % 26;
			}
		}
	}
	if (pos < 0) {
		for (int i = 0; i < str.length(); i++) {
			if ((str[i] != ' ') && (str[i] >= 'A') && (str[i] <= 'Z') && (str[i] + pos % 26 < 'A')) {
				str[i] += pos % 26 + 26;
			}
			else if ((str[i] != ' ') && (str[i] >= 'a') && (str[i] <= 'z') && (str[i] + pos % 26 < 'a')) {
				str[i] += pos % 26 + 26;
			}
			else if (str[i] != ' ') {
				str[i] += pos % 26;
			}
		}
	}
	return str;
}

std::string decrypt_caesar(std::string str, int pos)
{
	return encrypt_caesar(str, 26 - pos % 26);
}

int main()
{
	std::string cipher;
	std::cout << "Enter the text: ";
	std::getline(std::cin, cipher);
	int shift;
	std::cout << "Enter the code: ";
	std::cin >> shift;
	std::cout << "\nCaesar's cipher: " << encrypt_caesar(cipher, shift) << "\n";
	std::cout << "Caesar's decipher: " << decrypt_caesar(encrypt_caesar(cipher, shift), shift) << "\n";
}