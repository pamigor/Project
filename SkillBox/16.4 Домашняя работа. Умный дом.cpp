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

enum haus { 
    HOME_POWER_SUPPLY = 1,
    HOME_POWER_OUTLETS = 2,
    LIGTH_INSIDE_THE_HOUSE = 4,
    LIGTH_IN_THE_GARDEN = 8,
    HEATING_IN_THE_HOUSE = 16,
    WATER_PIPE_HEATING = 32,
    CONDITIONER = 64 
};

int main()
{
    int option = 0;
    float colorTemperature = 0.0f;
    bool flag[7] = { false, false, false, false, false, false, false };
    //std::stringstream currentStatus;
    //std::string whitespace;

    for (int i = 0; i < 48; i++) {
        i %= 24;
        std::cout << "Current time ";
        printf("%02d:00", i);
        std::cout << "\nEnter the status of the sensors and lights: outside temperature, inside temperature, outside movement, light in the house: ";
        //std::cin >> inputParameters;
        //currentStatus << inputParameters;

        float outsideTemperature, insideTemperature;
        char outsideMovement[3], lightHouse[3];
        //currentStatus >> outsideTemperature >> whitespace >> insideTemperature >> whitespace >> outsideMovement >> whitespace >> lightHouse;
        scanf("%f%f%s%s", &outsideTemperature, &insideTemperature, outsideMovement, lightHouse);
        std::string lightHouseStr = lightHouse;
        std::string outsideMovementStr = outsideMovement;

        if (i == 0) {
            colorTemperature = 5000.0f;
            option |= HOME_POWER_SUPPLY; /*Включение питания дома*/
            option |= HOME_POWER_OUTLETS; /*Включение розеток дома*/
        }
        if (lightHouseStr == "on") /*Включение света в доме*/ {
            option |= LIGTH_INSIDE_THE_HOUSE;
        }
        else {
            option &= ~LIGTH_INSIDE_THE_HOUSE; /*Выключение света в доме*/
        }
        if (i >= 16 && i <= 20) /*Изменение цветовой температуры*/ {
            colorTemperature -= 460.0f;
        }
        if (((i >= 16 && i <= 23) || (i >= 0 && i <= 5)) && (outsideMovementStr == "yes")) /*Включение света в саду*/ {
            option |= LIGTH_IN_THE_GARDEN;
        }
        else {
            option &= ~LIGTH_IN_THE_GARDEN; /*Выключение света в саду*/
        }
        if (insideTemperature < 22) /*Включение отопления в доме*/ {
            option |= HEATING_IN_THE_HOUSE;
        }
        else if (insideTemperature > 25) /*Выключение отопления в доме*/ {
            option &= ~HEATING_IN_THE_HOUSE;
        }
        if (outsideTemperature < 0) /*Включение отопления водопровода*/ {
            option |= WATER_PIPE_HEATING;
        }
        else if (outsideTemperature > 5) /*Выключение отопления водопровода*/ {
            option &= ~WATER_PIPE_HEATING;
        }
        if (insideTemperature > 30) /*Включение кондиционера*/ {
            option |= CONDITIONER;
        }
        else if (insideTemperature < 25) /*Выключение кондиционера*/ {
            option &= ~CONDITIONER;
        }
        std::cout << "\n";
        if ((option & HOME_POWER_SUPPLY) && (flag[0] == false)) /*Вывод информации об электропитании дома*/ {
            std::cout << "The power supply of the house is turned on.\n";
            flag[0] = true;
        }
        else if (!(option & HOME_POWER_SUPPLY) && (flag[0] == true)) {
            std::cout << "The power supply of the house is turned off.\n";
            flag[0] = false;
        }
        
        if ((option & HOME_POWER_OUTLETS) && (option & HOME_POWER_SUPPLY) && (flag[1] == false)) /*Вывод информации об электропитании розеток*/ {
            std::cout << "The power supply of the outlets is turned on.\n";
            flag[1] = true;
        }
        else if ((!(option & HOME_POWER_OUTLETS) || !(option & HOME_POWER_SUPPLY)) && (flag[1] == true)) {
            std::cout << "The power supply of the outlets is turned off.\n";
            flag[1] = false;
        }

        if ((option & LIGTH_INSIDE_THE_HOUSE) && (option & HOME_POWER_SUPPLY) && (flag[2] == false)) /*Вывод информации об освещении в доме*/ {
            std::cout << "The lights inside the house are on.\n";
            flag[2] = true;
        }
        else if ((!(option & LIGTH_INSIDE_THE_HOUSE) || !(option & HOME_POWER_SUPPLY)) && (flag[2] == true)) {
            std::cout << "The lights inside the house are off.\n";
            flag[2] = false;
        }

        if (option & LIGTH_INSIDE_THE_HOUSE) /*Вывод информации о цветовой температуре*/ {
            std::cout << "Color temperature: " << colorTemperature << "K\n";
        }
        
        if ((option & LIGTH_IN_THE_GARDEN) && (option & HOME_POWER_SUPPLY) && (flag[3] == false)) /*Вывод информации об освещении в саду*/ {
            std::cout << "Outdoor light in the garden is on.\n";
            flag[3] = true;
        }
        else if ((!(option & LIGTH_IN_THE_GARDEN) || !(option & HOME_POWER_SUPPLY)) && (flag[3] == true)) {
            std::cout << "Outdoor light in the garden is off.\n";
            flag[3] = false;
        }

        if ((option & HEATING_IN_THE_HOUSE) && (option & HOME_POWER_SUPPLY) && (flag[4] == false)) /*Вывод информации об отоплении в доме*/ {
            std::cout << "The heating in the house is turned on.\n";
            flag[4] = true;
        }
        else if ((!(option & HEATING_IN_THE_HOUSE) || !(option & HOME_POWER_SUPPLY)) && (flag[4] == true)) {
            std::cout << "The heating in the house is turned off.\n";
            flag[4] = false;
        }

        if ((option & WATER_PIPE_HEATING) && (option & HOME_POWER_SUPPLY) && (flag[5] == false)) /*Вывод информации об отоплении водопровода*/ {
            std::cout << "Water pipe heating is on.\n";
            flag[5] = true;
        }
        else if ((!(option & WATER_PIPE_HEATING) || !(option & HOME_POWER_SUPPLY)) && (flag[5] == true)) {
            std::cout << "Water pipe heating is off.\n";
            flag[5] = false;
        }

        if ((option & CONDITIONER) && (option & HOME_POWER_SUPPLY) && (flag[6] == false)) /*Вывод информации о кондиционере*/ {
            std::cout << "The air conditioner is on.\n";
            flag[6] = true;
        }
        else if ((!(option & CONDITIONER) || !(option & HOME_POWER_SUPPLY)) && (flag[6] == true)) {
            std::cout << "The air conditioner is off.\n";
            flag[6] = false;
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}