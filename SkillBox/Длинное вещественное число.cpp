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

int main() {
    std::string number;
    int counter = 0;
    bool flag;
    std::cout << "\nEnter a number: ";
    std::cin >> number;

    for (int i = 0; i < number.length(); i++) {
        if (number[i] == '.') {
            counter++;
        }
        if (((number[0] != '-') && (number[0] != '.') && ((number[0] < '0') || (number[0] > '9')))
            || ((i != 0) && ((number[i] < '0' || number[i] > '9') && (number[i] != '.'))) || (counter > 1)) {
            flag = false;
        }
        else {
            flag = true;
        }
    }
    std::cout << (flag ? "\nYes\n" : "\nNo\n");
}