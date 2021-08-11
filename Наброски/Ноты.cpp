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

using namespace std;


std::map<char, double> note{
    {'C', 32.703}, {'D', 36.708}, {'E', 41.203}, // До, Ре, Ми
    {'F', 43.654}, {'G', 48.999}, {'A', 55.}, // Фа, Соль, Ля
    {'H', 61.735} }; // Си

const int duration{ 400 }; // миллисекунд
const int octave{ 4 }; // октава

int main()
{
    while (1) {
        Beep(note['C'] * octave, duration);
        Beep(note['D'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['F'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['A'] * octave, duration);
        Beep(note['H'] * octave, duration);

        Beep(note['H'] * octave, duration);
        Beep(note['A'] * octave, duration);
        Beep(note['G'] * octave, duration);
        Beep(note['C'] * octave, duration);
        Beep(note['D'] * octave, duration);
        Beep(note['E'] * octave, duration);
        Beep(note['F'] * octave, duration);
    }
}
