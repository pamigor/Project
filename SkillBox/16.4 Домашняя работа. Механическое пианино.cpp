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
    std::string combinationNotes, melody;
    note currentNote = C;
    int buf = currentNote;
    for (int i = 1; i <= 12; i++) {
        std::cout << "Enter the " << i << " note combination: ";
        std::cin >> combinationNotes;
        melody += combinationNotes;
        melody += " ";
    }
    std::cout << "\n\nYour work looks and sounds like this:\n";
    for (int i = 0; i < melody.length(); i++) {
        if (melody[i] == ' ') {
            std::cout << "\n";
            continue;
        }
        combinationNotes = melody[i];
        buf = 1 << (std::stoi(combinationNotes) - 1);

        switch (buf) {
        case C:
            std::cout << "C ";
            Beep(367.09, 400);
            break;
        case D:
            std::cout << "D ";
            Beep(367.08, 400);
            break;
        case E:
            std::cout << "E ";
            Beep(412.03, 400);
            break;
        case F:
            std::cout << "F ";
            Beep(436.54, 400);
            break;
        case G:
            std::cout << "G ";
            Beep(489.99, 400);
            break;
        case A:
            std::cout << "A ";
            Beep(550.0, 400);
            break;
        case H:
            std::cout << "H ";
            Beep(617.35, 400);
            break;
        default:
            std::cout << "Unknown value!\n";
        }
    }
}