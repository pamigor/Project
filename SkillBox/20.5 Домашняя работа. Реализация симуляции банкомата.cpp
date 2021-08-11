#include <algorithm>
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
#include <vector>
//#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

int main()
{
	std::srand(std::time(nullptr));
	std::ifstream cashMachine;
	std::ofstream cashMachineNew;
	char option;
	int atm[1000] = {0};
	do {
		std::cout << "Select the operation: filling the ATM + , withdrawing money - : ";
		std::cin >> option;
		if ((option != '+') && (option != '-')) {
			std::cout << "You entered an incorrect value!\n";
		}
	} while ((option != '+') && (option != '-'));
	
	if (option == '+') {
		if (!cashMachineNew.is_open()) {
			cashMachine.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
			cashMachine.read((char*)&atm, sizeof(atm));
			cashMachine.close();
		}
		cashMachineNew.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
		if (!cashMachineNew.is_open()) {
			std::cerr << "The file was not found. Check the file path and try again.\n";
			return 0;
		}
		for (int i = 0; i < 1000; i++) {
			int bill = 0;
			while (bill != 100 && bill != 200 && bill != 500 && bill != 1000 && bill != 2000 && bill != 5000) {
				bill = rand() % 4901 + 100;
			}
			if (atm[i] == 0) {
				atm[i] = bill;
			}
		}
		cashMachineNew.write((char*)&atm, sizeof(atm));
		cashMachineNew.close();
	}
	else if (option == '-') {
		int kol5000 = 0, kol2000 = 0, kol1000 = 0, kol500 = 0, kol200 = 0, kol100 = 0, sumAtm = 0;
		int number5000 = 0, number2000 = 0, number1000 = 0, number500 = 0, number200 = 0, number100 = 0;
		int sum;
		do {
			std::cout << "Specify the amount that you want to withdraw with an accuracy of 100 rubles: ";
			std::cin >> sum;
			if (sum % 100 != 0) {
				std::cout << "Attention! The amount must be a multiple of 100!\n";
			}
		} while (sum % 100 != 0);

		cashMachine.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
		cashMachine.read((char*)&atm, sizeof(atm));
		if (!cashMachine.is_open()) {
			cashMachineNew.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
			cashMachineNew.write((char*)&atm, sizeof(atm));
			cashMachineNew.close();
			cashMachine.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
			cashMachine.read((char*)&atm, sizeof(atm));
		}
		if (!cashMachine.is_open()) {
			std::cerr << "The file was not found. Check the file path and try again.\n";
			return 0;
		}

		for (int i = 0; i < 1000; i++) {
			sumAtm += atm[i];
			if (atm[i] == 5000) {
				kol5000++;
			}
			else if (atm[i] == 2000) {
				kol2000++;
			}
			else if (atm[i] == 1000) {
				kol1000++;
			}
			else if (atm[i] == 500) {
				kol500++;
			}
			else if (atm[i] == 200) {
				kol200++;
			}
			else if (atm[i] == 100) {
				kol100++;
			}
		}
		
		if (sum > sumAtm) {
			std::cout << "There are not enough funds in the ATM to issue them.\n";
			cashMachine.close();
			return 0;
		}
		number5000 = sum / 5000;
		if (number5000 > kol5000) {
			number5000 = kol5000;
		}
		sum -= number5000 * 5000;
		
		number2000 = sum / 2000;
		if (number2000 > kol2000) {
			number2000 = kol2000;
		}
		sum -= number2000 * 2000;
		
		number1000 = sum / 1000;
		if (number1000 > kol1000) {
			number1000 = kol1000;
		}
		sum -= number1000 * 1000;
		
		number500 = sum / 500;
		if (number500 > kol500) {
			number500 = kol500;
		}
		sum -= number500 * 500;
		
		number200 = sum / 200;
		if (number200 > kol200) {
			number200 = kol200;
		}
		sum -= number200 * 200;
		
		number100 = sum / 100;
		
		if (number100 > kol100) {
			std::cout << "There are no suitable banknotes for issuing the requested amount.\n";
			cashMachine.close();
			return 0;
		}
		cashMachine.close();

		cashMachineNew.open("C:\\C++\\WorkingFiles\\cashMachine.bin", std::ios::binary);
		if (!cashMachineNew.is_open()) {
			std::cerr << "The file was not found. Check the file path and try again.\n";
			return 0;
		}
		for (int i = 0; i < 1000; i++) {
			if (atm[i] == 5000 && number5000 > 0) {
				atm[i] = 0;
				number5000--;
			}
			else if (atm[i] == 2000 && number2000 > 0) {
				atm[i] = 0;
				number2000--;
			}
			else if (atm[i] == 1000 && number1000 > 0) {
				atm[i] = 0;
				number1000--;
			}
			else if (atm[i] == 500 && number500 > 0) {
				atm[i] = 0;
				number500--;
			}
			else if (atm[i] == 200 && number200 > 0) {
				atm[i] = 0;
				number200--;
			}
			else if (atm[i] == 100 && number100 > 0) {
				atm[i] = 0;
				number100--;
			}
		}
		cashMachineNew.write((char*)&atm, sizeof(atm));
		std::cout << "The requested amount has been issued.\n";
		cashMachineNew.close();
	}
}