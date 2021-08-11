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

#define SUNDAY 1
#define MONDAY 2
#define TUESDAY 3
#define WEDNESDAY 4
#define THURSDAY 5
#define FRIDAY 6
#define SATURDAY 7

#define SUNDAY_NAME "Sunday"
#define MONDAY_NAME "Monday"
#define TUESDAY_NAME "Tuesday"
#define WEDNESDAY_NAME "Wednesday"
#define THURSDAY_NAME "Thursday"
#define FRIDAY_NAME "Friday"
#define SATURDAY_NAME "Saturday"

#define GET_NAME(index) index ## _NAME

int main()
{
    int day;
    std::cin >> day;

    if (day == SUNDAY) {
        std::cout << GET_NAME(SUNDAY) << std::endl;
    }
    else if (day == MONDAY) {
        std::cout << GET_NAME(MONDAY) << std::endl;
    }
    else if (day == TUESDAY) {
        std::cout << GET_NAME(TUESDAY) << std::endl;
    }
    else if (day == WEDNESDAY) {
        std::cout << GET_NAME(WEDNESDAY) << std::endl;
    }
    else if (day == THURSDAY) {
        std::cout << GET_NAME(THURSDAY) << std::endl;
    }
    else if (day == FRIDAY) {
        std::cout << GET_NAME(FRIDAY) << std::endl;
    }
    else if (day == SATURDAY) {
        std::cout << GET_NAME(SATURDAY) << std::endl;
    }
}
