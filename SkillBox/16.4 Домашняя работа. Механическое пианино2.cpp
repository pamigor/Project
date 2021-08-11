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
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");

enum note { C = 1, D = 2, E = 4, G = 8, F = 16, A = 32, H = 64 };

int main()
{
    std::string combinationNotes;
    int melody[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for (int i = 0; i < 12; i++) {
        std::cout << "Enter the " << i + 1 << " note combination: ";
        std::cin >> combinationNotes;
        for (int j = 0; j < combinationNotes.length(); j++) {
            melody[i] |= (1 << ((combinationNotes[j] - '0') - 1));
        }
    }
    std::cout << "\n\nYour work looks and sounds like this:\n";
    for (int i = 0; i < 12; i++) {
        if (melody[i] & C) {
            std::cout << "C ";
        }
        if (melody[i] & D) {
            std::cout << "D ";
        }
        if (melody[i] & E) {
            std::cout << "E ";
        }
        if (melody[i] & F) {
            std::cout << "F ";
        }
        if (melody[i] & G) {
            std::cout << "G ";
        }
        if (melody[i] & A) {
            std::cout << "A ";
        }
        if (melody[i] & H) {
            std::cout << "H ";
        }
        std::cout << "\n";
    }
}