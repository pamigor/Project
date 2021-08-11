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

bool correctInput(std::string number) {
    int counter = 0;
    bool flag = false;
    for (int i = 0; i < number.length(); i++) {
        if (number[i] == '.') {
            counter++;
        }
        if (((number[0] != '-') && (number[0] != '.') && ((number[0] < '0') || (number[0] > '9'))) ||
            ((i != 0) && ((number[i] < '0' || number[i] > '9') && (number[i] != '.'))) ||
            (counter > 1)) {
            flag = true;
            break;
        }
        else {
            flag = false;
        }
    }
    return flag;
}

std::string integerPartNumber(std::string s) {
    std::string newS = "";
    if (s[0] == '-') {
        s = s.substr(1);
    }
    if (s[0] == '.') {
        return "0";
    }
    while (s[0] == '0' && s[1] != '.') {
        s = s.substr(1);
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            newS = s.substr(0, s.find('.'));
            break;
        }
        else {
            newS = s;
        }
    }
    return newS;
}

std::string fractionalPartNumber(std::string s) {
    std::string newS = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.' && s[i+1] != '\0') {
            newS = s.substr(s.find('.') + 1);
            break;
        }
        else {
            newS = "0";
        }
    }
    return newS;
}

char accessingStringCharacter(char symbol) {
    return (symbol == '\0' ? '0' : symbol);
}

int main() {
    std::string firstNumber, secondNumber;
    do {
        std::cout << "\nEnter the first number: ";
        std::cin >> firstNumber;
    } while (correctInput(firstNumber));
    do {
        std::cout << "Enter the second number: ";
        std::cin >> secondNumber;
    } while (correctInput(secondNumber));

    std::string integerPartFirstNumber = integerPartNumber(firstNumber);
    std::string fractionalPartFirstNumber = fractionalPartNumber(firstNumber);
    std::string integerPartSecondNumber = integerPartNumber(secondNumber);
    std::string fractionalPartSecondNumber = fractionalPartNumber(secondNumber);
    int maxLength = std::max(fractionalPartFirstNumber.length(), fractionalPartSecondNumber.length());
        
    if ((firstNumber[0] != '-') && (secondNumber[0] == '-')) {
        std::cout << "\nMore\n";
    }
    else if ((firstNumber[0] == '-') && (secondNumber[0] != '-')) {
        std::cout << "\nLess\n";
    }
    else if ((integerPartFirstNumber.length() > integerPartSecondNumber.length()) &&
              ((firstNumber[0] != '-') && (secondNumber[0] != '-'))) {
        std::cout << "\nMore\n";
    }
    else if ((integerPartFirstNumber.length() < integerPartSecondNumber.length()) && 
              ((firstNumber[0] != '-') && (secondNumber[0] != '-'))) {
        std::cout << "\nLess\n";
    }
    else if ((integerPartFirstNumber.length() < integerPartSecondNumber.length()) &&
        ((firstNumber[0] == '-') && (secondNumber[0] == '-'))) {
        std::cout << "\nMore\n";
    }
    else if ((integerPartFirstNumber.length() > integerPartSecondNumber.length()) &&
        ((firstNumber[0] == '-') && (secondNumber[0] == '-'))) {
        std::cout << "\nLess\n";
    }
    else {
        if ((firstNumber[0] != '-') && (secondNumber[0] != '-')) {
            for (int i = 0; i < integerPartFirstNumber.length(); i++) {
                if (integerPartFirstNumber[i] > integerPartSecondNumber[i]) {
                    std::cout << "\nMore\n";
                    return 0;
                }
                else if (integerPartFirstNumber[i] < integerPartSecondNumber[i]) {
                    std::cout << "\nLess\n";
                    return 0;
                }
            }
        }
        if ((firstNumber[0] == '-') && (secondNumber[0] == '-')) {
            for (int i = 1; i < integerPartFirstNumber.length(); i++) {
                if (integerPartFirstNumber[i] < integerPartSecondNumber[i]) {
                    std::cout << "\nMore\n";
                    return 0;
                }
                else if (integerPartFirstNumber[i] > integerPartSecondNumber[i]) {
                    std::cout << "\nLess\n";
                    return 0;
                }
            }
        }
        if ((firstNumber[0] != '-') && (secondNumber[0] != '-')) {
            for (int i = 0; i < maxLength; i++) {
                if (accessingStringCharacter(fractionalPartFirstNumber[i]) > accessingStringCharacter(fractionalPartSecondNumber[i])) {
                    std::cout << "\nMore\n";
                    return 0;
                }
                else if (accessingStringCharacter(fractionalPartFirstNumber[i]) < accessingStringCharacter(fractionalPartSecondNumber[i])) {
                    std::cout << "\nLess\n";
                    return 0;
                }
            }
        }
        if ((firstNumber[0] == '-') && (secondNumber[0] == '-')) {
            for (int i = 0; i < maxLength; i++) {
                if (accessingStringCharacter(fractionalPartFirstNumber[i]) < accessingStringCharacter(fractionalPartSecondNumber[i])) {
                    std::cout << "\nMore\n";
                    return 0;
                }
                else if (accessingStringCharacter(fractionalPartFirstNumber[i]) > accessingStringCharacter(fractionalPartSecondNumber[i])) {
                    std::cout << "\nLess\n";
                    return 0;
                }
            }
        }
        std::cout << "\nEqual\n";
    }
}