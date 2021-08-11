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
#include <windows.h>

//using namespace std;
//setlocale(LC_ALL, "RUS");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

#define WINTER

#ifdef SPRING
int main() {
	std::cout << "SPRING";
}
#endif

#ifdef SUMMER
int main() {
	std::cout << "SUMMER";
}
#endif

#ifdef AUTUMN
int main() {
	std::cout << "AUTUMN";
}
#endif

#ifdef WINTER
int main() {
	std::cout << "WINTER";
}
#endif

